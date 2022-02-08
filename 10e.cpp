#include <bits/stdc++.h>
using namespace std;
int fungsi(int a, int b, int c)
{
    return abs((a * b) + c);
}
int main()
{
    int a, b, k, x;
    cin >> a >> b >> k >> x;
    // int fungsi = abs((a * x) + b);
    int f;
    for (int i = 1; i <= k; i++)
    {
        x = fungsi(a, x, b);
    }

    cout << x;
}