#include<iostream>
#include<string>
#include "login.h"
#include "police.h"
#include "Challan.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

namespace project
{
    police::police(login& loo)
    {
        if(loo.validate2())
        {
            cout<<"You are logged in successfully\n Your Details are filled"<<endl;
        }
    }
    void police::current_mistake(Challan& co)
    {
        cout<<"Traffic Rule Violated (No spaces) :"<<endl;
        cin>>mistake;
        co.due_penalties+=mistake;
        co.due_penalties+="\n";
        cout<<"Penalty Cost :"<<endl;
        cin>>current_penalty_cost;
        co.Value_of_penalties+=current_penalty_cost;
    }
    void police::checking_challan(Challan& co)
    {        
        cout<<"Due penalties For this vechile\n";
        cout<<co.due_penalties;
        cout<<"Fine to be paid: "<<co.Value_of_penalties<<endl;
    }
    void police::checking_vehicle()
    {
        cout<<"Enter the Vehicle Number (No spaces) :\n";
        
        cin>>vehicle_number;
        cout<<"The Details of caught Vehicle are Searched in database and Challan object of the vehicle is created"<<endl;
    }
    void police::Taking_image(Challan& co)
    {
        cout<<"Image of the mistake is Taken and stored in database"<<endl;
        co.image+=image_police;
    }
    void police::Warning(Challan& co)
    {
        if(co.Value_of_penalties > current_penalty_cost)
        {
            cout<<"THE VEHICLE HAS DUE PENALTIES!!!!\n";
        }
    }
}