#include<iostream>
using namespace std;
int printTableLines();

int main(){
	
	string arr[4][2]={{"Toyota","        Corolla"},{"Honda","        Civic"},{"Nissan","        Rough"},{"Wolkswagen","Magotan"}};
	printTableLines();
	cout<<"\n";
	cout<<"Make\t"<<"        Model\n";
	printTableLines();
	cout<<"\n";
	for(int i=0;i<5;i++){
		for(int j=0;j<2;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
		
	}
	printTableLines();
	
	return 0;
}

int printTableLines(){
	
	cout<<"*****************************";
}
