#include<iostream>
#include "police.h"
#include "Challan.h"
#include "login.h"
#include "user.h"

using project::user;
using project::police;
using project::Challan;

using project::login;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;


int main ()
{
    login lo;
    lo.to_check_police_or_user();
    lo.set_user();
    lo.set_password();
    lo.validate();
    if(lo.check_type()=='P')
    {
        police po(lo);
        po.checking_vehicle();
        Challan co;
        po.current_mistake(co);
        po.Taking_image(co);
        po.checking_challan(co);
        po.Warning(co);
    }
    else{
        user uo(lo);
        Challan co;
        uo.check_challan_due(co);
        cout<<"Press Y to check the image of the Penalties ELSE Press X"<<endl;
        char check;
        cin>>check;
        if(check=='Y')
        uo.check_image(co);
        cout<<"Press Y to PAY the DUE Penalties ELSE Press X"<<endl;
        cin>>check;
        if(check=='Y')
        uo.pay_challan(co);
        cout<<"Press Y to LogOut or Press X to check the challan Details Again"<<endl;
        cin>>check;

        if(check=='X')
        uo.check_challan_due(co),cout<<endl<<"Exit"<<endl;
       
    }

}