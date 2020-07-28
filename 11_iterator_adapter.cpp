// trunc8 did this

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PB push_back
const ll MOD = 1000000007;
const ll MAXN = 1e7;

int main(){
    //Insert Iterator
    vector<int> vec1 = {4,5};
    vector<int> vec2 = {12,14,16,18};
    vector<int>::iterator it = find(vec2.begin(), vec2.end(), 16);
    insert_iterator<vector<int> > i_itr(vec2, it);
    copy(vec1.begin(), vec1.end(), i_itr);
    for (auto i : vec2) {
        cout << i << " ";
    }
    cout << "\n";

    //Stream Iterator
    vector<string> vec3;
    copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(vec3));
    copy(vec3.begin(), vec3.end(), ostream_iterator<string>(cout, " "));
    //Make it terse
    copy(istream_iterator<string>(cin), istream_iterator<string>(), ostream_iterator<string>(cout, "\n"));
    cout << "\n";
    //so the top one tries first, as soon as it encounters EOF, no more inputs. It prints stuff from remaining part of program and exits.
    //as a result here, the second isn't allowed to do anything

    //Reverse Iterator
    vector<int> vec = {4,5,6,7};
    reverse_iterator<vector<int>::iterator> ritr;
    for (ritr=vec.rbegin(); ritr!=vec.rend(); ritr++) {
        cout << *ritr << " ";
    }
    cout << "\n";
}


