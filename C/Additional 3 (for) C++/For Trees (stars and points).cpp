/* 1.
*****
*****
*****
*****
*****
*/


/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	for(int i=0; i<N; ++i)
	{
		for(int j=0; j<N; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
*/


/*
2.
*
**
***
****
*****
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	for(int i=0; i<N; ++i)
	{
		for(int j=0; j<=i; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
*/


/*
3.
*****
****
***
**
*
*/


/*#include <iostream>;
using namespace std;

int main()
{
	int N=6;
	cout << "N: ";
	cin >> N;
	
	for(int i=N; i>0; --i)
	{
		for(int j=0; j<i; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
*/

/*
4.
0000* 
000**
00***
0****
*****
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N=5;
	cout << "N: ";
	cin >> N;
	
	for(int i=0; i<N; ++i)
	{
		for(int j=N-1; j>i; --j)
		{
			cout << " ";
		}
		for(int j=0-1; j<i; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
*/


/*
5.
*****
0****
00***
000**
0000*
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	for(int i=N; i>0; --i)
	{
		for(int a=N-(N-i); a<N; ++a)
		{
			cout << " ";
		}
		for(int j=0; j<i; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
*/

/*
6.
0000*
000***
00*****
0*******
*********
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	for(int i=0; i<N*2; i += 2)
	{
		for(int a=i-(N-1); a<N-1; a += 2)
		{
			cout << " ";
		}
		for(int j=0; j<=i; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
*/


/*
7.
......*......
.....***.....
....*****....
...*******...
..*********..
.***********.
*************
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	for(int i=0; i<N*2; i += 2)
	{
		for(int a=i-(N-1); a<N-1; a += 2)
		{
			cout << ".";
		}
		for(int j=0; j<=i; ++j)
		{
			cout << "*";
		}
		for(int b=i-(N-1); b<N-1; b += 2)
		{
			cout << ".";
		}
		cout << endl;
	}
	
	return 0;
}
*/