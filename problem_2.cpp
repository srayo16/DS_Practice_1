// Given a number N and an array A of N numbers. Print the array in a reversed order.

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

    reverse(a.begin(), a.end());

    for (int i : a)
    {
        cout << i << " ";
    }

    return 0;
}