#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t,s;
    cin >> t;
    cout << t << " ";
    do
    {
        cin >> s;
        if (s!=t) {cout << s << " ";t=s;}
    }while (s!=-1);
    return 0;
}
