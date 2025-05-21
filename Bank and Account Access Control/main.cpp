/* Create a class Bank that contains a nested class Account.

The Account class should have private data: accountNumber, balance.

Make a static data member in Account to keep track of the total number of accounts created.

Define a friend function DisplayAccountInfo that can access the private members of Account and Bank.

Tasks:

Implement account creation that increments the static counter.

Use the friend function to display account info and bank name.
 */

 #include <string>
 #include <iostream>
 using namespace std;

class Bank{
    string name="Chase bank";
    public:
    class Account{
        int accountNumber, balance;
        static int accGen;

        public:
        Account(int balance=0){
            this->balance=balance;
            accountNumber=++accGen;
        };

        friend void display(const Account& acc, Bank& b);
    };
    friend void display(const Account& acc, Bank& b);
};

int Bank::Account::accGen = 0;

void display(const Bank::Account& acc, Bank& b){
    cout<<"bank name : "<<b.name<<endl;
    cout<<"balance : "<< acc.balance<<endl;
    cout<<"acc number : "<<acc.accountNumber<<endl;
};

int main(){

    Bank b;
    Bank::Account acc1(5000);
    Bank::Account acc2(15000);

    display(acc1,b);
    display(acc2,b);

    return 0;
}