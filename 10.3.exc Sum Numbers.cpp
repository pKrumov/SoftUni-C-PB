#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main(){

    string input;
    cin >> input;
    int sum = 0;

    while(input != "Stop")
    {
        int curentNum = stoi(input);
        sum += curentNum;
        cin >> input;
    }

    cout << sum << endl;

    return 0;
}
