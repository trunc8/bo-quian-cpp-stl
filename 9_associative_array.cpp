// trunc8 did this

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PB push_back
const ll MOD = 1000000007;
const ll MAXN = 1e7;

int main(){
    //no separate container by this name
    //but can be implemented with map or unordered map
    unordered_map<char, string> day = {{'S', "Sunday"}, {'M',"Monday"}};
    cout << day['S'] << "\n";
    cout << day.at('S') << "\n";

    //demonstrating subscript operator
    vector<int> vec = {1,2,3};
    vec[5] = 5; //misbehave at runtime

    day['W'] = "Wednesday";
    day.insert(make_pair('F',"Friday"));
    day.insert({'T', "Tuesday"});

    day['M'] = "MONDAY";

    //following two lines are sneaky, they have no effect
    //ideally compiler should catch them, but it isn't
    day.insert({'M', "Tuesday"});
    day.insert(make_pair('M', "Mondayy"));

    for (auto i : day) {
        cout << i.first << " " << i.second << "\n";
    }

}

