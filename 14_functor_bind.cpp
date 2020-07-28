// trunc8 did this

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PB push_back
const ll MOD = 1000000007;
const ll MAXN = 1e7;

template<typename T>
void printstl(const T &vec){
    for (auto i : vec) {
        cout << i << " ";
    }
    cout << "\n";
}

double Pow(double x, double y=2){
    return pow(x,y);
}

bool needCopy(int x){
    return (x>20)||(x<5);
}

bool lsb_less(int x, int y){
    return (x%10)<(y%10);
}

class Lsb_less{
    public:
    bool operator()(int x, int y){
        return (x%10)<(y%10);
    }
};

int main(){
    set<int> myset = {11,3,25,7,12};
    vector<int> vec;
    deque<int> d;

    // Multiply myset elements by  10 and save in vec
    transform(myset.begin(), myset.end(),
        back_inserter(vec),
        bind(multiplies<int>(), placeholders::_1, 10));
    printstl<vector<int>>(vec);

    //convert regular function to a functor
    auto f = function<double (double,double)> (Pow);
    function<double (double,double)> f2 = Pow;
    function<double (double,double)> f3 = function<double (double,double)> (Pow);
    transform(myset.begin(), myset.end(),
        back_inserter(d),
        //bind(Pow, placeholders::_1, 2)); // works just as fine
        // Idk the need for functor here
        bind(f, placeholders::_1, 2));
    printstl<deque<int>>(d);

    // TASK: when (x>20)||(x<5), copy from myset to d
    d.clear();
    copy_if(myset.begin(), myset.end(),
        back_inserter(d),
        bind(logical_or<bool>(),
            bind(greater<int>(), placeholders::_1, 20),
            bind(less<int>(), placeholders::_1, 5))
        );
    printstl<deque<int>>(d);

    d.clear();
    copy_if(myset.begin(), myset.end(),
        back_inserter(d),
        needCopy);
    printstl<deque<int>>(d);

    //This last method uses Lambda function
    d.clear();
    copy_if(myset.begin(), myset.end(),
        back_inserter(d),
        [](int x){return (x>20)||(x<5);}
        );
    printstl<deque<int>>(d);

    // END TASK

    // Example why we need functor in STL
    set<int, greater<int>> s1 = {11,3,25,7,12};
    for (auto i : s1) {
        cout << i << " ";
    }
    cout << "\n";

    //set<int, lsb_less> s2 = {11,3,25,7,12}; didn't work as expected
    //auto Lsb_less = function<bool(int,int)>(lsb_less); also didn't work
    // Still don't understand any benefit of converting function to functor

    set<int, Lsb_less> s2 = {11,3,25,7,12};
    for (auto i : s2) {
        cout << i << " ";
    }
    cout << "\n";
    // Here Lsb_less can also be called a predicate

}


