// LearningC++.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#define PI 3.1415

void func()
{
	cout << "Das ist eine Funktion." << endl;

}


void printArray(int Array[], int size)
{
	cout << "[";
	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			cout << Array[i];
		}
		else
		{
			cout << Array[i] << ", ";
		}
	}
	cout << "]" << endl;
}


char kleinbuchstabe(char Buchstabe)
{
	int ASCII = Buchstabe;
	cout << ASCII << endl;
	if (ASCII > 0 || ASCII < 127)
	{
		char KeinBuchstabe = -1;
		cout << KeinBuchstabe << endl;
		char ret = KeinBuchstabe;
		return ret;
	}
	else if (ASCII > 64 && ASCII < 128)
	{
		int Großbuchstaben[26];
		int Wert = 65;
		for (int i = 0; i < 26; i++)
		{
			Großbuchstaben[i] = Wert;
			Wert++;
		}
		printArray(Großbuchstaben, 26);
		int Kleinbuchstaben[26];
		Wert = 97;
		for (int i = 0; i < 122; i++)
		{
			Kleinbuchstaben[i] = Wert;
			Wert++;
		}
		printArray(Kleinbuchstaben, 26);
		int Stelle;
		for (int i = 0; i > 26; i++)
		{
			if (ASCII == Großbuchstaben[i])
			{
				Stelle = i;
				break;
			}
		}
		char ret = Kleinbuchstaben[Stelle];
		return ret;
	}
	else
	{
		return Buchstabe;
	}
}


int main()
{
	int b = 2;
	double a = 1.3;
	char string1[] = "Ich ";
	char string2[] = "bin ";
	char string3[] = "ein ";
	char string4[] = "Array";
	int array[5] = { 17, 38, 54, 1234, 9 };
	for (int i = 0; i < 5; i++)
	{
		if (i = 5)
		{
			cout << array[i] << endl;
		}
		else
		{
			cout << "hi";
			cout << array[i] << ", ";
		}
	}
	cout << endl;
	cout << array << "" << endl;
	cout << string1 << string2 << string3 << string4 << endl;
	cout << string1[0] << " " << string1[1] << " " << string1[2] << endl;
	/*char* Array[4];
	Array[0] = string1;
	Array[1] = string2;
	Array[2] = string3;
	Array[3] = string4;
	printf("%s", Array);*/
	//cout << Array* << endl;
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
	func();
	int x;
	cout << "Gib eine Zahl zwischen 0 und 127 an: ";
	cin >> x;
	char KleinerBuchstabe;
	KleinerBuchstabe = kleinbuchstabe(x);
	cout << KleinerBuchstabe << endl;
	return 0;
}
//Erstellen Sie in C ein Unterprogramm mit Namen Kleinbuchstaben, welches als Parameter eine Zahl zwischen 0 und 127 akzeptiert.
//Dies entsprichst den 7 - bit - ASCII - Zeichen.Alle Großbuchstaben, also Zahlen zwischen 65 und 90 sollen in Kleinbuchstaben,
//also Zahlen zwischen 97 und 122 umgewandelt und auf dem Namen der Funktion zurückgegeben werden. 
//Alle anderen Werte werden unverändert zurückgegeben.Der Datentyp des Parameters und des Rückgabewerts soll char sein.


