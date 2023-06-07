// You are given an array a of n integers, count the number of element ai in the array such that ai+1 is also exists in the array a

// If there're duplicates in a count them separately.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        auto b = find(a.begin(), a.end(), a[i] + 1);

        if (b != a.end())
            count++;
    }

    cout << count;

    return 0;
}