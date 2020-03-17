#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n;
    cin >> n;
    int numMin = INT_MAX;

    while(n > 0)
    {
        int num;
        cin >> num;
        if(num < numMin)
        {
            numMin = num;
        }
        n--;
    }
    cout << numMin << endl;

    return 0;
}
