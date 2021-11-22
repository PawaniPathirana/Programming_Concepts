// a program to calculate the total cost  that is charged from a client for caring a dog for a month in a pet care centre

#include<iostream>
using namespace std;

double dogsWeight;
int numOfDates;

int getTheDailyRate(double, int);
int getTheTotal(int );

int main(){
	
cout<<"Enter Dogs Weight : "	;
cin>>dogsWeight;
cout<<"Enter Num of Dates Per Month Need to Care : ";
cin>>numOfDates;
cout<<"Daily Rate : "<<getTheDailyRate(dogsWeight,numOfDates)<<"\n";
cout<<"Total Price : " <<getTheTotal(numOfDates);

}

int getTheDailyRate(double a,int b){

int dailyRate,total;	
if(b<=10){
	
	if(a<10){
		dailyRate=12;
	}else if(a=10||a<35){
		dailyRate=16;
	}else{
		dailyRate=20;
	}
}else{
if(a<10){
		dailyRate=12;
	}else if(a<=10||a<=35){
		dailyRate=16;
	}else{
		dailyRate=20;
	}	
}

return dailyRate;
}
int getTheTotal(int c){
	int dailyRate=getTheDailyRate(dogsWeight,numOfDates);

int total=c*dailyRate;
return total;	
}


