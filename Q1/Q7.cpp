#include <vector>
#include <iostream>
#include <numeric>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main(){
    clock_t begin = clock();
    double time_spent = 0.0;
    int x = 1;
    int count = 0;
    bool prime;
    while (count < 10000) {
        x+=2;
        //cout << x << endl;
        prime = true;
        int root = sqrt((double)x);
        //cout << root << endl;
        for (int i = 3;i<=root;i+=2) {
            if (x%i == 0) {
                prime = false;
                i = root+1;
            }
        }
        //cout << "hello" << endl;
        if (prime) {
            count++;
        }
        //cout << count << endl;
    }
    cout << x << endl;
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    cout << "Time Spent: " << time_spent << endl;
    return 0; 
}