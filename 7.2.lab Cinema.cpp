#include <iostream>
using namespace std;

int main(){

    string type;
    cin >> type;

    double totalProfit = 0;
    int rows, cols;
    cin >> rows >> cols;

    if (type == "Premiere")
    {
        totalProfit = rows * cols *12;
    }
    else if (type == "Normal")
    {
        totalProfit = rows * cols * 7.5;
    }
    else
    {
        totalProfit = rows * cols * 5.0;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalProfit << " leva" << endl;

    return 0;
}
