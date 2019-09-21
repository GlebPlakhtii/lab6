#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

vector<char> get_chars(string path);
bool compare_text(vector<char> A,vector<char> B);


const string Apath="A.txt";
const string Bpath="B.txt";      //path to files


int main()
{


vector <char> A_char =get_chars(Apath);
vector <char> B_char =get_chars(Bpath);

bool t = compare_text(A_char,B_char);
cout<<t<<endl;






	return 0;
}
vector<char> get_chars(string path)
{
	vector<char> tmp;
	ifstream fin;
	fin.open(path);
	char ch;
	while (!fin.eof())
	{
		fin>>ch;
		tmp.push_back(ch);
		
		
	}
	return tmp;

}


bool compare_text(vector<char> A,vector<char> B)
{ 
bool tmp=false;
																	//return true , if every аєB => aєA  
for (int i = 0; i < B.size(); ++i)
{
	
	for (int j = 0; j < A.size(); ++j)
	{
		if(B[i]==B[j])
		{
			tmp=true;
		}

	}
	if (!tmp)
	{
		return false;
	}
}


}
