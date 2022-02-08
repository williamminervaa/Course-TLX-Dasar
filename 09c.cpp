#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[100001] = {};
    int c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        a[c]++;
    }
    int modus = 0;
    for (int i = 1; i <= 100000; i++)
    {
        if (a[i] >= a[modus])
        {
            modus = i;
        }
    }
    cout << modus << endl;
}