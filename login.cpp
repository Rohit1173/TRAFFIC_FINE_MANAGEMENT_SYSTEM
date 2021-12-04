#include<iostream>
#include "login.h"
using std::cout;
using std::cin;
using std::string;
using std::endl;

namespace project{
    login::~login()
    {
        cout<<"YOU ARE SUCCESSFULLY LOGGED OUT.."<<endl;
    }
    void login::to_check_police_or_user(){
        while(1){
        cout<<"IF YOU ARE POLICE TYPE 'P' ELSE TYPE 'U' "<<endl;
        cin>>type;
        if(type=='P'||type=='U'){
            break;
        }
        else{
            cout<<"ENTER A VALID RESPONSE"<<endl;
        }
        }

    }
     login::login(){
        cout<<"                                                           ---------------------                                         "<<endl;
        cout<<"                                                           | E-CHALLAN WEBSITE |                                         "<<endl;
        cout<<"                                                           ---------------------                                         "<<endl;
        cout<<endl<<"                                         -----------WELCOME TO THE OFFICIAL E-CHALLAN WEBSITE------------             "<<endl;
    }

 void login::set_user(){
     if(type=='U'){
         cout<<"ENTER YOUR VEHICLE NUMBER (NO SPACES) :"<<endl;
         
     }
     else{
         cout<<"ENTER YOUR USERNAME : "<<endl;
     }
     
     cin>>username;
 }
 void login::set_password(){
     if(type=='U'){
         cout<<"ENTER THE PHONE NUMBER LINKED WITH VEHICLE :"<<endl;
     }
     else{
         cout<<"ENTER YOUR PASSWORD :"<<endl;
     }
     cin>>password;
 }
 char login::check_type(){
     return type;

 }
 void login::validate(){
     cout<<"CHECKING THE DETAILS....... "<<endl;
 }
  bool login::validate2(){
     return true;
 }

}


 
