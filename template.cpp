// trunc8 did this

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define PB push_back
const ll MOD = 1000000007;
const ll MAXN = 1e7;

template<typename T>
T square(T x){
    return x*x;
}

template<typename T>
class MyVector{
    T arr[1000];
    int size;
public:
    MyVector() : size(0){}
    void push(T x){ arr[size]=x; size++; }
    T get(int i) const{ return arr[i]; }
    int getsize() const{ return size; }
    void print() const{ for(int i=0; i<size; i++) { cout<<arr[i]<<" "; } cout<<"\n";}
};

template<typename T>
MyVector<T> operator*(const MyVector<T> &rhs1, MyVector<T> &rhs2){
    MyVector<T> res;
    for(int i=0; i<rhs1.getsize(); i++) {
        res.push(rhs1.get(i)*rhs2.get(i));
    }
    return res;
}

int main(){
    //FAST_IO
    MyVector<int> v1, v2; 
    cout << "Enter First Vector (space separated): ";
    string input;
    getline(cin, input);
    stringstream ss(input);
    int n;
    while(ss>>n) {
        v1.push(n);
    }

    cout << "Enter Second Vector (space separated): ";
    getline(cin, input);
    stringstream ss2(input);
    while(ss2>>n) {
        v2.push(n);
    }
    cout << "First vector: ";
    v1.print();
    cout << "Second vector: ";
    v2.print();
    cout << "Pointwise product vector: ";
    if (v1.getsize()==v2.getsize()) {
        MyVector v3 = v1*v2;
        v3.print();
    } else {
        cout << "Can't be multiplied\n";
    }
}


