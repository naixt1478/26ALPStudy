#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i += 1)
    {
        cout << "Case # " << i << ":\n";
        solve();
    }
    return 0;
}

string str;
void backtracking_sol(vector<int> memo, string& _str)
{
    int idx = accumulate(memo.begin(), memo.end(), 0);
    if(idx == _str.size())
        cout << _str << '\n';
    else
    {
        for(int i = 0; i < _str.size(); i += 1)
        {
            if(memo[i] == 0)
            {
                memo[i] = 1;
                _str[idx] = str[i];
                backtracking_sol(memo, _str);
                memo[i] = 0;
            }
        }
    }
}

void solve()
{
    string str2;
    cin >> str;
    str2 = str;
    vector<int> visted(str.size());
    backtracking_sol(visted, str2);
}