#include <iostream>
#include <climits>
using namespace std;

int main(){

    int numToRead;
    cin >> numToRead;
    double num;
    double oddSum = 0;
    double evenSum = 0;
    double evenMin = INT_MAX;
    double oddMin = INT_MAX;
    double evenMax = INT_MIN;
    double oddMax = INT_MIN;

    for(int i = 1; i <= numToRead ; i++){
        cin >> num;
        if(i % 2 == 0){
            evenSum += num;
            if(num < evenMin){
                evenMin = num;
            }
            if(num > evenMax){
                evenMax = num;
            }
        }else{
            oddSum += num;
            if(num < oddMin){
                oddMin = num;
            }
            if(num > oddMax){
                oddMax = num;
            }
        }
    }
        cout.setf(ios::fixed);
        cout.precision(2);

        cout << "OddSum=" << oddSum << "," << endl;
        if(oddMin != INT_MAX){
            cout << "OddMin=" << oddMin << "," << endl;
        }else {
            cout << "OddMin=No," << endl;
        }
        if(oddMax != INT_MIN){
            cout << "OddMax=" << oddMax << "," << endl;
        }else{
            cout << "OddMax=No," << endl;
        }
        cout << "EvenSum=" << evenSum << "," << endl;
        if(evenMin != INT_MAX){
            cout << "EvenMin=" << evenMin << "," << endl;
        }else{
            cout << "EvenMin=No," << endl;
        }
        if(evenMax != INT_MIN){
            cout << "EvenMax=" << evenMax << "," << endl;
        }else{
            cout << "EvenMax=No" << endl;
        }

    return 0;
}
