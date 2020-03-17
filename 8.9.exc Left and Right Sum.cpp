#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    int numToRead;
    cin >> numToRead;
    int leftSum = 0;
    int rightSum = 0;
    int num = 0;

    for(int i = 0; i < numToRead ; i++){
            cin >> num;
        leftSum += num;
    }
    for(int i = 0; i < numToRead ; i++){
        cin >> num;
        rightSum += num;
    }
    int sum = (leftSum - rightSum) ;
    if(leftSum == rightSum){
        cout << "Yes, sum = " << leftSum << endl;
    }
    else if(leftSum != rightSum){
        cout << "No, diff = " << abs(sum) << endl;
    }

    return 0;
}
