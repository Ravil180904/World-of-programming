/*Poblem A.Given a two-dimensional array n x n. Find the largest number in array.
4 4
-1 7 3 2
9 2 4 1
8 2 -6 4
1 4 9 4
9
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int col, row;
	cin >> col >> row;
	int mat[col][row];
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			cin >> mat[i][j];
		}
	}
	
	int max=mat[0][0];
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			if(mat[i][j]>max)
				max=mat[i][j];
		}
	}
	cout << max << endl;
	
	return 0;
}
*/

/*Problem C. 74429. Negative
Given a two-dimensional array of size n x m (n rows, m columns). Write a program, which outputs count
of negative numbers in array.
Input
3 4
-1 0 2 3
5 8 20 -12
7 8 -4 9
Output 3
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int col, row;
	cin >> row >> col;
	int mat[col][row];
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			cin >> mat[i][j];
		}
	}
	int a=0;
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			if(mat[i][j]<0)
			{
				++a;
			}
		}
	}
	cout << a << endl;
	
	
	return 0;
}
*/


/*
Problem D. 74434. Multiplication table.
Input: 4
Output: 
0 1 2 3
1 1 2 3
2 2 4 6
3 3 6 9
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	for(int i=0; i<N; ++i)
	{
		cout << i << " ";
	}
	cout << endl;
	
	for(int i=1; i<N; ++i)
	{
		cout << i << " ";
		for(int j=1; j<N; ++j)
		{
			cout << i*j << " ";
		}
		cout << endl;
	}
	
	return 0;
}
*/


/*
Problem E. 74435. Star triangle.
Input - 5
Output:
[*]
[*][*]
[*][*][*]
[*][*][*][*]
[*][*][*][*][*]
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N=5, j;
	cin >> N;
	
	for(j=1; j<=N; ++j)
	{
		for(int i=0; i<j; ++i)
		{
			cout << "[*]";
		}
		cout << endl;
	}
}
*/


/*

/*
Problem G. 74438. Dots or number.
Input=4
Output:
...1
..2.
.3..
4...

*/
/*
#include <iostream>;
using namespace std;

int main()
{
	int N, j;
	cout << "Enter an input: " << endl;
	cin >> N;
	
	cout << "Output is: " << endl;
	for(j=N; j>0; --j)
	{
		for(int i=1; i<j; ++i)
		{
			cout << ".";
		}
		for(int a=N-(j-1); a<(N-(j-1)+1); ++a)
		{
			cout << a;
		}
		for(int n=N-(N-(j-1)); n<N-1; ++n) 
		{
			cout << ".";
		}
		cout << endl;
	}
	
	return 0;
}
*/


/*
Problem J. 74478. Odd or even?
input:
3 3
8 2 4
12 3 4
7 4 9
output:
9 1 5
11 4 3
8 3 10
*/

/*#include <iostream>;
#include <vector>;
using namespace std;

int main()
{
	int row, col;
	cin >> row >> col;
	int mat[row][col];
	
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			cin >> mat[i][j];
		}
	}
	
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			if(mat[i][j+2] %2 == 0)
			{
				++mat[i][j];
			}
			else
			{
				--mat[i][j];
			}
		}
	}
	
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
*/


/*
Problem K. 74497. Sum of elements
Input:]
3 4
1 2 4 6
2 5 7 3
1 4 5 94
Output:
The sum of row number 1 is 13
The sum of row number 2 is 17
The sum of row number 3 is 104
The sum of column number 1 is 4
The sum of column number 2 is 11
The sum of column number 3 is 16
The sum of column number 4 is 103
*/
/*
#include <iostream>;
using namespace std;

int main()
{
	int col, row;
	cout << "Enter Number of rows and colums: " << endl;
	cin >> row >> col;
	int mat[row][col];
	
	cout << "Enter an array input: " << endl;
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			cin >> mat[i][j];
		}
	}
	
	int rowSum[row]={0}, colSum[col]={0};
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			rowSum[i] += mat[i][j];
			colSum[j] += mat[i][j];
		}
	}
	cout << "An output is: " << endl;
	for(int i=0; i<row; ++i)
	{
		cout << "The sum of row number " << i+1 << " is " <<  rowSum[i] << endl;
	}
	
	for(int j=0; j<col; ++j)
	{
		cout << "The sum of column number " << j+1 << " is " << colSum[j] <<endl;
	}
	
	return 0;
}
*/

/*
Problem L. 74500. Minimum numbers.
Input:
3 4
1 5 7 4
2 3 4 5
1 2 1 0
output:
coordinates of min elements:
1;1
3;2
3;3
3;4
Their sum:
4
*/

/*#include <iostream>;
#include <vector>;
using namespace std;

int main()
{
	int row, col, coor=0;
	cin >> row >> col;
	
	vector<vector<int>> mat;
	for(int i=0; i<row; ++i)
	{
		mat.push_back(vector<int>());
		for(int j=0; j<col; ++j)
		{
			mat.back().push_back(++coor);
			cin >> mat[i][j];
		}
	}
	
	vector<pair<int, int>>coordinates;
	int min=mat[0][0];
	for(int i=0; i<row; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			if(mat[i][j]<min)
			
				min=mat[i][j];
				coordinates.push_back(make_pair(i,j));
			
		}
	}
	cout << min << endl;
	for(int i=1; i<coordinates.size(); ++i)
	{
		cout << coordinates[i].first << ";" << coordinates[i].second << " "; 
	}
	
	return 0;
}
*/

/*
Problem N. 74502. Primes.
Input:50
Output:
2 is prime
3 is prime
5 is prime
7 is prime
11 is prime
13 is prime
17 is prime
19 is prime
23 is prime
29 is prime
31 is prime
37 is prime
41 is prime
43 is prime
47 is prime
*/
/*
#include <iostream>;
using namespace std;

int main()
{
	int N, a=0;
	cout << "Input: " << endl;
	cin >> N;
	cout << "Output: " << endl;
	
	for(int i=2; i<N; ++i)
	{
		for(int j=1; j<N; ++j)
		{
			if(i%j==0)
			{
				++a;
			}
		}
		if(a<3)
		{
			cout << i << " Is prime" << endl;
		}
		a=0;
	}
	
	return 0;
}
*/


/*
Problem P. 74504. 2nd diagonal.
Input:
3
-1 0 5
5 -2 5
-3 5 6
Output: 0
Input:
4
5 9 4 5
4 2 6 7
1 5 36 5
11 5 0 0
Output: 27
*/
/*
#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "Input of an number: " << endl;
	cin >> N;
	int mat[N][N];
	cout << "Input of array numbers: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		for(int j=0; j<N; ++j)
		{
			cin >> mat[i][j];
		}
	}
	int sum=0;
	for(int i=0; i<N; ++i)
	{
		sum += mat[i][N-i-1];
	}
	
	cout << "Output is: " << endl; 
	cout << sum << endl;
	
	return 0;
}
*/

/*
Problem Q. 74505. Christmas tree.
Input: 6
Output:
.....*.....
....***....
...*****...
..*******..
.*********.
***********
*/
/*
#include <iostream>;
using namespace std;

int main()
{
	int N,j;
	cout << "Enter an input number: " << endl;
	cin >> N;
	
	cout << "Output is: " << endl;
	for(j=0; j<N+N; j += 2)
	{
		for(int i=j-(N-1); i<N-1; i += 2)
		{
			cout << ".";
		}
		for(int a=0-1; a<j; ++a)
		{
			cout << "*";
		}
		for(int i=j-(N-1); i<N-1; i += 2)
		{
			cout << ".";
		}
		cout << endl;
	}
	
	return 0;
}
*/
