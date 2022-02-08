#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, j, y, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> p;
        for (j = 2; j <= trunc(sqrt(p)); j++)
        {
            if (p % j == 0)
            {
                y = 1;
            }
        }
        if (y == 1 || p == 1)
        {
            y = 0;
            cout << "BUKAN" << endl;
        }
        else
        {
            cout << "YA" << endl;
        }
    }
    cout << endl;
    return 0;
}
