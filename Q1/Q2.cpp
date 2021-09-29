#include <iostream>
using namespace std;


int main(){
    int term = 2;
    int prevterm = 1;
    int sum = 2;
    while (term < 4000000){
        term = term+prevterm;
        prevterm = term-prevterm;
        if (term%2==0){
            sum+=term;
        }
    }
    cout << sum << endl;
    return 0;    
}