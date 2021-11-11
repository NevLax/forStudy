#include <iostream>
using namespace std;

	int NewLax();		//Если функция описанна ниже метода мэйн, то ды должен обьявить ее конструкцию
	
	int main(){
	int start;
	int finish;
	int compresion;
	
	cout << "Введи начальное число, пёс: "; 
	start = NewLax();
	cout << "Введи конечное число: ";
	finish = NewLax();
	
	for (int i = start; i <= finish; i++){
		cout << "Введите число: " << i << endl;
		compresion = NewLax();
		
		if(!(compresion == i)){
			i--;
			i--;
			cout << "Ты ввел не то число уебан" << endl;
		}
		
	}
	cout << "Красава, справился!" << endl;
	return 0;
	}
	
	int NewLax(){
	int number;
	cin >> number;	//+
	while (cin.fail()) {
		cin.clear();
		cin.ignore(32767,'\n');
	}
	return number;
	}
