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

int N;
int Q;
int ar[2][1001];

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    scanf("%d", &N);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    scanf("%d", &Q);
    for (int i = 0; i < Q; i++)
    {
        char buff1[5], buff2[5];
        int x, y;
        scanf("%s %d %s %d", buff1, &x, buff2, &y);

        int p = buff1[0] - 'A';
        int q = buff2[0] - 'A';
        x--;
        y--;
        swap(ar[p][x], ar[q][y]);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d", ar[i][j]);
            if (j + 1 < N)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}