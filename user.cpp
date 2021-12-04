#include <iostream>
#include <string>
#include "login.h"
#include "user.h"
#include "Challan.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

namespace project
{
    user::user(login &loo)
    {
        if (loo.validate2())
        {
            cout << "You are logged in successfully\n Your Details are filled" << endl;
        }
    }
    void user::check_challan_due(Challan &co)
    {
        co.show_due_penalties();
    }
    void user::pay_challan(Challan &co)
    {
        cout << "The amount to be paid" << endl;
        cout << co.show_value_of_penalties() << endl;
        cout << "Choose an option below (NO SPACES) :" << endl;
        cout << "DEBIT CARD\nCREDIT CARD\nNET BANKING\nUPI\n";
        cin >> type_of_cards;

        cout << "Processing......" << endl;
        while (1)
        {
            cout << "Enter Amount: ";
            cin >> amount_paid_by_user;
            cout << "Processing......" << endl;

            if (amount_paid_by_user == co.show_value_of_penalties())
            {
                cout << "Your Payment is successfull\nYour challans are cleared" << endl;
                co.clear_penalties();
                break;
            }
            else
            {
                cout << "You Have Entered Wrong amount Enter the correct amount " << endl;
                cout << "Press 'Y' to continue the payment and select the correct amount\n Press 'X' to discontinue the payment" << endl;
                cin >> discontinue;
                if (discontinue == 'X')
                {
                    cout << "Payment process is being cancelled.......\n Payment process is cancelled" << endl;
                    break;
                }
            }
        }
    }
    void user::check_image(Challan &co)
    {
        co.show_image();
    }

}
