#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int pangkat;
    int i = 2;
    while (n > 1)
    {
        while (n % i != 0)
        {
            i++;
        }
        pangkat = 0;
        while (n % i == 0)
        {
            n /= i;
            pangkat++;
        }
        cout << i;
        if (pangkat > 1)
        {
            cout << "^" << pangkat;
        }
        cout << " ";
        if (n > 1)
        {
            cout << "x ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}