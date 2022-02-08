#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n[1000], j = 0, k, i = 0;
    while (cin >> k)
    {
        n[j] = k;
        j++;
    }
    for (i = j - 1; i >= 0; i--)
    {
        cout << n[i] << endl;
    }
    return 0;
}