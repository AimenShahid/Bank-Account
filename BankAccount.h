#include <iostream>
using namespace std;
class BankAccount
{
    public:
    void display()
    {
        cout<<"Hi! I am a bank account"<<endl;
        cout<<"AccountNumber=";
        cout<<this->AccountNumber<<endl;
        cout<<"AccountHolder=";
        cout<<this->AccountHolder<<endl;
        cout<<"CurrentBalance=";
        cout<<this->CurrentBalance<<endl;
       
    }
    int getAccountNumber()
    {
        return this->AccountNumber;
    }
    string getAccountHolder()
    {
        return this->AccountHolder;
    }
    float getCurrentBalance()
    {
        return this->CurrentBalance;
    }
    void setAccountNumber()
    {
        this->AccountNumber=12345;
    }
    void setAccountHolder()
    {
        this->AccountHolder="Aimen";
    }
    void setCurrentBalance()
    {
        this->CurrentBalance=10000;
    }
    
    BankAccount()
    {
        this->AccountNumber=12345;
        this->AccountHolder="Aimen";
        this->CurrentBalance=10000;
        
    }
    private:
    int AccountNumber;
    string AccountHolder;
    float CurrentBalance;
    
};