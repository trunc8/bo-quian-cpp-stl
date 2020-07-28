// trunc8 did this

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PB push_back
const ll MOD = 1000000007;
const ll MAXN = 1e7;

int main(){
    list<int> mylist = {5,2,9};
    mylist.push_back(6);
    mylist.push_front(4);

    list<int>::iterator itr = find(mylist.begin(), mylist.end(), 2);

    mylist.insert(itr, 8);

    itr++;
    mylist.erase(itr);

    for(auto it : mylist) {
        cout << it << " ";
    }
    cout << "\n";

    list<int> mylist2 = {100, 100};
    list<int>::iterator itr2 = mylist2.end();
    mylist2.splice(itr2, mylist, mylist.begin(), mylist.end());

    for(auto it : mylist2) {
        cout << it << " ";
    }
    cout << "\n";
}


