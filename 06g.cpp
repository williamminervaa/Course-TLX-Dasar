#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, x = -1000001, y = 1000001;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > x)
        {
            x = a;
        }
        if (a < y)
        {
            y = a;
        }
    }
    cout << x << " " << y << endl;
}
