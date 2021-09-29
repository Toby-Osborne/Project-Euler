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
    
    for (int c = 1;c<1000;c++){
        for (int b = 1;b<c;b++) {
            for (int a=1;a<b;a++) {
                if ((a+b+c==1000)&&(pow((double)b,2)+pow((double)a,2)==pow((double)c,2))) {
                    cout << (a*b*c) << endl;
                    clock_t end = clock();
                    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
                    cout << "Time Spent: " << time_spent << endl;
                    return 0; 
                }
            }
        }
    }

    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    cout << "Time Spent: " << time_spent << endl;
    return 0; 
}