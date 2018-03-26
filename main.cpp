#include <iostream>
#include "BankAccount.h"
using namespace std;


int main()
{
    BankAccount myaccount;
    myaccount.display();
    int a=myaccount.getAccountNumber();
    string b=myaccount.getAccountHolder();
    float c=myaccount.getCurrentBalance();
    system("pause");
}
        