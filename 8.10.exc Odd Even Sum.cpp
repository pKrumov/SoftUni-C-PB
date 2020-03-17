#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int input;
    cin >> input;
    int oddSum = 0;
    int evenSum = 0;
    int num;

    for(int i = 0; i < input ; i++){
        if(i % 2 == 0){
            cin >> num;
            evenSum += num;
        }else{
            cin >> num;
            oddSum += num;
        }
    }
    if(evenSum == oddSum){
        cout << "Yes" << endl;
        cout << "Sum = " << evenSum << endl;
    }else{
        cout << "No" << endl;
        cout << "Diff = " << abs(evenSum - oddSum) << endl;
    }

    return 0;
}
