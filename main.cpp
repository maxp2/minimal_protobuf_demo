#include <iostream>
#include <string>

#include "outputs/mymessage.pb.h"
#include <google/protobuf/text_format.h>

int main()
{
    std::cout << "start of program" << std::endl;
    std::cout << "build timestamp : " << __DATE__ << " " << __TIME__ << std::endl;
    
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    
    my_message_t my_message;
    //text_formatter();
    
    my_message.set_mystring("teststring");
    my_message.set_myint(42);
    my_message.set_myfloat(3.14159);
    my_message.set_mybool(true);
    
    
    std::cout << "--------Direct serialization to std::cout--------" << std::endl;
    if (!my_message.SerializeToOstream(&std::cout))
    {
      std::cerr << "Failed to write to std::cout." << std::endl;
      return -1;
    }
    std::cout << std::endl << std::endl;
    
    
    std::cout << "--------Serialization to std::cout via textproto formatter--------" << std::endl;
    std::string temp = "temp";
    
    /*
    temp = my_message.DebugString();
    std::cout << temp;
    */
    
    
    if (!google::protobuf::TextFormat::PrintToString(my_message, &temp)) 
    {
      std::cerr << "Failed to write to string." << std::endl;
      return -1;
    }
    
    std::cout << "Encoded string : " << std::endl << temp << std::endl;
    
    std::cout << "--------Field merging / updating--------" << std::endl;
    
    if (!google::protobuf::TextFormat::MergeFromString("myfloat   :       1.414", &my_message))
    {
        std::cerr << "Failed to update message." << std::endl;
        return -1;
    }
    
    std::cout << "Merged debug output: " << std::endl << my_message.DebugString() << std::endl;
    
    // Optional
    google::protobuf::ShutdownProtobufLibrary();
    
    std::cout << "end of program" << std::endl;
    
    return 0;
}
