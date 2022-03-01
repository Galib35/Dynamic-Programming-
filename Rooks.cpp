// https://lightoj.com/problem/rooks
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    long long test,n,m,t=0;
    cin>>test;
    while(test--){
        cin>>n>>m;
        printf("Case %lld: ",++t);
        if(m>n){
            cout<<0<<endl;
            continue;
        }
        long long ans=1,fact=1;
        ll k =m;
        while(k)fact*=k--;

        while(m){
            ll gcd = __gcd(n*n,fact);

            ll tem = (n*n)/gcd;
            fact/=gcd;
            ans=(ans*tem);

            m--;
            n--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
