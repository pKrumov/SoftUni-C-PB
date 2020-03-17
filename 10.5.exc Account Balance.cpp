#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;
    int counter = 0;
    double balance = 0.0;
    cout.setf(ios::fixed);
    cout.precision(2);

    while(counter < n)
    {
        double deposit;
        cin >> deposit;

        if(deposit < 0)
        {
            cout << "Invalid operation!" << endl;
            break;
        }
        balance += deposit;
        cout << "Increase: " << deposit << endl;
        counter++;
    }
    cout << "Total: " << balance << endl;

    return 0;
}
