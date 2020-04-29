#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

//Headers
string toString (double);
int toInt (string);
double todouble (string);

int main (){
	int sum;
	sum = 0;
	int i, n;
	cout<<"Jumlah Bilangan"<<endl;
	cin>>n;
	for(i=0; i<n; i++){
		int b[100];
		
		if(i<n){
			cin>>b[i];
			sum = sum+b[i];
			
		}
	}
	cout<<"Hasil Penjumlahan : ";
	cout<<sum<<endl;
	
	return 0;
}

//The Following Implements type conversion function.
string toString (double value){ //int also

	stringstream temp;
	temp<<value;
	return temp.str();
}

int tiInt (string text){
	return atoi(text.c_str());
}

double toDouble (string text){
	return atof(text.c_str());
}
