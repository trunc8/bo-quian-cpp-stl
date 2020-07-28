// trunc8 did this

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PB push_back
const ll MOD = 1000000007;
const ll MAXN = 1e7;

void printvec(const vector<int> &vec){
    for (auto i : vec) {
        cout << i << " ";
    }
    cout << "\n";
}

bool isOdd(int i){
    return i%2;
}

int main(){
    vector<int> vec = {3,2,6,1,3,9};
    vector<int>::iterator itr = min_element(vec.begin(), vec.end());
    printf("Min element is: %d\n", *itr);

    //Algorithm processes ranges like [begin,end) ie half-open
    sort(vec.begin(), itr);
    cout << "Sorting till min element: ";
    printvec(vec);
    reverse(itr,vec.end());
    cout << "Reversing other half: ";
    printvec(vec);

    cout << "\n";
    vector<int> vec2(3);
    copy(itr, vec.end(), vec2.begin()); //sacrifices safety
    printvec(vec2);
    vector<int> vec3;
    copy(itr, vec.end(), back_inserter(vec3)); //not efficient
    printvec(vec3);
    vec3.clear();
    vec3.insert(vec3.end(), itr, vec.end()); //best way
    printvec(vec3);

    itr = find_if(vec.begin(), vec.end(), isOdd);
    itr = find_if(itr+1, vec.end(), isOdd);
    cout << "\nExample of algorithm working with function\n";
    printf("isOdd twice, iterator points to: %d\n\n", *itr);

    //Algorithm works with native C++ array
    int arr[4] = {6,3,7,4};
    sort(arr,arr+4);
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << "\n";
}


