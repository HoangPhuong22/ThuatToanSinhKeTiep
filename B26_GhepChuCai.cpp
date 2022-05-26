#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int a[1001] , ok , n;
void ktao()
{
    for(int i  = 1 ; i <= n ; i++)
    {
        a[i] = 1;
    }
}
void sinh()
{
    int i = n;
    while(i >= 1 && a[i] == n)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        a[i]++;
        for(int j = i + 1 ; j <= n; j++)
        {
            a[j] = 1;
        }
    }
}
bool aka(char c)
{
    return c == 'A' || c == 'E';
}
bool check(string s)
{
    for(int i = 1 ; i  <= s.size() - 2; i++)
    {
        if(aka(s[i]) && !aka(s[i - 1]) && !aka(s[i + 1])) return false;
    }
    return true;
}
int main()
{
    char n ; cin >> n;
    string s = "";
    for(int i = 1 ; i <= n - 'A' + 1 ;i++)
    {
        s += 'A' + i - 1;
    }
    vector<string>v1,v2;
    do
    {
        if(check(s)) cout <<s << endl;
    }while(next_permutation(s.begin() , s.end()));
    return 0;
}
