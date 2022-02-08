#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, i, j, k;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> k;
        int count = 0;
        for (j = 1; j <= k; j++)
        {

            if (k == j)
            {
                count++;
            }
            else if (k % j == 0)
            {
                count++;
            }
            if (count > 4)
            {
                cout << "BUKAN\n";
                break;
            }
            else if (j == k && count <= 4)
            {
                cout << "YA\n";
                break;
            }
        }
    }
    return 0;
}