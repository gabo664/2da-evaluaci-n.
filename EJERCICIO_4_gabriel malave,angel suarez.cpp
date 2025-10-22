#include <iostream>
using namespace std;

int main() {
	int n;
	int suma=0;
	cout<<"ingrese un numero"<<endl;
	cin>>n;
	for(int x;x<n;x++){
	
	if (n%x==0){
		suma +=x;
		
	
	}
}
	if (suma==n){
		cout<<"vamoo es un numero perfecto"<<endl;
	
	}
	else{
		cout<<"no es un numero perfecto"<<endl;
	}
	return 0;
}
