#include <iostream>
using namespace std;

class Heater
{
    private:
        int temperature;
    public:
        Heater()
        {
            temperature = 15;
            accessor();
        }

        void cooler()
        {
            temperature -= 5;
            accessor();
        }

        void warmer()
        {
            temperature += 5;
            accessor();
        }

        void accessor()
        {
            cout << "The temperature is " << temperature << endl;
        }

        ~Heater()
        {
            cout << "Heater class destroyed\n";
        }
};

int main()
{
    Heater h;
    while(1)
    {
        unsigned short int choice;
        cout << "1.Cool\n2.Warm\n3.Exit\n\nChoose: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            h.cooler();
            break;
        case 2:
            h.warmer();
            break;
        case 3:
            return 0;
        default:
            cout << "Enter any of above options\n";
        }

    }

    return 0;
}