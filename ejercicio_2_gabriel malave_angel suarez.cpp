  //ejercicio numero 2

#include<iostream>

using namespace std;

int main(){
	
	int ven;
	
	int con1;
	
	int con2;
	
	int con3;
	
	cout<<"ingrese el valor de las ventas"<<endl;
	cin>>ven;
	
	
	for (int i=0;i=11;i++){
	    
	    if(ven>=25000 ) {
	    
			con1=con1+1;	}
		
		
		else if( ven >=75000 && ven <= 120000) {
			
			con2=con2+1;          }
			
		else{
			
			con3=con3+1;    
			
			 }
			
			
	}
		    cout<<"las ventas menores fueron:"<<con1<<endl;
			
			cout<<"las ventas medias fueron:"<<con2<<endl;
			
			cout<<"las ventas mayores fueron:"<<con3<<endl;

	
return 0;
	
}
