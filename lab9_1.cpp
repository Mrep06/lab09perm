#include<iostream>
#include<cmath>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double load, per, pay;
	
	cout << "Enter initial loan: ";
	cin >> load;
	cout << "Enter interest rate per year (%): ";
	cin >> per;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

for(int i = 1; load > 0; i++){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i ; 
	cout << setw(13) << left << load;
	cout << setw(13) << left << load * per/100.00;
	cout << setw(13) << left << load + (load * per/100.00);
	if(pay <= (load + (load * per/100))) cout << setw(13) << left << pay;
    else{ 
		pay = load + (load * per/100.00);
        cout << setw(13) << left << pay;
	}
	cout << setw(13) << left << (load + (load * per/100.00)) - pay;
	load = (load +(load * per/100.00)) - pay;
	cout << "\n";	
}
	return 0;
}
