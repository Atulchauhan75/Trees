#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second
int main()
{
    ll n;
     cin >> n;
     vector<pair<ll,ll>> v;
     for(int i=0 ;i<n ;i++){
        int x,y;
        cin >> x>> y;
        v.push_back({x,y});
     }
     sort(v.begin(),v.end());
     for(auto pr : v){
        cout << pr.ff <<" " <<  pr.ss  << endl;
     }
}