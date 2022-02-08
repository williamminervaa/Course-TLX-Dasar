#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define FOR(t) for (int i = 0; i < t; i++)
#define fora(i, j) for (auto i : j)
#define vi vector<int>
#define vs vector<string>
#define vpll vector<pair<ll, ll>>
#define vpss vector<pair<string, string>>
#define vpls vector<pair<ll, string>>
#define vpii vector<pair<int, int>>
#define vpis vector<pair<int, string>>
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
using namespace std;
int n, catat[101], kedalaman = 0;
bool pernah[101] = {0};

void tulis(int kedalaman)
{
    if (kedalaman >= n)
    {
        bool zigzag = true;
        for (int i = 1; i < n - 1; i++)
        {
            bool condition1 = catat[i] > catat[i - 1] && catat[i] > catat[i + 1];
            bool condition2 = catat[i] < catat[i - 1] && catat[i] < catat[i + 1];
            if (!(condition1 || condition2))
            {
                zigzag = false;
            }
        }
        if (zigzag)
        {
            for (int i = 0; i < n; i++)
            {
                cout << catat[i];
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (!pernah[i])
            {
                pernah[i] = true;
                catat[kedalaman] = i;
                tulis(kedalaman + 1);
                // cout << kedalaman << endl;
                pernah[i] = false;
            }
        }
    }
    // cout << kedalaman << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        pernah[i] = false;
    }

    tulis(kedalaman);
    return 0;
}