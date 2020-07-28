// trunc8 did this

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PB push_back
const ll MOD = 1000000007;
const ll MAXN = 1e7;

int main(){
    vector<int> test1({1,2,3});
    vector<int> test2 = {4,5,6};

    vector<int> vec;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8);

    cout << vec[2] <<" is same as "<< vec.at(2) << "\n";

    for(int i=0; i<(int)vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";

    for(vector<int>::iterator itr=vec.begin(); itr!=vec.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << "\n";

    for(auto it : vec) {
        cout << it << " ";
    }
    cout << "\n";

    int *p = &vec[0];
    cout << p[2] << "\n";

    vector<int> vec2(vec);
    cout << vec2.size() << "\n";

    vec.clear();

    vec2.swap(vec);

    if(vec2.empty()) {
        cout << "Vector2 is empty\n";
    }

}


