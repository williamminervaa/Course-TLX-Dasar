#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define ll long long
using namespace std;
int main()
{
    IOS;
    int N, M, P;
    cin >> N >> M >> P;
    int matriks1[N][M], matriks2[M][P];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> matriks1[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            cin >> matriks2[i][j];
        }
    }
    int result[M][P];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            int temp = 0;
            for (int k = 0; k < M; k++)
            {
                temp += matriks1[i][k] * matriks2[k][j];
            }
            result[i][j] = temp;
            // cout << result[i][j] << " ";
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            cout << result[i][j];
            if (j == P - 1)
            {
                cout << endl;
            }
            else
            {
                cout << " ";
            }
        }
    }
}