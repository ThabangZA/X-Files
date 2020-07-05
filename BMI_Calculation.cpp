#include <iostream>
#include <cmath>

using namespace std;

double BMI, weight, height;

void getData ()
{
  cout << "Please enter your weight(kilograms): ";
  cin >> weight;
  cout << "Please enter your height(meters): ";
  cin >> height;
}

double calcBMI()
{
  BMI = round(weight / (height * height));
//BMI =weight /pow(height);
  return BMI;
}


void displayFitnessResults()
{
    if(BMI < 18.5)
    {
        cout<<"Your are Underweight";
    }
     if(BMI >=18.5 && BMI <=24.9)
    {
        cout<<"You are Healthy";
    }
     if(BMI >=25.0 && BMI<=29.9)
    {
        cout<<"You are Overweight";
    }
    else if(BMI >=30)
    {
        cout<<"You are Obese";
    }
}


int main ()
{

    getData();
    cout << "BMI = " << calcBMI()<<endl;
    displayFitnessResults();

    return 0;
}

