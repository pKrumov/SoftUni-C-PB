#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main(){

    int n;
    cin >> n;
    int num;
    int sum = 0;
    int maxNum = INT_MIN;

    for(int i = 0; i < n; i++){
        cin >> num;
        sum += num;
        if(num > maxNum){
            maxNum = num;
        }
    }
    sum -= maxNum;
    if(maxNum == sum){
        cout << "Yes" << endl;
        cout << "Sum = " << sum << endl;
    }
    else
    {
        cout << "No" << endl;
        cout << "Diff = " << abs(sum - maxNum) << endl;
    }

    return 0;
}
