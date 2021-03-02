#include <iostream>
using namespace std;
int main()
{
    long int n,minh,minc;
    cin >> n;
    long int a[n],b[n];
    for (int i=0;i<n;i++)
        cin >> a[i] >> b[i];
    minh=a[0];minc=b[0];
    for (int i=1;i<n;i++)
    {
        minh=min(minh,a[i]);
        minc=min(minc,b[i]);
    }
    cout << minh*minc;
    return 0;
}
