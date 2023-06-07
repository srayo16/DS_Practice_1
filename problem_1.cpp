// Given two arrays A and B of size N  Print a new array C that holds the concatenation of array B followed by array A.
// Note: Solve this problem using function.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n + n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    // cout << c.size() << endl;
    c.insert(c.begin(), a.begin(), a.end());
    c.insert(c.begin(), b.begin(), b.end());
    // cout << c.size() << endl;
    c.resize(n + n);
    // cout << c.size() << endl;
    for (int i : c)
    {
        cout << i << " ";
    }

    return 0;
}