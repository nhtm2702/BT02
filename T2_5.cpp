#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,d=-1;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        d++;
        for (int j=1+d;j<=n;j++) cout << j << " ";
        for (int j=1;j<=d;j++) cout << j << " ";
        cout << endl;
    }
    return 0;
}
