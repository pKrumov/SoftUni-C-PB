#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double lenght = abs(x1 - x2);
    double height = abs(y2 - y1);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << lenght * height << endl;
    cout << (lenght + height) * 2 << endl;


    return 0;
}
