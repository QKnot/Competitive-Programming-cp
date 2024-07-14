#include<bits/stdc++.h>
using namespace std;
auto QKnot = []()->void 
{
    int n;
    cin >> n;
    cout << ((n*(n+1))/2) << '\n';
};
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while(test--) QKnot();
    return 0;
}