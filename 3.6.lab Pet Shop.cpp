#include <iostream>
using namespace std;

int main(){

    double dogFood;
    cin >> dogFood;
    double otherFood;
    cin >> otherFood;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << (dogFood * 2.5) + (otherFood * 4) << " lv." << endl;

    return 0;
}
