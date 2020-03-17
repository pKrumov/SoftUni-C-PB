#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    double sales;
    string town;
    cin>>town>>sales;


    cin >> sales;
    double comision = -1;

    if(town == "Sofia")
    {
        if(sales >= 0 && sales <= 500)
        {
            comision = 0.05;
        }
        else if(sales <= 1000)
        {
            comision = 0.07;
        }
        else if(sales <= 10000)
        {
            comision = 0.08;
        }
        else if(sales > 10000)
        {
            comision = 0.12;
        }
    }
    else if(town == "Varna")
    {
        if(sales >= 0 && sales <= 500)
        {
            comision = 0.045;
        }
        else if(sales <= 1000)
        {
            comision = 0.075;
        }
        else if(sales <= 10000)
        {
            comision = 0.1;
        }
        else if(sales > 10000)
        {
            comision = 0.13;
        }
    }
    else if(town == "Plovdiv")
    {
        if(sales >= 0 && sales <= 500)
        {
            comision = 0.055;
        }
        else if(sales <= 1000)
        {
            comision = 0.08;
        }
        else if(sales <= 10000)
        {
            comision = 0.12;
        }
        else if(sales > 10000)
        {
            comision = 0.145;
        }
    }

    cout<<town;
    cout<<sales;
    if((town != "Sofia") || (town == "Plovdiv") || (town == "Varna") || (sales < 0))
        {
                    cout << "error" << endl;

        }
    else
    {
            cout.setf(ios::fixed);
            cout.precision(2);

            cout << sales * comision << endl;

    }

    return 0;
}
