// trunc8 did this

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PB push_back
const ll MOD = 1000000007;
const ll MAXN = 1e7;

int main(){
    map<char,int> mymap;
    mymap.insert(pair<char,int>('a', 100));
    mymap.insert(make_pair('z', 200));
    mymap.insert({'b', 300});

    map<char,int>::iterator itr = mymap.begin();
    mymap.insert(itr, pair<char,int>('d', 100)); //itr is a hint for location

    itr = mymap.find('z');
    for (itr=mymap.begin(); itr!=mymap.end(); itr++) {
        cout << (*itr).first << " " << (*itr).second << "\n";
    }
    for (auto it : mymap) {
        cout << it.first << " " << it.second << "\n";
    }

}


