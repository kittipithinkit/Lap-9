#include<iostream>
#include<iomanip>
using namespace std;

int main(){	
	double loan;
	double rate;
	double pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int i = 1 ;
	double prevbalance = loan;

	
	while (prevbalance > 0) {
		double interest = prevbalance * rate/100;
		double total = prevbalance + interest;
			if ( pay > total ) {
		    pay = total;
		    }
		double balance = total - pay;
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << prevbalance ;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << balance;
	i++;
	prevbalance = balance;
	cout << "\n";	
	}

	return 0;
}
