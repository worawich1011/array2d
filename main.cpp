#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void calprice(float price[5][3]);
void display(string name[5],float price[5][3]);
int main() {
	string name[5];
	float price[5][3];
	for (int i = 0; i < 5; i++) {
		cout << "Enter Product Name: ";
		cin >> name[i];
		cout << "\tprice: ";
		cin >> price[i][0];
	}
	calprice(price);
	display(name, price);
	return 0;
}
void calprice(float price[5][3]) {
	for (int i = 0; i < 5; i++) {
		price[i][1] = (price[i][0] * 7/100);
		price[i][2] = price[i][0] + price[i][1];
	}
}
void display(string name[], float price[5][3]) {
	cout << left << setw(15) << "No." << setw(20) << "Product" << setw(20) << "Price" << setw(20) << "Vat7%" << setw(20) << "Net" << endl; 
	for (int i = 0; i < 5; i++) {
		cout << left << fixed << setw(15) << i+1 << setw(20) << name[i] << setw(20)<< setprecision(2) << price[i][0] << setw(20) << setprecision(2) << price[i][1] << setw(20) << setprecision(2) << price[i][2] << endl; 
	}
}