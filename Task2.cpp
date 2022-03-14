#include <iostream>
using namespace std;

class Parity
{
    private:
        int size;
        int *arr;
        int puts;
    public:
        Parity()
        {
            size = 0;
            puts = 0;
            arr = new int[size];
        }

        void put(int num);
        void print();
        void deleteNum();
        bool test();
};

int main()
{
    Parity p;
    unsigned short int choice;
    cout << "1.Put num\n2.Delete num\n3.Print elements\n4.Test puts\n5.Exit";
    while(true)
    {
        cout << "\n\nChoose: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                int num;
                cout << "Enter any number\n";
                cin >> num;
                p.put(num);
                break;
            case 2:
                p.deleteNum();
                break;
            case 3:
                p.print();
                break;
            case 4:
                if(p.test() == true)
                    cout << "Even puts\n";
                else
                    cout << "Odd puts\n";
                break;
            case 5:
                return 0;
            default:
                cout << "Select any of the above options\n";

        }
    }

    return 0;

}

void Parity::put(int num)
{
    size++;
    arr[size-1] = num;
    puts++;
}

void Parity::print(void)
{
    for(int i = 0;i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void Parity::deleteNum()
{
    size--;
    int *temp = new int [size];
    for(int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;
}

bool Parity::test()
{
    if(puts%2==0)
        return true;
    else
        return false;
}