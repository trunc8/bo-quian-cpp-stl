// trunc8 did this

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PB push_back
const ll MOD = 1000000007;
const ll MAXN = 1e7;

int main(){
    set<int> myset;
    myset.insert(3);
    myset.insert(7);
    myset.insert(1);

    set<int>::iterator it;
    it = myset.find(7);

    pair<set<int>::iterator, bool> ret;
    ret = myset.insert(3);
    if (ret.second == false) {
        it = ret.first;
    }
    myset.insert(it, 9);
    
    myset.erase(it);

    myset.erase(7);
}


