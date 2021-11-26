#include <iostream>
using namespace std;
int numberOfDigits(int n){
    if(n == 0){
        return 0;
    }
    int smallOP = numberOfDigits(n / 10);
    return 1 + smallOP;
}
int main(){
    int n ;
    cin >> n;
    int nod = numberOfDigits(n);
    cout << nod << endl;
}