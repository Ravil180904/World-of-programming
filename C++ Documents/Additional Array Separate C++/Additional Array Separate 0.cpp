/*
1 Дано целое число N (> 0). Сформировать и вывести целочисленный
массив размера N, содержащий N первых положительных нечетных чисел:
1, 3, 5, . . . .

N=5
a[5]=1,3,5,7,9
1,5,7
*/

//Step 1
/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "Array of size N: ";
	cin >> N;
	int a[N];
	
	for(int i=0; i<N; ++i)
	{
		a[i]=i*2+1;
		cout << a[i] << " ";
	}
	
	return 0;
}
*/

// Step 2

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "Array of size N: ";
	cin >> N;
	int a[N];
	a[0]=1;
	
	for(int i=1; i<N; ++i)
	{
		a[i]=a[i-1]+2;
	}
	for(int i=0; i<N; ++i)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
*/

/*
2 Дано целое число N (> 0). Сформировать и вывести целочисленный
массив размера N, содержащий степени двойки от первой до N-й: 2, 4,
8, 16, . . . .
N=6
2, 4, 8, 16, 32
2 2*2 2*2*2 2*2*2*2
*/

//Step 1
/*#include <iostream>;
using namespace std;

int main()
{
	int N, p=1;
	cout << "N: ";
	cin >> N;
	int a[N];
	
	for(int i=0; i<N; ++i)
	{
		p *= 2;
		a[i]=p;
		cout << a[i] << " ";
	}
	
	return 0;
}
*/

// Step 2

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	a[0]=2;
	
	for(int i=1; i<N; ++i)
	{
		a[i]=a[i-1]*2;
	}
	for(int i=0; i<N; ++i)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
*/

/*
3 Дано целое число N (> 1), а также первый член A и разность D 
арифметической прогрессии. Сформировать и вывести массив размера N, 
содержащий N первых членов данной прогрессии:
A, A + D, A + 2·D, A + 3·D, . . . .
N=4
A=2, D=3;
2, 2+1*3=5, 2+2*3=2+6=8, 2+3*3=2+9=11, 2+4*3=2+12=14
2 5 8 11 14 
A += D
N=4 A=2
1 2 3 4 5
2 
*/

//Step 1
/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	int A, D;
	cout << "A: ";
	cin >> A;
	cout << "D: ";
	cin >> D;
	int n;
	cout << A << " ";
	n=A;
	
	for(int i=0; i<N; ++i)
	{
		n += D;
		a[i]=n;
		cout << a[i] << " ";
	}
	
	return 0;
}*/


//Step 2

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	
	int A, D;
	cout << "A: ";
	cin >> A;
	cout << "D: ";
	cin >> D;
	//cout << A << " ";
	a[0]=A;
	
	for(int i=1; i<N; ++i)
	{
		a[i]=a[i-1]+D;
	}
	for(int i=0; i<N; ++i)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
*/

/*
4 Дано целое число N (> 1), а также первый член A и знаменатель D
геометрической прогрессии. Сформировать и вывести массив размера N,
содержащий N первых членов данной прогрессии:
A, A·D, A·D^2, A·D^3, . . . .
N=4, A=3, D=2;
3*2^0, 3*2^1, 3*2^2, 3*2^3, 3*2^4
3, 6, 12, 24, 48
*/

//Step 1
/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int A, D;
	cout << "A: ";
	cin >> A;
	cout << "D: ";
	cin >> D;
	int a[N];
	cout << A << " ";
	int n;
	n=A;
	
	for(int i=0; i<N; ++i)
	{
		n *= D;
		a[i]=n;
		cout << a[i] << " ";
	}
	
	return 0;
}
*/

//Step 2
/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int A, D;
	cout << "A: ";
	cin >> A;
	cout << "D: ";
	cin >> D;
	int a[N];
	a[0]=A;
	
	for(int i=1; i<N; ++i)
	{
		a[i]=a[i-1]*D;
	}
	for(int i=0; i<N; ++i)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
*/


/*
5 Дано целое число N (> 2). Сформировать и вывести целочисленный
массив размера N, содержащий N первых элементов последовательности
чисел Фибоначчи F(K):
F(1) = 1, F(2) = 1, F(K) = F(K−2) + F(K−1), K = 3, 4, . . . .
1 1 2 3 5 8 13 
F(1) = 1, F(2) = 1, F(K) = F(K−2) + F(K−1), K = 3, 4, . . . .
1 1 2 3 5 8 13
N=5
1, 1, 2, 3, 5
1+1=2
2+1=3
3+2=5
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a=1, b=1, c=0;
	int n[N];
	
	cout << a << " " << b << " ";
	for(int i=2; i<N; ++i)
	{
		c=a+b;
		n[i]=c;
		b=a;
		a=c;
		cout << n[i] << " ";
	}
	
	return 0;
}
*/

//Step 2
/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a=1, b=1;
	int n[N];
	n[0]=a;
	n[1]=b;
	
	for(int i=2; i<N; ++i)
	{
		n[i]=n[i-2]+n[i-1];
	}
	for(int i=0; i<N; ++i)
	{
		cout << n[i] << " ";
	}
	
	return 0;
}
*/


/*
6 Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный 
массив размера N, первый элемент которого равен A, второй равен B, 
а каждый последующий элемент равен сумме всех предыдущих.
N=6, A=3, B=2
3 2 5 10 20 40
3+2=5 5+3+2=10 10+5+3+2=20 20+10+5+3+2=40
*/

//Step 1

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int A, B, D=0;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	
	int a[N];
	cout << A << " " << B << " ";
	
	for(int i=2; i<N; ++i)
	{
		D=A+B;
		B=D;
		A=D;
		a[i]=D;
		cout << a[i] << " ";
	}
	
	return 0;
}
*/


//Step 2
/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int A, B, D=0;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	
	int a[N];
	a[0]=A;
	a[1]=B;
	a[2]=A+B;
	
	for(int i=3; i<N; ++i)
	{
		a[i]=a[i-1]+a[i-1];
	}
	
	for(int i=0; i<N; ++i)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
*/

/*
7 Дан массив размера N. Вывести его элементы в обратном порядке.
N=5
1, 2, 3, 4, 5
5, 4, 3, 2, 1
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "Set of array N:" << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	cout << "Result is" << endl;
	for(int i=N-1; i>=0; --i)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
*/

/*
8 Дан целочисленный массив размера N. Вывести все содержащиеся в
данном массиве нечетные числа в порядке возрастания их индексов, а
также их количество K.
N=5
1 2 3 4 5
1 3 5
3
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, K=0;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	for(int i=0; i<N; ++i)
	{
		if(a[i]%2==1)
		{
			cout << a[i] << " ";
			++K;
		}
	}
	cout << endl;
	cout << "The amount of odd numbers: " << K;
	
	return 0;
}
*/

/*
9 Дан целочисленный массив размера N. Вывести все содержащиеся в
данном массиве четные числа в порядке убывания их индексов, а также
их количество K.
N=5
1 2 3 4 5
4 2
2

1 4 3 2 5
2 4
2
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, K=0;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	for(int i=N-1; i>=0; --i)
	{
		if(a[i]%2==0)
		{
			cout << a[i] << " ";
			++K;
		}
	}
	cout << endl;
	cout << "The amount of even numbers: " << K;
	
	return 0;
}
*/

/*
10 Дан целочисленный массив размера N. Вывести вначале все содержащиеся 
в данном массиве четные числа в порядке возрастания их индексов,
а затем — все нечетные числа в порядке убывания их индексов.
N=5
1 3 4 5 8
4 8
5 3 1
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	int a[N];
	cout << "The set of the array N: " << endl;
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	cout << "The result of even numbers in the increasing order: ";
	for(int i=0; i<N; ++i)
	{
		if(a[i]%2==0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;
	
	cout << "The result of odd numbers in the decreasing order: ";
	for(int i=N-1; i>=0; --i)
	{
		if(a[i]%2==1)
		{
			cout << a[i] << " ";
		}
	}
	
	return 0;
}
*/


/*
11 Дан массив A размера N и целое число K (1 ≤ K ≤ N). Вывести элементы 
массива с порядковыми номерами, кратными K: A[K], A[2·K], A[3·K], . . . .
Условный оператор не использовать.
N=6
2 3 4 5 7 8
K=3
a[3], 
5
*/


/*#include <iostream>;
using namespace std;

int main()
{
	int N, K;
	cout << "N: ";
	cin >> N;
	cout << "K: ";
	cin >> K;
	int a[N];
	cout << "The set of the array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	for(int i=K; i<N; i += K)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
*/

/*
12 Дан массив A размера N (N — четное число). Вывести его элементы
с четными номерами в порядке возрастания номеров: A[0] A[2], A[4], A[6], . . ., A[N-1] .
Условный оператор не использовать.
N=6
2 3 4 5 7 8
2, 4, 7
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of the array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	for(int i=0; i<N; i += 2)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
*/

/*
13 Дан массив A размера N (N — нечетное число). Вывести его элементы
с нечетными номерами в порядке убывания номеров: A[N−2], A[N−4], . . .,
A[1]. Условный оператор не использовать.
N=5
1 2 4 5 6
5 2
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of the array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	for(int i=1; i<N; i += 2)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
*/

/*
14 Дан массив A размера N. Вывести вначале его элементы с четными
номерами (в порядке возрастания номеров), а затем — элементы с нечетными 
номерами (также в порядке возрастания номеров):
A[0], A[2], A[4], A[6], . . ., A[1], A[3], A[5], . . . .
Условный оператор не использовать.
N=6
1 2 4 5 6 7
1   4   6
  2   5   7
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of the array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	cout << "The set of the array with even order of numbers: " << endl;
	for(int i=0; i<N; i += 2)
	{
		cout << a[i] << " ";
	}
	
	cout << endl;
	cout << "The set of the array with odd order of numbers: " << endl;
	for(int i=1; i<N; i += 2)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
*/

/*
15 Дан массив A размера N. Вывести вначале его элементы с нечетными
номерами в порядке возрастания номеров, а затем — элементы с четными
номерами в порядке убывания номеров. Условный оператор не использовать.
N=6
1 2 4 5 6 7
  2   5   7
6   4   1
N=7
1 2 4 5 6 7 12
  2   5   7
12 6 4 1
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of the array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	cout << "The elements with odd numbers in the increasing order: " << endl;
	for(int i=1; i<N; i += 2)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	cout << "The elements with even numbers in the decreasing order: " << endl;
	if(N%2==1)
	{
		for(int i=N-1; i>=0; i -= 2)
		{
			cout << a[i] << " ";
		}
	}
	else
	{
		for(int i=N-2; i>=0; i -= 2)
		{
			cout << a[i] << " ";
		}
	}
	
	return 0;
}
*/


/*
16 Дан массив A размера N. Вывести его элементы в следующем порядке:
A[0], A[N-1] , A[1], A[N−2], A[2], A[N−3], . . . .
l <=      r
N=5
0 1 2 3 4
1 2 4 5 7
a[l] a[r]
1 7
2 5
4 4 
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of the array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	int L=0, K=N-1;
	while(L<=K)
	{
		cout << a[L] << " " << a[K] << " ";
		++L;
		--K;
	}
	
	return 0;
}
*/

/*
17 Дан массив A размера N. Вывести его элементы в следующем порядке:
A[0], A[1], A[N-1] , A[N−2], . . .
l		r
0 1 2 3 4
1 2 4 5 7
1 2 7 5 4 4
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of the array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	int L=0, K=N-1;
	while(L <= K)
	{
		cout << a[L] << " " << a[L+1] << " " << a[K] << " " << a[K-1] << " ";
		L += 2;
		K -= 2;
	}
	
	return 0;
}
*/
