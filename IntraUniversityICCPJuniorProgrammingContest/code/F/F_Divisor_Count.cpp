#include<bits/stdc++.h>
using namespace std;
auto QKnot = []()->void 
{
    int n;
    cin >> n;
    int count = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            if(n/i == i){
                count++;
            }else{
                count+=2;
            }
        }
    }
    cout << (n==1?(count-1):(count-2)) << '\n';
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