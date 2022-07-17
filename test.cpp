 
#include<iostream>
using namespace std;
 



bool checkMember(int n){
 

int i,a=0,b=1,c;
  while(a<n){
        c=a+b;
        a=b;
        b=c;
    
    
}
    return a==n;
}
    
 
    





int getFibOutput(int input)
{
    if(checkMember(input)){
        cout<<input;
    }
    else
	{
        if (input < 2)
		return 0;
 
	long long int ef1 = 0, ef2 = 2;
	long long int sum = ef1 + ef2;

	while (ef2 <= input)
	{
		long long int ef3 = 4*ef2 + ef1;

		if (ef3 > input)
			break;

		ef1 = ef2;
		ef2 = ef3;
		sum += ef2;
	}

	return sum;
    }
}

