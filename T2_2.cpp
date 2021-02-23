#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int d=-1;
    for (int i=0;i<5;i++)
    {
        d++;
        for (int j=0;j<d;j++)
            cout << " ";
        for (int j=d;j<5;j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
