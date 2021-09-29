#include <vector>
#include <iostream>
#include <numeric>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main(){
    long long int sumsquare = 0;
    long long int squaresum = 0;
    for (int i = 1;i<101;i++){
        squaresum += i;
        sumsquare += i*i;
    }
    squaresum = squaresum * squaresum;
    cout << (squaresum - sumsquare) << endl;
    return 0;    
}