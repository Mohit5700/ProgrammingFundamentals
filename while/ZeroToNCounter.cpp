//Preprocesor directive for basic input output manipulation
#include <iostream>
//Using C++ standard namespace functions
using namespace std;

//Program body
//This program will print a series of numbers from 0 to user input, only if user input number is less than 100
int main(){
	int num; //This variable will keep input from user
	cout<<"Please, input a number for me to count to: ";
	cin>>num;
	int i=0;
	if(num<100){
		while(i<num){
			cout<<i<<endl;
			i++;
		}
	}
	else{
		cout<<"Number can't be equals or greater than 100'"<<endl;
	}
}
