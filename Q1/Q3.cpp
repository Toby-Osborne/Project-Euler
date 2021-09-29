#include <vector>
#include <iostream>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;


int main(){
    vector <int> factors;
    //put number here
    long long int N = 600851475143;
    int div = 2;
    while (N>1) {
        if (N%div == 0){
            factors.push_back(div);
            N = N/div;
            div = 2;
        } else {
            div++;
        }
    }
    sort(factors.begin(), factors.end());
    cout << factors.back();
    return 0;    
}