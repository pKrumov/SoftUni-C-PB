#include <iostream>
using namespace std;

int main(){

    double budget, suitPrice;
    int peopleCnt;

    cin >> budget >> peopleCnt >> suitPrice;

    double decorPrice = budget * 0.1;
    double suitTtlPrice = peopleCnt * suitPrice;

    if (peopleCnt > 150)
    {
        suitTtlPrice = suitTtlPrice * 0.9;
    }
    double totalPrice = decorPrice + suitTtlPrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget >= totalPrice)
    {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << budget - totalPrice << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << totalPrice - budget << " leva more." << endl;
    }

    return 0;
}
