/*
1 Дано целое число N (> 0). Сформировать и вывести целочисленный
массив размера N, содержащий N первых положительных нечетных чисел:
1, 3, 5, . . . .
N=5 1.3.5.7.9

*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	for(int i=1; i<N+N; i += 2)
	{
		cout << i << " ";	
	}
}
*/

/*
2 Дано целое число N (> 0). Сформировать и вывести целочисленный
массив размера N, содержащий степени двойки от первой до N-й: 2, 4,
8, 16, . . . .
N=3
2, 4, 8
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=2;
	cin >> N;
	int p=1;
	
	for(int i=0; i<N; ++i)
	{
		p *= a;
		cout << p << " ";
	}
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

N=4, A=2, D=3
n=2
2+3=5

*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, A, D, n=0;
	cin >> N >> A >> D;
	cout << A << " ";
	n=A;
	
	for(int i=0; i<N; ++i)
	{
		n += D; //2+3=5, 2+6=8, 2+9=11
		cout << n << " ";
	}
	
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

/*#include <iostream>;
using namespace std;

int main()
{
	int N, A, D, n=0;
	cin >> N >> A >> D;
	
	n=A;
	cout << n << " ";
	for(int i=0; i<N; ++i)
	{
		n *= D;
		cout << n << " ";
	}
}
*/

/*
5 Дано целое число N (> 2). Сформировать и вывести целочисленный
массив размера N, содержащий N первых элементов последовательности
чисел Фибоначчи F(K):
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
	int N, a=1, b=1, c=0;
	cin >> N;
	
	cout << a << " " << b << " ";
	
	for(int i=2; i<N; ++i)
	{
		c=a+b;
		a=b;
		b=c;
		cout << c << " ";
	}
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

/*#include <iostream>;
using namespace std;

int main()
{
	int N, A, B, n=0;
	cout << "N: ";
	cin >> N;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	
	cout << A << " " << B << " ";

	for(int i=2; i<N; ++i)
	{
		n = A+B;
		A=n;
		B=A;
		cout << n << " ";
	}
	
	return 0;
}
*/


/*
1 Дано целое число N (> 0). Сформировать и вывести целочисленный
массив размера N, содержащий N первых положительных нечетных чисел:
1, 3, 5, . . . .
1, 3, 5, 7, 9


0 1 2 3 4 5  6     7
1 3 5 7 9 11 13
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a[N];
	
	for(int i=0; i<N; ++i)
	{
		//cout << (i*2)+1 << " ";
		a[i] = i*2+1;   //b=1;
		cout << a[i] << " ";   //cout << b;
	}
}
*/

/*
2 Дано целое число N (> 0). Сформировать и вывести целочисленный
массив размера N, содержащий степени двойки от первой до N-й: 2, 4,
8, 16, . . . .
N=5
2,4,8,16,32

*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, A=2, p=1;
	cin >> N;
	int a[N];
	
	for(int i=0; i<N; ++i)
	{
		p *= A;
		a[i] = p;
		cout << a[i] << " ";
	}
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


N=4, A=2, D=3
n=2
2+3=5
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, A, D, n;
	cin >> N >> A >> D;
	cout << A << " ";
	int a[N];
	n=A;
	
	for(int i=0; i<N; ++i)
	{
		n += D;
		a[i]=n;
		cout << a[i] << " ";
	}
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

/*#include <iostream>;
using namespace std;

int main()
{
	int N, A, D, n;
	cin >> N >> A >> D;
	int a[N];
	cout << A << " ";
	n=A;
	
	for(int i=0; i<N; ++i)
	{
		n *= D;
		a[i]=n;
		cout << a[i] << " ";
	}
}
*/

/*
5 Дано целое число N (> 2). Сформировать и вывести целочисленный
массив размера N, содержащий N первых элементов последовательности
чисел Фибоначчи F(K):
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
	int N, A=1, B=1, C;
	cin >> N;
	int a[N];
	a[0]=1;
	a[1]=1;
	cout << A << " " << B << " ";
	
	for(int i=2; i<N; ++i)
	{
		C=A+B;
		A=B;
		B=C;
		a[i]=C;
		cout << a[i] << " ";
	}
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

/*#include <iostream>;
using namespace std;

int main()
{
	int N, A, B, n;
	cin >> N >> A >> B;
	int a[N];
	a[0]=A;
	a[1]=B;
	cout << A << " " << B << " ";
	
	for(int i=2; i<N; ++i)
	{
		n=A+B;
		A=n;
		B=A;
		a[i]=n;
		cout << a[i] << " ";
	}
}
*/

/*
1 Дано целое число N (> 0). Сформировать и вывести целочисленный
массив размера N, содержащий N первых положительных нечетных чисел:
1, 3, 5, . . . .
0,1,2,3,4,5
1 3 5,7,9
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a[N];
	a[0]=1;
	
	for(int i=1; i<N; ++i)
	{
		//cout << (i*2)+1 << " ";
		a[i] = a[i-1]+2;   //b=1; 
   //cout << b;
	}
	for(int i=0; i<N; ++i)
	{
		cout << a[i] << " ";
	}
}
*/

/*
2 Дано целое число N (> 0). Сформировать и вывести целочисленный
массив размера N, содержащий степени двойки от первой до N-й: 2, 4,
8, 16, . . . .
a[0]=2
N=5
0 1 2 3 4
2 4 8 16 32
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N; 
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

/*#include <iostream>;
using namespace std;

int main()
{
	int N, A, D;
	cin >> N >> A >> D;
	int a[N];
	a[0]=A;
	
	for(int i=1; i<N; ++i)
	{
		a[i]=a[i-1]+D;
	}
	for(int i=0; i<N; ++i)
	{
		cout << a[i] << " ";
	}
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

/*#include <iostream>;
using namespace std;

int main()
{
	int N, A, D;
	cin >> N >> A >> D;
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
}
*/

/*
5 Дано целое число N (> 2). Сформировать и вывести целочисленный
массив размера N, содержащий N первых элементов последовательности
чисел Фибоначчи F(K):
F(1) = 1, F(2) = 1, F(K) = F(K−2) + F(K−1), K = 3, 4, . . . .
1 1 2 3 5 8 13 
N=5
1 1 2 3 5
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a[N];
	a[0]=1;
	a[1]=1;
	
	for(int i=2; i<N; ++i)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0; i<N; ++i)
	{
		cout << a[i] << " ";
	}
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

/*#include <iostream>;
using namespace std;

int main()
{
	int N, A, D;
	cin >> N >> A >> D;
	int a[N];
	a[0]=A;
	a[1]=D;
	a[2]=A+D;
	
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
	cin >> N;
	int a[N];
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	for(int i=N-1; i>=0; --i)
	{
		cout << a[i] << " ";
	}
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
	cin >> N;
	int a[N];
	
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
	cout << K;
}
*/


/*
9 Дан целочисленный массив размера N. Вывести все содержащиеся в
данном массиве четные числа в порядке убывания их индексов, а также
их количество K.
N=3
4 5 6
6 4
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, K=0;
	cin >> N;
	int a[N];
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	for(int i=N-1; i>=0; --i)
	{
		if(a[i]%2 == 0)
		{
			cout << a[i] << " ";
			++K;
		}
	}
	cout << endl;
	cout << K;
}
*/

/*
10 Дан целочисленный массив размера N. Вывести вначале все содержащиеся 
в данном массиве четные числа в порядке возрастания их индексов,
а затем — все нечетные числа в порядке убывания их индексов.

*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a[N];
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	for(int i=0; i<N; ++i)
	{
		if(a[i]%2==0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;
	for(int i=N-1; i>=0; --i)
	{
		if(a[i]%2==1)
		{
			cout << a[i] << " ";
		}
	}
}
*/

/*
11 Дан массив A размера N и целое число K (1 ≤ K ≤ N). Вывести элементы 
массива с порядковыми номерами, кратными K: A[K], A[2·K], A[3·K], . . . .
Условный оператор не использовать.
N=6
2 3 4 5 7
K=5
a[5], 
7
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a[N];
	int K;
	cin >> K;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	for(int i=K; i<N; i += K)
	{
		cout << a[i] << " ";
	}
}
*/

/*
12 Дан массив A размера N (N — четное число). Вывести его элементы
с четными номерами в порядке возрастания номеров: A[0] A[2], A[4], A[6], . . ., A[N-1] .
Условный оператор не использовать.
N=6
1 2 4 5 6 7
1   4   6
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a[N];
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	for(int i=0; i<N; i += 2)
	{
		cout << a[i] << " ";	
	}
}
*/

/*
13 Дан массив A размера N (N — нечетное число). Вывести его элементы
с нечетными номерами в порядке убывания номеров: A[N−2], A[N−4], . . .,
A[1]. Условный оператор не использовать.
N=5
1 2 4 5 6
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a[N];
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	for(int i=1; i<N; i += 2)
	{
		cout << a[i] << " ";
	}
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
	cin >> N;
	int a[N];
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	for(int i=0; i<N; i += 2)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for(int i=1; i<N; i += 2)
	{
		cout << a[i] << " ";
	}
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
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a[N];
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	for(int i=1; i<N; i += 2)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
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
}
*/

/*
16 Дан массив A размера N. Вывести его элементы в следующем порядке:
A[0], A[N-1] , A[1], A[N−2], A[2], A[N−3], . . . .
l <=      r
0 1 2 3 4
1 2 4 5 7
1 7
a[l] a[r]
2 5
4 4      
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a[N];
	
	
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	int l=0, r=N-1;
	
	while(l<=r)
	{
		cout << a[l] << " " << a[r] << " ";
		++l;
		--r;
			
	}*/
	/*for(int i=0; i<N-i; ++i)
	{
		cout << a[i] << " ";
		for(int j=N-i; j>N-i-1; --j)
		{
			cout << a[j-1] << " ";
		}
	}*/
	/*for(int i=N-1; i>=0; --i)
	{
		cout << a[i] << " ";
	}*/ 
//}


/*
17 Дан массив A размера N. Вывести его элементы в следующем порядке:
A[0], A[1], A[N-1] , A[N−2], . . .
l		r
0 1 2 3 4
1 2 4 5 7
1 2 7 5 4 4
*/

#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a[N];
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	int l=0, r=N-1;
	
	while(L <= K)
	{
		cout << a[l] << " " << a[l+1] << " " << a[r] << " " << a[r-1] << " ";
		++l;
		--r;
	}
}
