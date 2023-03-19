/*You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string dna;
    cin >> dna;

    vector<int> v;
    int length = dna.length();
    int cnt = 1;
    if (length == 1)
    {
        cout << 1;
    }
    else
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (dna[i] == dna[i + 1])
            {
                cnt++;
            }
            else
            {
                v.push_back(cnt);
                cnt = 1;
            }
        }
        v.push_back(cnt);
        sort(v.begin(), v.end());

        cout << v[v.size() - 1];
    }

    return 0;
}