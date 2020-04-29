#include <iostream>
using namespace std;
int box[3][3] = {{2,4,6},{8,10,12},{14,16,18}};

void horizontal (int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<box[i][j]<<" ";
			
		}
	}cout<<endl;
}

void vertikal(int n){
	int k=1;
	for(int i=0; i<n; i++){
		for(int k=0; k<n; k++){
			cout<<"Jumlah Box "<<k++<<" : "<<box[i][k]<<endl;
		}
	}
}

int main(){
	int n=3, l=9;
	cout<<"Jumlah Nomor : "<<l<<endl;
	cout<<"Nomor Dus : ";
	horizontal(n);
	vertikal(n);
	
	return 0;
}
