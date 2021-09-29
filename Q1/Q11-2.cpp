#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <iomanip>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;

double side2Side(vector<vector <double>> matrix);
double up2Bot(vector<vector <double>> matrix);
double diagonalLeft(vector<vector <double>> matrix);
double diagonalRight(vector<vector <double>> matrix);

int main ()
{
    clock_t begin = clock();
    double time_spent = 0.0;

  string matrix = "08022297381500400075040507785212507791084949994017811857608717409843694804566200814931735579142993714067538830034913366552709523046011426924685601325671370236912231167151676389419236542240402866331380244732609903450244753353783684203517125032988128642367102638406759547066183864706726206802621220956394396308409166499421245558056673992697177878968314883489637221362309750076442045351400613397343133957817532822753167159403800462161409535692163905429635314755588824001754243629855786560048357189070544443744602158515417581980816805944769287392138652177704895540045208839735991607975732162626793327986688366887576220720346336746551232639353690442167338253911249472180846293240627636206936417230238834629969826759857404361620733529783190017431497148868116235705540170547183515469169233486143520189196748";

  vector<vector <double>> matrixVector(20, vector<double> (20));
  string first{""},second{""},temp{""};
  int tempNumber{0};
  double greaterSide2Side{0};
  double greaterUp2Bot{0};
  double greaterDiagonalLeft{0};
  double greaterDiagonalRight{0};

  for(int i{0}; i<20; i++)
    {
      for(int j{0}; j<20; j++)
	{
	  first              = matrix[i*40+j*2];
	  second             = matrix[i*40+j*2+1];
	  temp               = first + second;
	  tempNumber         = stoi(temp);
	  matrixVector[i][j] = tempNumber; 
	}
    }
  
  greaterSide2Side = side2Side(matrixVector);
  greaterUp2Bot = up2Bot(matrixVector);
  greaterDiagonalLeft = diagonalLeft(matrixVector);
  greaterDiagonalRight = diagonalRight(matrixVector);
  
  cout<<endl<<setprecision(15)<<greaterSide2Side<<endl;
  cout<<endl<<setprecision(15)<<greaterUp2Bot<<endl;
  cout<<endl<<setprecision(15)<<greaterDiagonalLeft<<endl;
  cout<<endl<<setprecision(15)<<greaterDiagonalRight<<endl;
  
  clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    cout << "Time Spent: " << time_spent << endl;
    return 0; 
}

//
// Funciones
//

double side2Side(vector<vector <double>> matrix)
{
  double greater{0};
  
  for(int m{0}; m<20; m++ )
    {
      for(int n{0}; n<16; n++)
	{
	  double acum{1};
	  for(int t{0}; t<4; t++)
	    {
	      acum *= matrix[m][n+t];
	      if(acum > greater)
		{
		  greater = acum;
		}
	    }
	}
    }
  return greater;
}    

double up2Bot(vector<vector <double>> matrix)
{
  double greater{0};
  
  for(int m{0}; m<16; m++ )
    {
      for(int n{0}; n<20; n++)
	{
	  double acum{1};
	  for(int t{0}; t<4; t++)
	    {
	      acum *= matrix[t+m][n];
	      if(acum > greater)
		{
		  greater = acum;
		}
	    }
	}
    }
  return greater;
}    

double diagonalLeft(vector<vector <double>> matrix)
{
  double greater{0};
  
  for(int m{0}; m<16; m++ )
    {
      for(int n{0}; n<16; n++)
	{
	  double acum{1};
	  for(int t{0}; t<4; t++)
	    {
	      acum *= matrix[t+m][n+t];
	      if(acum > greater)
		{
		  greater = acum;
		}
	    }
	}
    }
  return greater;
}    

 
double diagonalRight(vector<vector <double>> matrix)
{
  double greater{0};
  
  for(int m{0}; m<17; m++ )
    {
      for(int n{0}; n<17; n++)
	{
	  double acum{1};
	  for(int t{0}; t<4; t++)
	    {
	      acum *= matrix[t+m][19-(t+n)];
	      if(acum > greater)
		{
		  greater = acum;
		}
	    }
	}
    }
    return greater;
    
} 