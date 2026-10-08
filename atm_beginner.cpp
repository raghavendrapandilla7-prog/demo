#include <iostream>
#include<string.h>
using namespace std;
class Acct
{
    float balance;
    public:
        Acct()
        {
            balance = 0;
        }
        void checkBalance()
        {
            cout << "BALANCE : " <<balance <<endl;
        }
        void withDraw(const int amt)
        {
            if(amt>0 && amt <= balance)
            {
                balance = balance - amt;
            }
            else
                cout<< "Insufficent Balance! ! !. . ."<< endl;
        }
        
        void Deposit(const int amt)
        {
            if(amt>0)
                 balance = balance + amt;
        }
        ~Acct()
        {
            cout<<"destructor is called........\n";
        }
};
int main()
{
    char ch{};

    Acct raghav;

    int amount{},op{}, count{3};
  
    cout<< string(30, '=') << "WELCOME TO ATM" << string(30, '=') <<endl;
  
    while(cin.get(ch) && ch !='\n' );

    cout << "INSERT THE ATM.........." << endl;

    while(cin.get(ch) && ch !='\n' );

    while(1)
    {
        cout << "SELECT:\n1)checkBalance\n2)withDraw\n3)Depoit\n";

        cin >> op;

        switch(op)
        {
            case 1:raghav.checkBalance();break;

            case 2:

            cout << "Enter the cash to withdraw:";

            if(!(cin >> amount)){return 1; }

            raghav.withDraw(amount);break;

            case 3:

                cout << "Enter the cash to deposit: ";

                if(!(cin >> amount)){return 1; }

                raghav.Deposit(amount);break;

            default:
                cout<<"INVALID OPTION !!!, last"<< count <<" chances Only availble........."<<endl;
        }
    }

    return 0;
}