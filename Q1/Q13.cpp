#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

#define ROWS 100
#define COLUMNS 50

int main(){
    vector<string> numbers;
    fstream newfile;
    newfile.open("Q13.txt");
    if (newfile.is_open()){
        string tp;
        while (getline(newfile,tp)){
            numbers.push_back(tp);
        }
        newfile.close();
    }

    //process da numbas
    string extranumbers = "";
    int digitsum;
    for (int digit = 0;digit<50;digit++){
        digitsum = 0;
        for (int number = 0;number<numbers.size();number++){
            digitsum += numbers[number][digit] - '0';
        }
        for (int i = 0;i<3;i++){
            
        }
    }
}