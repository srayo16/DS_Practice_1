#include <bits/stdc++.h>
using namespace std;

class customSort
{

public:
    char a;
    int count;
};

int main()
{
    vector<string> s;
    string a;
    cin >> a;
    s.push_back(a);

    customSort frq[26];

    for (int i = 0; i < 26; i++)
    {
        frq[i].a = i + 'a';
        frq[i].count = 0;
    }

    for (int i = 0; i < a.size(); i++)
    {
        frq[a[i] - 'a'].count++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (frq[i].count > 0)
        {
            cout << frq[i].a << " : " << frq[i].count << endl;
        }
    }

    return 0;
}