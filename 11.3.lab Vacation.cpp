#include <iostream>
using namespace std;

int main(){

    double moneyNeeded;
    cin >> moneyNeeded;
    double curentMoney;
    cin >> curentMoney;
    int spendDay = 0;
    int dayCnt = 0;

    while(moneyNeeded > curentMoney)
    {
        dayCnt++;
        string operation;
        cin >> operation;
        double money;
        cin >> money;
        if(operation == "spend")
        {
            spendDay++;
            curentMoney -= money;
            if(curentMoney < 0)
            {
                curentMoney = 0;
            }
        }
        else
        {
            curentMoney += money;
            spendDay = 0;
        }
        if(spendDay == 5)
        {
            break;
        }
    }
    if(spendDay == 5)
    {
        cout << "You can't save the money."<< endl;
        cout << dayCnt << endl;
    }
    else
    {
        cout << "You saved the money for " << dayCnt << " days." << endl;
    }

    return 0;
}
