/*Series1◦
. Даны десять вещественных чисел. Найти их суммy
1 2 3 4 5 6 7 8 9 10=55

*/

/*#include <iostream>;
using namespace std;

int main()
{
	float n;
	
	double sum=0;
	for (int i=0; i<10; ++i)
	{
		cin >> n;
		sum += n;
	}
	cout << sum << endl;
}
*/

/*Series2. Даны десять вещественных чисел. Найти их произведение
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float n;
	
	double sum=1;
	for (int i=0; i<10; ++i)
	{
		cin >> n;
		sum *= n;
	}
	cout << sum << endl;
}
*/

/*Series3. Даны десять вещественных чисел. Найти их среднее арифметическо
1+2+2+1+1+1+2+2+1+1=14/10=1.4
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float n;
	
	double sum=0, ave=0;
	for(int i=0; i<10; ++i)
	{
		cin >> n;
		sum += n;
	}
	ave=sum/10;
	cout << ave;
}
*/

/*Series4. Дано целое число N и набор из N вещественных чисел. Вывести
сумму и произведение чисел из данного набора
N 5

N 1 +1 +2 +1 +3=8    1*1*2*1*3=6
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float n, N;
	cin >> n;
	
	double sum=0, mul=1;
	for(int i=0; i<n; ++i)
	{
		cin >> N;
		sum += N;
		mul *= N;
	}
	cout << sum << endl;
	cout << mul;
}
*/

/*Series5. Дано целое число N и набор из N положительных вещественных
чисел. Вывести в том же порядке целые части всех чисел из данного
набора (как вещественные числа с нулевой дробной частью), а также
сумму всех целых частей
N 3
N 1.8 2.6 1.3 
N 1   2   1
1+2+1=4
*/

/*#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	float n;
	
	double sum=0;
	for(int i=0; i<N; ++i)
	{
		cin >> n; 
		sum += trunc(n);
		cout << trunc(n) << endl;
	}
	cout << sum;
}
*/


/*Series6. Дано целое число N и набор из N положительных вещественных
чисел. Вывести в том же порядке дробные части всех чисел из данного набора (как вещественные числа с нулевой целой частью), а также
произведение всех дробных частей.
N 3
N 1.8 2.6 2.3
N 1 2 1
1*2*2=4
*/

/*#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	float n;
	
	double pro=1;
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		pro *= trunc(n);
		cout << trunc(n) << endl;
	}
	cout << "The product is: " << pro << endl;
	
	return 0;
}
*/


/*Series7. Дано целое число N и набор из N вещественных чисел. Вывести в
том же порядке округленные значения всех чисел из данного набора (как
целые числа), а также сумму всех округленных значений.
3 
1.5 2.6 3.7
1   3    4 
1+3+4=8
*/

/*#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	float n, sum=0;;
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		sum += round(n);
		cout << round(n) << endl;
	}
	cout << sum;
}
*/

/*Series8. Дано целое число N и набор из N целых чисел. Вывести в том же
порядке все четные числа из данного набора и количество K таких чисел.
3 
1 2 3
2 
1 even  numbers
*/

/*#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int n, a=0;
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		if(n%2==0)
		{
			cout << n << endl;
			++a;
		}
	}
	cout << a;
}
*/

/*Series9. Дано целое число N и набор из N целых чисел. Вывести в том же
порядке номера всех нечетных чисел из данного набора и количество K
таких чисел.
N 3
1 2 3
1 3
2
*/

/*#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int n, a=0;
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		if(n%2==1)
		{
			cout << n << endl;
			++a;
		}
	}
	cout << a;
}
*/


/*Series10. Дано целое число N и набор из N целых чисел. Если в наборе
имеются положительные числа, то вывести TRUE; в противном случае
вывести FALSE.
N 3
-1 2 -3
False
1 2 3
true
*/

/*#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	int N, n, c=0;
	cin >> N;
	
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		if(n>=0)
		{
			++c;
		}
	}
	if(c!=0)
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
	
}
*/

/*Series11. Даны целые числа K, N и набор из N целых чисел. Если в наборе
имеются числа, меньшие K, то вывести TRUE; в противном случае вывести
FALSE
K 1 2 3
N 3
4 5 6
False

*/

/*#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	int N, n, K, a=0;
	cin >> N;
	cout << "K: ";
	cin >> K;
	
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		if(n<K)
		{
			++a;
		}
	}
	if(a!=0)
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
}
*/

/*Series12. Дан набор ненулевых целых чисел; признак его завершения — число 0. Вывести количество чисел в наборе.
N 1,2,0,5
2
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=0;
	
	while(N!=0)
	{
		cin >> N;
		++a;
	}
	cout << a-1;
}
*/

/*Series13. Дан набор ненулевых целых чисел; признак его завершения — число 0. 
Вывести сумму всех положительных четных чисел из данного набора. 
Если требуемые числа в наборе отсутствуют, то вывести 0.
1 2 4 -1 0
2+4=6
1 3 -1 0
0
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N,sum=0;
	
	while(N!=0)
	{
		cin >> N;
		if(N%2==0)
		{
			sum += N;
		}
	}
	cout << sum;
}
*/

/*Series14. Дано целое число K и набор ненулевых целых чисел; признак его
завершения — число 0. Вывести количество чисел в наборе, меньших K.
K 3
1 2 3 4 0
2
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int K, N=1, a=0;
	cout << "K: ";
	cin >> K;
	
	while(1)
	{
		cin >> N;
		
		if(N==0)
		{
			break;
		}		
		
		if(N<K)
		{
			++a;
		}
	}
	cout << a;
}
*/

/*Series15◦ .Дано целое число K и набор ненулевых целых чисел; признак его
завершения — число 0. Вывести номер первого числа в наборе, большего K. 
Если таких чисел нет, то вывести 0.
k=6
1 2 7 8 0
7
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int K, N=1, a=0, b=0;
	cout << "K: ";
	cin >> K;
	
	while(1)
	{
		cin >> N;
		if(N==0)
		{
			break;
		}
		++a;
		if(N>K && b==0)
		{
			b=a;
		}
	}
	cout << b;
}
*/

/*Series16◦
. Дано целое число K и набор ненулевых целых чисел; признак
его завершения — число 0. Вывести номер последнего числа в наборе,
большего K. Если таких чисел нет, то вывести 0.
K 6
1 2 7 8 9 0
5
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int K, N=1, a=0, b=0;
	cout << "K: ";
	cin >> K;
	
	while(1)
	{
		cin >> N;
		if(N==0)
		{
			break;
		}
		++a;
		if(N>K)
		{
			b=a;
		}
	} 
	cout << b;
}
*/

/*Series17◦. Дано вещественное число B, целое число N и набор из N вещественных чисел, 
упорядоченных по возрастанию. 
Вывести элементы набора вместе с числом B, сохраняя упорядоченность выводимых чисел.
B=7.5 N=4 
n=2,3,8,9
2
:2
3 
:3
8
:7.5
:8
9
:9
f1 = 3
7.5
f2=8 
3<7.5<8

N=5
B=10
1 2 3 4 5
10
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float B, n;
	cout << "B: ";
	cin >> B;
	
	int N;
	cout << "N: ";
	cin >> N;
	int f1, f2;
	
	cout << "n ";
	cin >> f1;
	cout << ": " << f1 << endl;
	int a=0;
	
	for(int i=0; i<N-1; ++i)
	{
		cout << "n ";
		cin >> f2;
		if(f1 < B && B<f2 && a==0) 
		{
			cout << B << endl;	
			++a;
		}
		
		cout << ": " << f2 << endl;
		f1 = f2;
		
	}
	if(a==0)
	{
		cout << B;
	}
	
	return 0;
}
*/

/*Series18. Дано целое число N и набор из N целых чисел, упорядоченный
по возрастанию. Данный набор может содержать одинаковые элементы.
Вывести в том же порядке все различные элементы данного набора
N=4
1 2 2 3
1 2 3
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	int f1, f2;
	cin >> f1;
	cout << f1 << endl;
	int a=0;
	
	for(int i=0; i<N-1; ++i)
	{
		cin >> f2;
		
		if(f1!=f2)
		{
			cout << f2 << endl;
		}
		f1=f2;
	}
}
*/

/*Series19◦. Дано целое число N (> 1) и набор из N целых чисел. Вывести те
элементы в наборе, которые меньше своего левого соседа, и количество K
таких элементов.   f1   f2     f1>f2   f2 
N=5
1 3 2 4 5
  2<3
  k=1
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	int f1,f2, a=0;
	cin >> f1;
	
	for(int i=0; i<N-1; ++i)
	{
		cin >> f2;
		if(f1>f2)
		{
			cout << f2 << endl;
			++a;
		}
		f1=f2;
	}
	if(a!=0)
	{
		cout << a << endl;
	}
}
*/

/*Series20. Дано целое число N (> 1) и набор из N целых чисел. Вывести те
элементы в наборе, которые меньше своего правого соседа, и количество K
таких элементов.
N=4
3 2 5 4   f1<f2
2
1
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	int f1,f2,a=0;
	cin >> f1;
	
	for(int i=0; i<N-1; ++i)
	{
		cin >> f2;
		if(f1<f2)
		{
			cout << f1 << endl;
			++a;
		}
		f1=f2;
	}
	if(a!=0)
	{
		cout << a << endl;
	}
}
*/


/*Series21◦
. Дано целое число N (> 1) и набор из N вещественных чисел. Проверить, образует ли данный набор возрастающую последовательность. Если
образует, то вывести TRUE, если нет — вывести FALSE.
N=3
1<2.5<3
True

3>=2.5>1
False

2.5<3>1
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	bool a = true;
	float f1, f2;
	cin >> f1;
	for(int i=1; i<N; ++i)
	{
		cin >> f2;
		if(f1>=f2)
		{
			a=false;
		}
		f1=f2;
	}
	if(a==true)
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
}
*/

/*Series22. Дано целое число N (> 1) и набор из N вещественных чисел. Если
данный набор образует убывающую последовательность, то вывести 0;
в противном случае вывести номер первого числа, нарушающего закономерность
N=3 
5>=2.5>=1 
0

5<= 1 >=2.5
3
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=0;
	cout << "N: ";
	cin >> N;
	
	float f1, f2;
	cin >> f1;
	for(int i=2; i<=N; ++i)
	{
		cin >> f2;
		if(f1<=f2 && a==0)
		{
			a = i;	
		}
		f1=f2;
	}

	cout << a;

}
*/

/*Series23. Дано целое число N (> 2) и набор из N вещественных чисел. Набор
называется пилообразным, если каждый его внутренний элемент либо
больше, либо меньше обоих своих соседей (то есть является «зубцом»).
Если данный набор является пилообразным, то вывести 0; в противном
случае вывести номер первого элемента, не являющегося зубцом.
N=10
5>1<2.5<7>6<8>4<5>2<10

0

5>1<2.5<7=7>6=6<8>4<5

7 6
5 

1<=2.5<=3=3<=5
2.5 

1<2<3 3>2>1  3=3=3  4>3=3    2<5<7   7>5<3  7<5<9  9>8>7 4<5<6  
3>2>1  

7>2<6

N=5
1 2 1 2 1
N=5
1 2 4 5 7
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=0;
	cout << "N: ";
	cin >> N;
	
	float f1, f2, f3;
	cin >> f1;
	cin >> f2;
	for(int i=3; i<=N; ++i)
	{
		cin >> f3;
		if((f1<=f2 && f2<=f3 || f1>=f2 && f2>=f3) && a==0)
		{
			a=i-1;	
		}
		f1=f2;
		f2=f3;
	}
	cout << a;
}
*/

/*Series24. Дано целое число N и набор из N целых чисел, содержащий по
крайней мере два нуля. Вывести сумму чисел из данного набора, расположенных между последними двумя нулями (если последние нули идут
подряд, то вывести 0).
N=5

1 2 0 0 5
0
*/


/*#include <iostream>;
using namespace std;

int main()
{
	
}
*/


/*Series26. Даны целые числа K, N и набор из N вещественных чисел: A1, A2, . . ., AN . 
Вывести K-e степени чисел из данного набора: (A1)^K, (A2)^K, . . ., (AN )^K.
K=2 N=3
N= 1 2 3
9
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int K;
	cout << "K: ";
	cin >> K;
	
	int N;
	cout << "N: ";
	cin >> N;
	float n=1;
	
	for(int i=0; i<K; ++i)
	{
		n *= N;
	}
	cout << n << endl;
	
	return 0;
	
}
*/


/*

#include <iostream>;
using namespace std;

int main()
{
	int N=5, j;
	
	
}
*/

/*
Series27. Дано целое число N и набор из N вещественных чисел: A1, A2, . . .,
AN . Вывести следующие числа: A1, (A2)^2 , . . ., (AN−1)^N−1, (AN )^N .
N=3
1 2.5 3
1, 2.5^2, 3^3, 
1, 6.25, 9
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	float n;
	
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		n *= n;
		cout << n << " "; 
	}
}*/



/*Series29. Даны целые числа K, N, а также K наборов целых чисел по N элементов в каждом наборе. 
Вывести общую сумму всех элементов, входящих в данные наборы.

*/


/* 1. Однажды в просторах рунета появился следующий ребус:

     157892 = 3
     203516 = 2
     409578 = 4
     236271 = ?
Никто так и не смог его разгадать. 
Позже оказалось, что число в правом столбце равно сумме "кругляшей", которые есть в цифрах числа, 
расположенного слева. Ваша задача написать программу, которая определяет, сколько кругляшей в числе.

*/