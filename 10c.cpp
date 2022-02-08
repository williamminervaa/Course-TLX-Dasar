#include <bits/stdc++.h>
using namespace std;
int leadingzero(int x)
{
    int temp = x;
    while (temp % 10 == 0)
    {
        temp /= 10;
    }
    return temp;
}
int reverse(int x)
{
    int temp = x;
    int ret = 0;

    while (temp > 0)
    {
        ret = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }

    return ret;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int reva = reverse(a);
    int revb = reverse(b);
    cout << reverse(leadingzero(reva + revb)) << endl;
}