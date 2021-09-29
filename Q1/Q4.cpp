#include <vector>
#include <iostream>
#include <numeric>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main(){
    long long int product = 0;
    vector <int> prodvec;
    bool palendrome;
    int bigpal = 0;
    for (int i = 999;i>99;i--){
        for (int j = 999;j>91;j--) {
            prodvec.clear();
            product = i*j;
            palendrome = true;
            //cout << product << endl;
            while (product > 0) {
                prodvec.push_back(product%10);
                product = product/10;
            }
            for (unsigned int k = 0;k<((prodvec.size())/2);k++) {
                //cout << prodvec[k] << " - " << prodvec[prodvec.size()-k-1] << endl;
                if (!(prodvec[k] == prodvec[prodvec.size()-k-1])) {
                    palendrome = false;
                }
            }
            if (palendrome) {
                //cout << "palendrome found: ";
                product = 0;
                for (unsigned int k=prodvec.size();k>0;k--){
                    //cout << "Prodvec" <<prodvec[k-1] << endl;
                    product+=(prodvec[k-1]*pow(10.0,(k-1)));
                }
                //cout << product <<  endl;
                //cout << endl;
                if (product > bigpal) {
                    bigpal = product;
                }
            }
        }
    }
    cout << bigpal << endl;
    return 0;    
}