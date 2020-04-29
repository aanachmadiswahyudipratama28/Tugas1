#include <iostream>
using namespace std;

void sum(int n){
	int b[100], hasil = 0;
	for(int i=0; i<n; i++){
		cin>>b[i];
		hasil=n+b[i];
	}
	cout<<"Hasil Penjumlahan : "<<hasil<<endl;
}

int main(){
	int n;
	cout<<"Jumlah Bilangan : ";
	cin>>n;
	sum(n);
	return 0;
	
}
