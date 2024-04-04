/* AI소프트웨어학과 2024591005 김성혁 */
#include <iostream>
#include <string>
using namespace std;

class Account {
    public:
        string name;
        int num;
        int money;
        string getOwner();
        int inquiry();
        void deposit(int m);
        int withdraw(int m);
        Account();
        Account(string n, int num, int m);
};

string Account::getOwner() {
    return name;
}

int Account::inquiry() {
    return money;
}

void Account::deposit(int m) {
    money += m;
}

int Account::withdraw(int m) {
    return money -= m;
}

Account::Account() {}

Account::Account(string n, int num, int m) {
    name = n;
    num = num;
    money = m;
}

int main(void) {
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout<<a.getOwner()<<"의 잔액은 "<<a.inquiry()<<endl;
    int money = a.withdraw(20000);
    cout<<a.getOwner()<<"의 잔액은 "<< a.inquiry()<<endl;
    return 0;
}