#include <bits/stdc++.h>
#define li long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    li x, y;
    cin >> t;
    while (t-- > 0)
    {
        cin >> x >> y;
        if (x < y)
        {
            if (y % 2 == 1)
            {
                li r = y * y;
                cout << r - x + 1 << '\n';
            }
            else
            {
                li r = (y - 1) * (y - 1) + 1;
                cout << r + x - 1 << '\n';
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                li r = x * x;
                cout << r - y + 1 << '\n';
            }
            else
            {
                li r = (x - 1) * (x - 1) + 1;
                cout << r + y - 1 << '\n';
            }
        }
    }
    return 0;
}
