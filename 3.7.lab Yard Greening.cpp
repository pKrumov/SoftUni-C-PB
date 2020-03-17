#include <iostream>
using namespace std;

int main(){

    double area;
    cin >> area;

    double price;
    price = 7.61 * area;

    double discount;
    discount = price * 0.18;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "The final price is: " << price - discount << " lv." << endl;
    cout << "The discount is: " << discount << " lv." << endl;


    return 0;
}
