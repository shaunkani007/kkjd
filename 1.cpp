#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define PI 3.1415926535897932384626
#define MOD 1000000007
#define br cout << endl
#define Range(i, a, b, stride) for (int i = a; i < b; i = i + stride)
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORR(i, a, b) for (int i = a; i > b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for (auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for (auto it = x.rbegin(); it != x.rend(); it +)
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<vs> vvs;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

// 1d vector
template <typename T>
void print(vector<T> &v, int st = 0, int ed = INT_MAX, string delimiter = " ")
{
    if (ed == INT_MAX)
        ed = v.size() - 1;

    FOR(j, st, ed + 1)
    {
        cout << v[j] << delimiter;
    }
}

// 2D vector
template <typename T>
void print(vector<vector<T> > &v, int stx = 0, int sty = 0, int edx = INT_MAX, int edy = INT_MAX, string xdelimiter = " ", string ydelimiter = "\n")
{
    if (edx == INT_MAX)
        edx = v.size() - 1;
    if (edy == INT_MAX)
        edy = v[0].size() - 1;
    FOR(i, stx, edx + 1)
    {
        FOR(j, sty, edy + 1)
        {
            cout << v[i][j] << xdelimiter;
        }
        cout << ydelimiter;
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t = 1;
    // cin >> t;
    while (t--)
    {
    }
    return 0;
}