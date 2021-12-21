#ifndef __log
#define __log
//ldflggl
#include <iostream>
using std::string;

 namespace project{
     class login{
         private:
         string username;
         string password;
         char type;
         bool information;

         public:
         login();
         ~login();
         void to_check_police_or_user();
         void set_password();
         void set_user();
         char check_type();
         void validate();
         bool validate2();

     };
     
 }

#endif