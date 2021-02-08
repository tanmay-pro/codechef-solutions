#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265
#define br cout << endl
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define f first
#define s second
#define pb push_back
#define file_read                     \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<pll> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;
typedef map<ll, ll> mll;

int MOD = 1e9 + 7;

int main()
{
    amazing;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str[n];
        string x;
        cin >> x;
        string word = "";
        int j = 0;
        for (auto i : x)
        {
            if (i == ' ')
            {
                str[j] = word;
                word = "";
                j++;
            }
            else
            {
                word += i;
            }
        }
        ll check[26] = {0};
        fo(i, n)
        {
            cout << str[0] << endl;
            // check[str[i].at(0) - 97]++;
        }
        vs temp;
        fo(j, n)
        {
            if (check[(int)str[j].at(0) - 97] == 1)
            {
                temp.push_back(str[j]);
            }
        }

        ll res = temp.size();
        ll ans = res * (res - 1);
        cout << ans << endl;
    }
    return 0;
}