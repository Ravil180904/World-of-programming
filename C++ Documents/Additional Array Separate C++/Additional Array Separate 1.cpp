/*
1 Дан массив A ненулевых целых чисел размера 10. Вывести значение
первого из тех его элементов A[K], которые удовлетворяют неравенству
A[K] < A[9]. Если таких элементов нет, то вывести -1.
A[10}
4 5 2 5 7 8 9 3 7 4
K=6
2 k=0 
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A[10];
	cout << "The set of array N: " << endl;
	
	for(int i=0; i<10; ++i)
	{
		cin >> A[i];
	}
	
	cout << "The number which is less than a[9]: ";
	for(int i=0; i<10; ++i)
	{
		if(A[i]<A[9])
		{
			cout << A[i];
			return 0;
		}
	}
	cout << "-1";
	
	return 0;
}
*/


/*
2 Дан целочисленный массив A размера 10. Вывести порядковый номер
последнего из тех его элементов A[K], которые удовлетворяют двойному
неравенству A[0] < A[K] < A[9]. Если таких элементов нет, то вывести -1.
4 8 7 8 2 1 6 7 9 7
6
*/
/*
#include <iostream>;
using namespace std;

int main()
{
	int a[10];
	cout << "The set of the array a: " << endl;
	
	for(int i=0; i<10; ++i)
	{
		cin >> a[i];
	}
	
	cout << "The result of a[0]<a[i]<a[9] is: ";
	for(int i=10-1; i>=0; --i)
	{
		if((a[0]<a[i]) && (a[i]<a[9]))
		{
			cout << a[i];
			return 0;
		}
	}
	
	cout << "-1";
	return 0;
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
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	int K, L, sum=0;
	cout << "The set of the array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	cout << "K: ";
	cin >> K;
	cout << "L: ";
	cin >> L;
	cout << "The sum of the numbers between K and L is: ";
	
	for(int i=K; i<=L; ++i)
	{
		sum += a[i];
	}
	cout << sum;
	
	return 0;
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
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of the array N: " << endl; 
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	int K, L, sum=0, b=0, ave;
	cout << "K: ";
	cin >> K;
	cout << "L: ";
	cin >> L;
	
	for(int i=K; i<=L; ++i)
	{
		sum += a[i];
		++b;
	}
	ave=sum/b;
	cout << "The average value is: " << ave << endl;
	
	return 0;
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
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of the array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	int K, L, sum=0;
	cout << "K: ";
	cin >> K;
	cout << "L: ";
	cin >> L;
	
	for(int i=0; i<K; ++i)
	{
		sum += a[i];
	}
	
	for(int i=L+1; i<N; ++i)
	{
		sum += a[i];
	}
	
	cout << "The result is: " << sum;
	
	return 0;
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
	int N;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of the array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	int K, L, sum=0, b=0, ave;
	cout << "K: ";
	cin >> K;
	cout << "L: ";
	cin >> L;
	
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
	cout << "The average value is: " << ave;
	
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

N=5
2 4 6 8 10
4 2 2
6 4 2
8 6 2
10 8 2
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
	
	int t=a[1]-a[0];
	
	cout << "The arithmetic progress is: ";
	for(int i=0; i<N-1; ++i)
	{
		if(a[i+1]-a[i]!=t)
		{
			cout << "0";
			return 0;
		}
	}
	
	cout << t;
	return 0;
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
	cout << "N: ";
	cin >> N;
	float a[N];
	cout << "The set of the array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	float t=a[1]/a[0];
	for(int i=0; i<N-1; ++i)
	{
		if((a[i+1]/a[i])!=t)
		{
			t=0; //cout << "0";
			break; //return 0; 
		}
	}
	cout << "The geometric progress is: " << t;
	
	return 0;
}
*/

/*
9 Дан целочисленный массив размера N. Проверить, чередуются ли в
нем четные и нечетные числа. Если чередуются, то вывести 0, если нет,
то вывести порядковый номер первого элемента, нарушающего закономерность.
N=7
2 3 4 5 6 7 8
0 1 0 1 0 1 0

2 3 0 1
3 5 1 1

2 3 0 1  0
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
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of the array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	cout << "The result is: ";
	for(int i=0; i<N-1; ++i)
	{
		if((a[i]%2)==(a[i+1]%2))
		{
			cout << i+1;
			return 0;
		}
	}
	cout << "0";
	
	return 0;
}
*/

/*
10 Дан массив ненулевых целых чисел размера N. Проверить, чередуются ли 
в нем положительные и отрицательные числа. Если чередуются,
то вывести 0, если нет, то вывести порядковый номер первого элемента,
нарушающего закономерность.
N=6
1 -3 4 -5 7 -12 result 0
1 -3 4 5 7 -12 result 3
-1 3 5 result 2
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
	
	cout << "The result is: ";
	for(int i=0; i<N-1; ++i)
	{
		if((a[i]>0 && a[i+1]>0) || (a[i]<0 && a[i+1]<0))
		{
			cout << i+1;
			return 0;
		}
	}
	cout << "0";
	
	return 0;
}
*/


/*
11 Дан массив A размера N. Найти минимальный элемент из его элементов 
с четными номерами: A[0], A[2], A[4], A[6], . . . .
N=5
5 4 1 6 9
5   1   9
    1
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
	
	int min;
	
	for(int i=0; i<N; i += 2)
	{
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	
	cout << "The min element with even order numbers is: " << min;
	
	return 0;
}
*/

/*
12 Дан массив A размера N. Найти максимальный элемент из его элементов 
с нечетными номерами: A[1], A[3], A[5], . . . .
N=5
5 4 1 6 9
  4   6
  4
N=6
5 4 1 6 9 2
          2
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
	
	int min;
	
	for(int i=1; i<N; i += 2)
	{
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	
	cout << "The minimum element with odd order numbers: " << min;
	
	return 0;
}
*/

/*
13 Дан массив размера N. Найти номера тех элементов массива, которые
больше своего правого соседа, и количество таких элементов. Найденные
номера выводить в порядке их возрастания.

N=7
1 3 4 2 6 8 7
    4     8
2 
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, n=0;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of the array N: " << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	cout << "The numbers which is more than its right neighbor: " << endl;
	for(int i=0; i<N-1; ++i)
	{
		if(a[i]>a[i+1])
		{
			cout << a[i] << " ";
			++n;
		}
	}
	if(n==0)
	{
		cout << "error";
	}
	cout << endl;
	cout << "The amount of this numbers: " << n << endl;
	return 0;
}
*/

/*
14 Дан массив размера N. Найти номера тех элементов массива, которые
больше своего левого соседа, и количество таких элементов. Найденные
номера выводить в порядке их убывания.

N=7
5 3 4 7 4 8 8
    4 7   8
8 7 4 
3 
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, n=0;
	cout << "N: ";
	cin >> N;
	int a[N];
	cout << "The set of the array N:" << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	cout << "The numbers which is more than its left neighbor:" << endl;
	
	for(int i=N-2; i>=0; --i)
	{
		if(a[i+1]>a[i])
		{
			cout << a[i+1] << " ";
			++n;	
		}
	}
	if(n==0)
	{
		cout << "error";
	}
	cout << endl;
	cout << "The amount of this numbers: " << n;
	
	return 0;
}
*/

/*
15 Дан массив размера N. Найти номер его первого локального минимума 
(локальный минимум — это элемент, который меньше любого из своих
соседей).
N=7
1 4 5 2 8 3 5
      2   3
2
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a[N], n=0;
	cout << "The set of the array N:" << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	cout << "The number which is less than its two neighboors:" << endl;
	for(int i=0; i<N-2; ++i)
	{
		if(a[i]>a[i+1] && a[i+1]<a[i+2])
		{
			cout << a[i+1];
			++n;
			return 0;
		}
	}
	if(n==0)
	{
		cout << "error";
	}
	
	return 0;
}
*/


/*
16 Дан массив размера N. Найти номер его последнего локального максимума 
(локальный максимум — это элемент, который больше любого из
своих соседей).
N=6
2 5 8 6 7 5
7
N=5
2 5 7 6 4
7
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int a[N], n=0;
	cout << "The set of the array N:" << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	cout << "The number which is more than its neighboors:" << endl;
	for(int i=N-2; i>=0; --i)
	{
		if((a[i]<a[i+1] && a[i+1]>a[i+2]))
		{
			cout << a[i+1];
			++n;
			return 0;
		}
	}
	if(n==0)
	{
		cout << "error";
	}
	
	return 0;
}
*/

//The End !!!

/*
#include <iostream>;
using namespace std;

int main()
{
	int a, ans=1;
	cin >> a;
	for(int i=1; i<=a; ++i)
	{
		ans *= i;
	}
	cout << ans;
}*/
