#include<iostream>
#include"mytemperature.h"
using namespace std;

int main() 
{
	cout << "Celsius   Fahrenheit | Fahrenheit   Celsius" << endl;

	for (double i = 40,double j=120; i >= 31; i--,j=j-10)
	{
		cout << i << celsius_to_fah(i) << "|" << j<<fahrenheit_to_cels(j) << endl;
	}
}






//换算华氏公式华氏度 = 32°F + 摄氏度 × 1.8
//换算摄氏公式摄氏度 = (华氏度 - 32°F) ÷ 1.8