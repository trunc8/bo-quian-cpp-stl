// trunc8 did this

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PB push_back
const ll MOD = 1000000007;
const ll MAXN = 1e7;

int value = 0;
void addValglob(int i) {
    printf("%d ", i+value);
}

template<int val>
void addValtemplate(int i){
    printf("%d ", i+val);
}

class AddValue{
    int val;
    public:
    AddValue() : val(0) {}
    AddValue(int j) : val(j) {}
    void operator()(int i){
        printf("%d ", i+val);
    }
};

// ahead of its time, using parameter binding
void addValbind(int i, int val1, int val2){
    printf("%d ", i+val1+val2);
}

class X{
    public:
    void operator()(string str){
        cout<<"Calling functor X with parameter "<<str<<"\n";
    }
};

int main(){
    // Functor example
    X foo;
    foo("trunc8888");

    // TASK: Add x=2 to vector elements
    vector<int> vec = {2,3,4,5};

    value = 2;
    for_each(vec.begin(), vec.end(), addValglob);
    cout << "\n"; //using global variables nasty coding practice

    for_each(vec.begin(), vec.end(), addValtemplate<2>);
    cout << "\n"; //temporary variable is resolved at compile time
    //Here 2 is passed as a compile-time constant. Can't pass x. Inflexible

    // Parameterized functor
    int x = 2;
    for_each(vec.begin(), vec.end(), AddValue(x));
    cout << "\n"; //Most flexible soln

    // Solutions using bind function
    for_each(vec.begin(), vec.end(), bind(AddValue(x), placeholders::_1));
    cout << "\n"; //Equivalent to parameterized functor. Just more wordy

    for_each(vec.begin(), vec.end(), bind(addValbind, placeholders::_1, x, 0));
    cout << "\n"; //Pretty cool

    // END TASK

    //Built-in Functors (Useful for algorithm functions)
    int y = multiplies<int>()(3,4);
    if (not_equal_to<int>()(y,10)) {
        printf("%d\n", y);
    }
}


