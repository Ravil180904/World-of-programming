/*
1 Дан массив A ненулевых целых чисел размера 10. Вывести значение
первого из тех его элементов A[K], которые удовлетворяют неравенству
A[K] < A[9]. Если таких элементов нет, то вывести -1.
A[10}
1 2 4 5 7 8 9 3 7 4
K=6
1 k=0 
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A[10];
	
	for(int i=0; i<10; ++i)
	{
		cin >> A[i];
	}
	for(int i=0; i<10; ++i)
	{
		if(A[i]<A[9])
		{
			cout << A[i];
			return 0;
		}
		
	}
	cout << "-1";
	
}
*/

/*
2 Дан целочисленный массив A размера 10. Вывести порядковый номер
последнего из тех его элементов A[K], которые удовлетворяют двойному
неравенству A[0] < A[K] < A[9]. Если таких элементов нет, то вывести -1.
A[10}
1 2 4 5 7 8 9 3 7 4
1				  4
			3 k=7
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A[10];
	
	for(int i=0; i<10; ++i)
	{
		cin >> A[i];
	}
	for(int i=10-1; i>=0; --i)
	{
		if((A[0]<A[i]) && (A[9]>A[i]))
		{
			cout << A[i];
			return 0;
		}
	}
	cout << "-1";
}
*/


/*
3 Дан массив размера N и целые числа K и L (0 ≤ K ≤ L ≤ N-1). Найти
сумму элементов массива с номерами от K до L включительно.
N=7
	k	  l
1 2 4 5 7 4 8
K=2 l=5
4+5+7+4=20
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, sum=0;
	cin >> N;
	int a[N];
	int K, L;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	cin >> K >> L;
	for(int i=K; i<=L; ++i)
	{
		sum += a[i];
	}
	cout << sum;
}
*/


/*
4 Дан массив размера N и целые числа K и L (0 ≤ K ≤ L ≤ N-1).
Найти среднее арифметическое элементов массива с номерами от K до L
включительно.
N=7
	k	  l
1 2 4 5 7 4 8
K=2 l=5
4+5+7+4/4=20/4=5
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, K, L, b=0;
	cin >> N;
	int a[N];
	int sum=0, ave=0;
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	cin >> K >> L;
	for(int i=K; i<=L; ++i)
	{
		sum += a[i];
		++b;
	}
	ave=sum/b;
	//cout << "The sum is: " << sum << endl;
	cout << "The average valus is: " << ave << endl;
}
*/


/*
5 Дан массив размера N и целые числа K и L (0 ≤ K ≤ L ≤ N-1). Найти
сумму всех элементов массива, кроме элементов с номерами от K до L
включительно.
N=7
	k	  l
1 2 4 5 7 4 8
K=2 l=5
1+2+8=11
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, K, L, sum=0;
	cin >> N;
	int a[N];
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];	
	}
	cin >> K >> L;
	for(int i=0; i<K; ++i)
	{
		sum += a[i];	
	}	
	for(int i=L+1; i<N; ++i)
	{
		sum += a[i];
	}
	cout << sum;
}
*/

/*
6 Дан массив размера N и целые числа K и L (0 ≤ K ≤ L ≤ N-1).
Найти среднее арифметическое всех элементов массива, кроме элементов
с номерами от K до L включительно.
N=7
	k	  l
1 3 4 5 7 4 8
K=2 l=5
(1+3+8)/3=12/3=4
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, K, L, b=0;
	cin >> N;
	int a[N];
	float sum=0, ave=0;
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	cin >> K >> L;
	
	for(int i=0; i<K; ++i)
	{
		sum += a[i];
		++b;
	}
	for(int i=L+1; i<N; ++i)
	{
		sum += a[i];
		++b;
	}
	ave=sum/b;
	//cout << "The sum is: " << sum << endl;
	cout << "The average value is: " << ave << endl;
	
	return 0;
}
*/

/*
7 Дан целочисленный массив размера N, не содержащий одинаковых
чисел. Проверить, образуют ли его элементы арифметическую прогрессию. 
Если образуют, то вывести разность прогрессии, если нет — вывести 0.
N=7
2 3 4 5 6 7 8
3 2 1
4 3 1
5 4 1
6 5 1
7 6 1
8 7 1	
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, n=0;
	cin >> N;
	int a[N];
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	int t=a[1]-a[0];
	for(int i=0; i<N-1; ++i)
	{
		if(a[i+1]-a[i]!=t)
		{
			cout << "0";
			return 0;
		}
	}
	cout << t;
	
}
*/

/*
8 Дан массив ненулевых целых чисел размера N. Проверить, образуют
ли его элементы геометрическую прогрессию. Если образуют, то вывести 
знаменатель прогрессии, если нет — вывести 0.
N=7
2 4 8 16 32 64 128
2 2 2 2 2 2  
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
	float t=a[1]/a[0];
	for(int i=0; i<N-1; ++i)
	{
		if(a[i+1]/a[i]!=t)
		{
			t=0;
			break;
		}
	}
	cout << t;
}
*/

/*
9 Дан целочисленный массив размера N. Проверить, чередуются ли в
нем четные и нечетные числа. Если чередуются, то вывести 0, если нет,
то вывести порядковый номер первого элемента, нарушающего закономерность.
N=7
2 3 4 5 6 7 8
0 1 0 1 0 1 0

2 4
0 0

2 3 0 1
3 4 1 0
4 5 0 1
5 6 1 0
6 7 0 1
7 8 1 0
2 4 6
3 5 7
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
	
	
	for(int i=0; i<N-1; ++i)
	{
		//cout << a[i] << " " << a[i+1] << " " <<  a[i]%2 << " " << a[i+1]%2 << endl;
		if((a[i]%2)==(a[i+1]%2)) // 0 0 1 1 
		{
			cout << i+1;
			return 0;
		}
	}
	cout << "0";
	
}
*/
