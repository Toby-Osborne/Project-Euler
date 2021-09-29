#include <vector>
#include <iostream>
#include <numeric>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main(){
    clock_t begin = clock();
    double time_spent = 0.0;
    
    int count = 0;
    int triNumber = 0;
    int divisors = 0;

    //what is the first triangle number to have over 500 divisors?
    
    while (divisors < 500) {
        count++;
        divisors = 2;
        triNumber+=count;
        //cout << (int)sqrt((double)triNumber) << endl;
        for (int i = 2;i<=(int)sqrt((double)triNumber);i++) {
            if ((triNumber % i) == 0) {
                divisors += 2;
            }
        }
        //cout << triNumber << endl;
        
    }
    
    cout << triNumber << endl;

    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    cout << "Time Spent: " << time_spent << endl;
    return 0; 
}