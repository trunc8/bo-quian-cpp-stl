// trunc8 did this

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PB push_back
const ll MOD = 1000000007;
const ll MAXN = 1e7;

void isOdd(const int num) {
    cout << (num%2==0 ? "Even\n" : "Odd\n");
}

int main(){
    //Random Access Iterator: vector, deque, array
    vector<int> vec = {2,4,6,8,10,12};
    vector<int>::iterator itr, itr1, itr2;
    itr = vec.begin();
    itr1 = itr+5;
    cout << *itr1 << " ";
    itr2 = itr1-4;
    cout << *itr2 << " ";
    ++itr;
    --itr;
    cout << *itr << "\n";
    cout << "Comparison of iterators: " << (itr2<itr1) << "\n";

    //Bidirectional Iterator: list, set/multiset, map/multimap
    list<int>::iterator itr3;
    ++itr3;
    --itr3;

    //Forward Iterator: forward_list
    forward_list<int>::iterator itr4;
    ++itr4;

    //Every container has an iterator and a const_iterator
    set<int>::iterator itr5;
    set<int>::const_iterator citr;

    set<int> myset = {2,4,5,1,9};
    for (citr=myset.begin(); citr!=myset.end(); citr++) {
        cout << *citr << " ";
    }
    cout << "\n";
    for_each(myset.cbegin(), myset.cend(), isOdd);

    //Iterator functions
    itr5 = myset.begin();
    advance(itr5, 4);
    cout << *itr5 << "\n";
    cout << "Distance: " << distance(itr2, itr1) << "\n";


}


