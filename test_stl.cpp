// trunc8 did this

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PB push_back
const ll MOD = 1000000007;
const ll MAXN = 1e7;

int main(){
    FAST_IO
    //array<ll, 3> a = {3,4,5};
    vector<pair<ll,ll> > a = {{1,1}, {2,4}, {3,7}, {4,2}, {5,5}, {6,8}, {7,3}, {8,6}, {9,9}};
    a.PB({10,5});
    sort(a.rbegin(), a.rend()); //, greater<>());
    //for (auto i: a) cout << i.first << " " << i.second << "\n";
    for (ll i=0; i<a.size(); i++) {
        cout << a[i].first << " " << a[i].second << "\n";
    }
    for (ll i=1; i<=9; i++) {
        for (ll j=1; j<=9; j++) {
            for (auto couple:a) {
                if (i==couple.first and j==couple.second) {
                    cout << i << " " << j << "\n";
                }
            }
        }
    }
}


