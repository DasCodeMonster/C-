// LearningC++.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#define PI 3.1415
int main()
{
	int b = 2;
	float a = 1.3;
	cout << "Hallo!" << endl;
	//cout << ;
	cout << "Pi ist " << PI << endl;
	cout << (a == 1.3) << endl;
	if (a == 1.3)
	{
		cout << "a ist " << a << endl;
	}
	else
	{
		cout << "a ist nicht 1.3" << endl;
		cout << a << endl;
	}
	return 0;
}

