#include <vector>
#include <iostream>
#include <numeric>
#include <bits/stdc++.h>
#include <cmath>
#include<algorithm>
#include <sstream>
using namespace std;


int main(){
    //Clock Begin
    clock_t begin = clock();
    double time_spent = 0.0;
    double c;
    for (int a = 1;a<1000;a++){
        for (int b = 1;b<1000;b++) {
            c = sqrt(a * a + b * b);
            if (a+b+c==1000 && a < b && b < c) {
                cout << (a*b*c) << endl;
                clock_t end = clock();
                time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
                cout << "Time Spent: " << time_spent << endl;
                return 0; }
        }
    }

    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    cout << "Time Spent: bad " << time_spent << endl;
    return 0; 
}
