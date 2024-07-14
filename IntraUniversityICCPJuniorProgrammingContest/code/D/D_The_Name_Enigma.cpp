#include<bits/stdc++.h>
using namespace std;
auto QKnot = []()->void 
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    // unordered_set<char> usc(s.begin(), s.end());
    // cout << usc.size() << '\n';
    vector<int> data(26, 0);
    int count = 0;
    for(auto x : s){
        if(data[x - 'a'] == 0) {
            count++;
            data[x - 'a']++;
        }
    }
    cout << count << '\n';
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while(test--) QKnot();
    return 0;
}