#include <iostream>
using namespace std;

int main(){

    double units;
    cin >> units;

    double lenght;
    cin >> lenght;

    double width;
    cin >> width;


    double area = units * (lenght + 0.6) * (width + 0.6);
    double kare = units * (lenght / 2) * (lenght / 2);

    double price = (area * 7) + (kare * 9);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << price << " USD" << endl;
    cout << price * 1.85 << " BGN" << endl;

    return 0;
}
