#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int baris, kolom;
    int matriks[105][105];
    cin >> baris >> kolom;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cin >> matriks[i][j];
        }
    }
    for (int i = 0; i < kolom; i++)
    {
        for (int j = baris - 1; j >= 0; j--)
        {
            cout << matriks[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}