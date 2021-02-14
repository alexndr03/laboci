#include <iostream>

using namespace std;
int main() {
    int a, X , N;
    a=1;
    X=0;
    cout << " N= " ;
    cin >> N ;
    while (a<=N){
        X=X+a ;
        a=(a+1) ;
    }
    cout <<"summ="<< X;
    return 0;
}