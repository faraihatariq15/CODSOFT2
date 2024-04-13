#include<iostream>
using namespace std;
int main()
{
	int counter;
	while(true){
		int randomnum;
		int define=50;
		cout<<"Enter a random number"<<endl;
		cin>>randomnum;
		if(randomnum>define){
			cout<<"oops! number too high"<<endl;
			cout<<endl;
			counter++;
			
		}
			else if (randomnum<define){
				cout<<"oops! number too low"<<endl;
				cout<<endl;
				counter++;
			}
			else{
				cout<<"congo! you have entered correct number"<<endl;
				counter++;
				cout<<endl;
			    cout<<"you have got the number in "<<counter++<<" tries"<<endl;
			}
			}
			
	return 0;
	
}
