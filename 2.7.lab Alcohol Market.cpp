#include <iostream>
using namespace std;

int main(){

    double whiskeyPrice, beerQuantity, wineQuantity, rakiqQuantity, whiskeyQuantity ;
    cin >> whiskeyPrice;
    cin >> beerQuantity;
    cin >> wineQuantity;
    cin >> rakiqQuantity;
    cin >> whiskeyQuantity;

    double rakiqPrice = whiskeyPrice * 0.5;
    double winePrice = rakiqPrice * 0.6;
    double beerPrice = rakiqPrice * 0.2;

    double moneyForWhiskey = whiskeyQuantity * whiskeyPrice;
    double moneyForBeer = beerQuantity * beerPrice;
    double moneyForWine = wineQuantity * winePrice;
    double moneyForRakiq = rakiqQuantity * rakiqPrice;

    double moneyNeeded = moneyForWhiskey + moneyForBeer + moneyForWine + moneyForRakiq;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << moneyNeeded << endl;

    return 0;
}
