#include <iostream>
using namespace std;

int main(){

    double number;
    string input;
    string output;
    double tempCm = 0;
    double result = 0;
    cin >> number >> input >> output;

    if(input == "mm")
    {
        tempCm = number / 10;
    }
    else if (input == "cm")
    {
        tempCm = number;
    }
    else if (input == "m")
    {
        tempCm = number * 100;
    }

    if (output == "mm")
    {
        result = tempCm * 10;
    }
    else if (output == "cm")
    {
        result = tempCm;
    }
    else if (output == "m")
    {
        result = tempCm / 100;
    }

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << result << endl;

    return 0;
}
