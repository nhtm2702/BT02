#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int d=5;
    for (int i=0;i<5;i++)
    {
        d--;
        for (int j=0;j<4-d;j++) cout << " ";
        for (int j=4-d;j<=4+d;j++) cout << "*";
        for (int j=5+d;j<=10;j++) cout << " ";
        cout << endl;
    }
    return 0;
}
