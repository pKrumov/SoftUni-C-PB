#include <iostream>
using namespace std;

int main(){

    double num;
    cin >> num;

    if(num >= -100 && num <= 100 && num != 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
