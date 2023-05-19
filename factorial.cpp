#include <iostream>
using namespace std;
int f(int n){
    //base case
    if(n==0)
    return 1;
    return n*f(n-1);
}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int fac=f(n);
    cout << fac<<endl;

    return 0;
}
