#include <vector>
#include <iostream>
#include <numeric>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main(){
    clock_t begin = clock();
    double time_spent = 0.0;
    
    //what is the first triangle number to have over 500 divisors?

    

    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    cout << "Time Spent: " << time_spent << endl;
    return 0; 
}