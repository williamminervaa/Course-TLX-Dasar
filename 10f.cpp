#include <bits/stdc++.h>
using namespace std;
int x[101], y[101];
int T(int a, int b, int c, int d, int e)
{
    int x = abs(a - b);
    int y = abs(c - d);
    return pow(x, e) + pow(y, e);
}

int main()
{
    int n, d;
    cin >> n >> d;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }

    int min = 999999999, max = -999999999;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1 + i; j <= n; j++)
        {
            int dekat = T(x[j], x[i], y[j], y[i], d);
            if (dekat > max)
            {
                max = dekat;
            }
            if (min > dekat)
            {
                min = dekat;
            }
        }
    }
    cout << min << " " << max << endl;
}