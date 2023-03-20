// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int n;
//     cin >> n;

//     while (n--)
//     {
//         unsigned long long int x, y;
//         cin >> x >> y;

//         if (y > x)
//         {
//             if (y % 2 != 0)
//             {

//                 cout << (y - 1) * (y - 1) + 1 + (x - 1) << endl;
//             }
//             else
//             {

//                 cout << (y * y) - (x - 1) << endl;
//             }
//         }
//         else
//         {
//             if (x % 2 != 0)
//             {

//                 cout << (x * x) - (y - 1) << endl;
//             }
//             else
//             {

//                 cout << (x - 1) * (x - 1) + 1 + (y - 1) << endl;
//             }
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#define lli long long int
#define li long int
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    li x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y;
        if (x < y)
        {
            if (y % 2 == 1)
            {
                li r = y * y;
                cout << r - x + 1 << endl;
            }
            else
            {
                li r = (y - 1) * (y - 1) + 1;
                cout << r + x - 1 << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                li r = x * x;
                cout << r - y + 1 << endl;
            }
            else
            {
                li r = (x - 1) * (x - 1) + 1;
                cout << r + y - 1 << endl;
            }
        }
    }
    return 0;
}