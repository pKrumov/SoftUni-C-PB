#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n;
    cin >> n;
    int numMax = INT_MIN;

    while(n > 0)
    {
        int num;
        cin >> num;
        if(num > numMax)
        {
            numMax = num;
        }
        n--;
    }
    cout << numMax << endl;

    return 0;
}
