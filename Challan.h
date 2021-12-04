#ifndef __cha
#define __cha
#include<string>

using std::string;

namespace project
{
    class Challan{
        friend class police;
        private:
            string due_penalties="";
            int Value_of_penalties=0;
            string image;
            
        public:
        Challan();
        void show_due_penalties();
        void clear_penalties();
        void show_image();
        int show_value_of_penalties();
      
        
    };
}

#endif