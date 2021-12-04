
#include<iostream>
#include<string>
#include "Challan.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

namespace project
{
 Challan::Challan(){
     cout<<"All due penalties of the current Vehicle are loaded from the database "<<endl;
     due_penalties="No_Parking\n";
     due_penalties+="No_Helmet\n";
     Value_of_penalties=700;
 }
 void Challan::show_due_penalties(){
     cout<<"THE DUE PENALTIES ARE: \n";
     cout<<due_penalties<<endl;
     cout<<"Fine Value: "<<Value_of_penalties<<endl;
 }
 int Challan::show_value_of_penalties(){
      
     return Value_of_penalties;
 }
 void Challan::show_image(){
     cout<<"Displaying the image of the violation"<<endl;
     cout<<endl;
     cout<<"......................."<<endl;
     cout<<".                     ."<<endl;
     cout<<".                     ."<<endl;
     cout<<".                     ."<<endl;
     cout<<".                     ."<<endl;
     cout<<".                     ."<<endl;
     cout<<".                     ."<<endl;
     cout<<".                     ."<<endl;
     cout<<"......................."<<endl<<endl;
 }
 void Challan::clear_penalties(){
    Value_of_penalties=0;
    due_penalties="";
 }

}