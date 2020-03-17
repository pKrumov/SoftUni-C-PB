#include <iostream>
using namespace std;

int main(){

    int campaningDays;
    cin >> campaningDays;
    int craftsMan;
    cin >> craftsMan;
    int cakes;
    cin >> cakes;
    int waffles;
    cin >> waffles;
    int panCakes;
    cin >> panCakes;

    double cakesPrice = cakes * 45;
    double wafflesPrice = waffles * 5.80;
    double panCakesPrice = panCakes * 3.20;

    double totalIntakePerDay = (cakesPrice + wafflesPrice + panCakesPrice) * craftsMan;
    double totalIntake = totalIntakePerDay * campaningDays;
    double cleanMoney = totalIntake * 0.875;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << cleanMoney;

    return 0;
}
