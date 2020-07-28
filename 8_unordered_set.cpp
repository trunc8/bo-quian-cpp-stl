// trunc8 did this

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PB push_back
const ll MOD = 1000000007;
const ll MAXN = 1e7;

int main(){
    unordered_set<string> myset={"red","green","blue"};
    unordered_set<string>::const_iterator itr = myset.find("green");
    if(itr != myset.end()) {
        cout << *itr << endl;
    }
    myset.insert("yellow");

    vector<string> vec = {"purple","pink"};
    myset.insert(vec.begin(),vec.end());
    for (auto i : myset) {
        cout << i << " ";
        cout << myset.bucket(i) << "\n";
    }
    cout << "\n";

    cout << "load_factor= "<< myset.load_factor() << endl;
    string x = "red";
    cout << x << " is in bucket #"<< myset.bucket(x) << endl;
    cout << "Total bucket #" << myset.bucket_count() << endl;
}


