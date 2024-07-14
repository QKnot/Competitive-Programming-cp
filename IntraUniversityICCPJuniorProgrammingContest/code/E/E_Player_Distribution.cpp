#include<bits/stdc++.h>
using namespace std;
#define int long long 
auto QKnot = []()->void 
{
    int n;
    cin >> n;
    vector<int> data(n);
    for(auto &x:data) cin >> x;
    int ans = INT_MAX;
    for(int i=1;i<(1 << n);i++){
        int group1=0, group2 = 0;
        for(int j=0;j<n;j++){
            if(i & (1 << j)){
                group1 += data[j];
            }else{
                group2 += data[j];
            }
        }
        ans = min(ans, abs(group1 - group2));
    }
    cout << ans << '\n';
};
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    QKnot();
    return 0;
}