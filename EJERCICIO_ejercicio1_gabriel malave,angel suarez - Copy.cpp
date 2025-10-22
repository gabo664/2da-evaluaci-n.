#include <iostream>
using namespace std;

int main() {
	int n;
	int digito=0;
    int  digital=1;
    int base_normal;
	cout<<"ingrese un numero"<<endl;
	cin>>n;
	//cout<<"segundo numero binario"<<endl;
	//cin>>s;
	while(n>0){
	
	digito= n%10;
	digital+=digito*base_normal;
	base_normal*=2;
	n=n/10;
}
cout<<digital<<endl;
	return 0;
}
