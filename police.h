#ifndef __pol
#define __pol
#include<string>
#include "Challan.h"
#include "login.h"
using std::string;
namespace project
{
    class police{
        private:
            int current_penalty_cost;
            string mistake;
            string image_police;
            string vehicle_number;
        public:
            police(login& lo);
            void checking_vehicle();
            void current_mistake(Challan& co);
            void Taking_image(Challan& co);
            void checking_challan(Challan& co);
            void Warning(Challan& co);
    };
}

#endif