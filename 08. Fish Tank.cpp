#include <iostream>
using namespace std;

int main(){

    double lenght;
    cin >> lenght;
    double width;
    cin >> width;
    double height;
    cin >> height;
    double percent;
    cin >> percent;

    double volume;
    volume = (lenght * width * height) * 0.001;

    cout.setf(ios::fixed);
    cout.precision(3);
    cout << volume - (volume * (percent / 100)) << endl;

    return 0;
}
