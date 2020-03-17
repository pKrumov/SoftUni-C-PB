#include <iostream>
using namespace std;

int main(){

    double excursionPrice;
    cin >> excursionPrice;

    int puzzels, talkingDolls, teddyBears, minions, trucks;
    cin >> puzzels >> talkingDolls >> teddyBears >> minions >> trucks;

    double puzzelsProfit = puzzels * 2.60;
    double talkingDollsProfit = talkingDolls * 3.00;
    double teddyBearsProfit = teddyBears * 4.10;
    double minionsProfit = minions * 8.20;
    double truckProfit = trucks * 2.00;

    double totalProfit = puzzelsProfit + talkingDollsProfit + teddyBearsProfit + minionsProfit +truckProfit;
    int toysCnt = puzzels + talkingDolls + teddyBears + minions + trucks;

    if(toysCnt >= 50)
    {
        totalProfit = totalProfit * 0.75;
    }

    totalProfit = totalProfit * 0.9;

    cout.setf(ios::fixed);
    cout.precision(2);

    if(totalProfit >= excursionPrice)
    {
        cout << "Yes! " << totalProfit - excursionPrice << " lv left." << endl;
    }
    else
    {
        cout << "Not enough money! " << excursionPrice - totalProfit << " lv needed." << endl;
    }

    return 0;
}
