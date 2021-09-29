#include <vector>
#include <iostream>
#include <numeric>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main(){
    vector <int> factors{11,12,13,14,15,16,17,18,19,20};
    bool flipper = false;
    long long int val = 20;

    while (!flipper) {
        flipper = true;
        for (int i = 0;i<10;i++){
            if (val%(factors[i]) != 0){
                flipper = false;
            }
        }
        if (!flipper) {
            val+=20;
        }
    }
    cout << val << endl;
    return 0;    
}