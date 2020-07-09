#include<cstdlib>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

static const char pool[]=
"qwertyuiopasdfghjklzxcvbnm"
"QWERTYUIOPASDFGHJKLZXCVBNM"
"5432167890"
"@!.#";

int poolsize =sizeof(pool)-1;

char gRC()
{
	return pool[rand()%poolsize];
}
int main(int argc, int *argv)
{ srand(time(0));
	
	while(true){

	int pl;
	int nop;
	
    string pw;
	cout<<"Enter the length of password:";
	cin>>pl;
	cout<<"How many password you want? :";
	cin>>nop;
	
	for(int i=0;i<nop;i++)
	{
		for(int j=0;j<pl;j++)
		{
			pw+=gRC();
		}
		cout<<pw<<endl;
		pw="";
	 } 
	system("PAUSE");
}
	return EXIT_SUCCESS;
}
