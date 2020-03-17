#include <iostream>
#include <string>
#include <limits.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int numMin = INT_MAX;
    int numMax = INT_MIN;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num < numMin){
            numMin = num;
        }
        if(num > numMax){
            numMax = num;
        }
    }
    cout << "Max number: " << numMax << endl;
    cout << "Min number: " << numMin << endl;

    return 0;
}
