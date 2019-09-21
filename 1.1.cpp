#include <iostream>
#include <string>

using namespace std;


int c=0;
int main()
{

	string str;
	char ch;
	cout<<"enter string : ";
	cin>>str;
	cout<<"enter char : ";
	cin>>ch;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i]==ch)
		{
			c++;
		}
		
	}
	cout<<"there are "<<c<<' '<<ch<<" in "<<str<<endl;






	return 0;
}


