#ifndef __user
#define __user
#include<string>
#include "Challan.h"
#include "login.h"
using std::string;
namespace project{
    class user{
    private:
    string name;
    string phone_number;
    string email;
    string license;
    string type_of_cards;
    int amount_paid_by_user;
    char discontinue;

    public:
    user(login& lo);
    void check_challan_due(Challan& co);
    void pay_challan(Challan& co);
    void check_image(Challan& co);


    };


}
#endif