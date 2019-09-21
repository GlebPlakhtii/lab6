#include <iostream>
#include <cmath>
#include <vector>
#include <random>
#include <ctime>
using namespace std;

void fill_arr();
void mix_arr();



vector<int> a;
vector<int> b;
vector<int> ab;

int main()
{
	srand(time(NULL));

	

	fill_arr();
	
	mix_arr();
    

 	for(int i=0;i<ab.size();i++)
 	{                                 //show ab
 		cout<<ab[i]<<endl;
 	} 




	return 0;
}

void fill_arr()
{
	for (int i = 0; i < 10; ++i)
	{
		a.push_back(rand()%100);
		b.push_back(rand()%100);             //fill arr 
		
	}
}
void mix_arr(){





	for (int i=0;i<a.size();i++)
		{
			ab.push_back(a[i]);					// смешивание массива
			ab.push_back(b[i]);

		}
}

