#include<iostream>

using namespace std;

int main(){
	int score[4][5]=	{
	{1 ,2 ,3 ,4 ,5},
	{6 ,7 ,8 ,9 ,10},
	{11,12,13,14,15},
	{16,17,18,19,20}
						};

	for(int i=0;i<4;i++)
	{ 
		for(int j=0;j<97;j++)
		{
			cout<<"-";
		}
		cout<<"\n";
		cout<<"|";
		for(int j=0;j<5;j++)
		{
			if (i==0 && j==0)
			{
				cout<<"Row / Col \t|";
				for(int k=0;k<5;k++)
					cout<<"\t Col "<<k<<"\t|";
				cout<<"\n";
				for(int j=0;j<97;j++)
						cout<<"-";
				cout<<"\n|";
			}
			if(j==0)
			{
				cout<<"\tRow "<<i<<" \t|";
				cout<<"\t"<<score[i][j]<<"\t|";
			}
			else
				cout<<"\t"<<score[i][j]<<"\t|";
		}
		cout<<"\n";
	}
		for(int j=0;j<97;j++)
		{
			cout<<"-";
		}
}
