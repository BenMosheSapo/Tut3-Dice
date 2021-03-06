#include "Dice.h"
#include <cstdlib>
#include <iostream>

using namespace std;
Dice::Dice()
{
}


int Dice::Roll(){
	return rand()%6 +1;
}

Dice::~Dice()
{
}

float average(Dice Die, int NumRoll){
	int i;
	float sum=0;
	for (i = 0; i < NumRoll; i++){
		sum += Die.Roll();
		cout << sum << endl;
	}
	return sum / NumRoll;
}
float average(int Rolls[], int NumRoll){
	int i;
	float sum = 0;
	for (i = 0; i < NumRoll; i++){
		sum += Rolls[i];
	}
	return sum / NumRoll;
}

int main(){
	int Rolls[2] = { 1, 2 };
	float test;
	Dice die;
	test = average(Rolls, 2);
	cout << test << endl;
	test = average(die, 100);
	cout << test;
}