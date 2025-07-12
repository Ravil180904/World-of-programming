/*
Series1◦. Даны десять вещественных чисел. Найти их сумму
N=10
1+2+3+4+5+6+7+8+9+10=55
*/

/*#include <iostream>;
using namespace std;

int main()
{
	double sum=0;
	float n;
	
	for(int i=0; i<10; ++i)
	{
		cin >> n;
		sum += n;
	}
	cout << "The sum of ten floats digits is: " << sum;
	
	return 0;
}
*/

/*
Series2. Даны десять вещественных чисел. Найти их произведение.
N=1 4.5 4 2 9 8.5 4 7 5 2
*/

/*#include <iostream>;
using namespace std;

int main()
{
	double pro=1;
	float n;
	
	for(int i=0; i<10; ++i)
	{
		cin >> n;
		pro *= n;
	}
	cout << "The product of 10 digits is: " << pro;
	
	return 0;
}
*/

/*
Series3. Даны десять вещественных чисел. Найти их среднее арифметическое.
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float n, ave=0, sum=0;
	
	for(int i=0; i<10; ++i)
	{
		cin >> n;
		sum += n;
	}
	ave=sum/10;
	cout << "The average value is: " << ave;
	
	return 0;
}
*/

/*
Series4. Дано целое число N и набор из N вещественных чисел. Вывести
сумму и произведение чисел из данного набора.
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	float n;
	double sum=0, pro=1;
	
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		sum += n;
		pro *= n;
	}
	cout << "The sum of digits: " << sum << endl;
	cout << "The product of digits: " << pro << endl;
	
	return 0;
}
*/

/*
Series5. Дано целое число N и набор из N положительных вещественных
чисел. Вывести в том же порядке целые части всех чисел из данного
набора (как вещественные числа с нулевой дробной частью), а также
сумму всех целых частей.
N=3
1 2.5 3
1 2  3
*/

/*#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	int N;
	double sum=0;
	cout << "N: ";
	cin >> N;
	float n;
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		sum += trunc(n);
		cout << trunc(n) << " ";
	}
	cout << endl;
	cout << "The sum is: " << sum;
	
	return 0;
}
*/

/*
Series6. Дано целое число N и набор из N положительных вещественных чисел. 
Вывести в том же порядке дробные части всех чисел из данного набора 
(как вещественные числа с нулевой целой частью), а также
произведение всех дробных частей.
N=5
1 4.5 5.5 4 6
4*5=20
*/

/*#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	double pro=1;
	float n;
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		cout << trunc(n) << " ";
		pro *= trunc(n);
	}
	cout << endl;
	cout << "The product is: " << pro;
	
	return 0;
}
*/


/*
Series7. Дано целое число N и набор из N вещественных чисел. Вывести в
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
	cout << "N: ";
	cin >> N;
	
	double sum=0;
	float n;
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		cout << round(n) << " ";
		sum += round(n);
	}
	cout << endl;
	cout << "The sum of round values is: " << sum << endl;
	
	return 0;
}
*/

/*
Series8. Дано целое число N и набор из N целых чисел. Вывести в том же
порядке все четные числа из данного набора и количество K таких чисел.
3 
1 2 3
2 
1 even  numbers
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, n, a=0;
	cout << "N: ";
	cin >> N;
	
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		if(n%2==0)
		{
			cout << n << " ";
			++a;
		}
	}
	cout << endl;
	cout << "The count of even numbers is: " << a;
	
	return 0;
}
*/

/*
Series9. Дано целое число N и набор из N целых чисел. Вывести в том же
порядке номера всех нечетных чисел из данного набора и количество K
таких чисел.
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, n, a=0;
	cout << "N: ";
	cin >> N;
	
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		if(n%2==1)
		{
			cout << n << " ";
			++a;
		}
	}
	cout << endl;
	cout << "The count of odd numbers is: " << a;
	
	return 0;
}
*/


/*
Series10. Дано целое число N и набор из N целых чисел. Если в наборе
имеются положительные числа, то вывести TRUE; в противном случае
вывести FALSE.
N 3
-1 2 -3
False
1 2 3
true
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, n, a=0;
	cout << "N: ";
	cin >> N;
	cout << "Input the numbers:" << endl;
	
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		if(n<0)
		{
			++a;
		}
	}
	if(a!=0)
	{
		cout << "False " << a;
	}
	else
	{
		cout << "True";
	}
	
	return 0;
}
*/


/*
Series11. Даны целые числа K, N и набор из N целых чисел. Если в наборе
имеются числа, меньшие K, то вывести TRUE; в противном случае вывести
FALSE.
FALSE
N=3 K=2
1 2 3 false 1
N=3 K=4
1 2 3 true
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, n, K, a=0;
	cout << "N: ";
	cin >> N;
	cout << "K: ";
	cin >> K;
	
	cout << "Input N elemetns:" << endl; 
	for(int i=0; i<N; ++i)
	{
		cin >> n;
		if(n>K)
		{
			++a;
		}
	}
	if(a!=0)
	{
		cout << "False " << a;
	}
	else
	{
		cout << "True";
	}
	
	return 0;
}
*/

/*
Series12. Дан набор ненулевых целых чисел; признак его завершения — число 0. 
Вывести количество чисел в наборе.
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
	if(a!=0)
	{
		cout << a-1;
	}
	
	return 0;
}
*/

/*
Series13. Дан набор ненулевых целых чисел; признак его завершения — число 0.
Вывести сумму всех положительных четных чисел из данного набора. 
Если требуемые числа в наборе отсутствуют, то вывести 0
1 2 4 -1 0
2+4=6
1 3 -1 0
0
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, sum=0;
	
	while(N!=0)
	{
		cin >> N;
		if((N%2==0)&&(N>0))
		{
			sum += N;
		}
	}
	cout << "The sum of positive even numbers is: " << sum << endl;
	
	return 0;
}
*/


/*
Series14. Дано целое число K и набор ненулевых целых чисел; признак его
завершения — число 0. Вывести количество чисел в наборе, меньших K.
K 3
1 2 3 4 0
2
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int K, N, a=0;
	cout << "K: ";
	cin >> K;
	cout << "The set of nonzero numbers: " << endl;
	
	while(N!=0)
	{
		cin >> N;
		if(N<K)
		{
			++a;
		}
	}
	cout << "The count of number less than K: " << a-1 << endl;
	
	return 0;
}
*/


/*
Series15◦. 
Дано целое число K и набор ненулевых целых чисел; признак его
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
	int K, N, a=0, b=0;
	cout << "K: ";
	cin >> K;
	cout << "The set of nonzero numbers: " << endl;
	
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
	cout << "The number of the first number if the set, that is greater than K: " << b << endl;
	
	return 0;
}
*/


/*
Series16◦. Дано целое число K и набор ненулевых целых чисел; признак
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
	int K, N, a=0, b=0;
	cout << "K: ";
	cin >> K;
	cout << "The set of nonzero numbers: " << endl;
	
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
	cout << "The number of the last number in the set, that is greater than K: " << b << endl;
	
	return 0;
}
*/


/*
Series17◦. Дано вещественное число B, целое число N и набор из N вещественных чисел, 
упорядоченных по возрастанию. Вывести элементы набора вместе с числом B, 
сохраняя упорядоченность выводимых чисел.
B=6 N=5
2 5 5.5 7 8
2 5 5.5 6 7 8

B=5 N=5
2 5 5.5 7 8
2 5 5 5.5 7 8
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float B;
	cout << "B: ";
	cin >> B;
	int N, a=0;
	cout << "N: ";
	cin >> N;
	
	float f1, f2;
	cout << "The set of real numbers:" << endl;
	cin >> f1; // 2
	cout << f1 << " "; //N=3 :2 5 3
	
	for(int i=0; i<N-1; ++i)
	{
		cin >> f2;
		if(f1<=B && B<=f2 && a==0)
		{
			cout << B << " ";
			++a;
		}
		cout << f2 << " ";
		f1=f2;
	}
	if(a==0)
	{
		cout << B << endl;
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
	int N, n;
	cout << "N: ";
	cin >> N;
	
	int f1, f2;
	cout << "The set of integer numbers:" << endl;
	cin >> f1;
	cout << f1 << " ";
	for(int i=0; i<N-1; ++i)
	{
		cin >> f2;
		if(f1!=f2)
		{
			cout << f2 << " ";
		}
		f1=f2;
	}
	
	return 0;
}
*/

/*
Series19◦. Дано целое число N (> 1) и набор из N целых чисел. Вывести те
элементы в наборе, которые меньше своего левого соседа, и количество K
таких элементов.
f1   f2     f2<f1   f2 
N=5
1 3 2 4 5
  2<3
  k=1
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, f1, f2, k=0;
	cout << "N: ";
	cin >> N;
	
	cout << "The set of integer numbers:" << endl;
	cin >> f1;
	for(int i=0; i<N-1; ++i)
	{
		cin >> f2;
		if(f2<f1)
		{
			cout << f2 << " < " << f1 << endl;
			++k;
		}
		f1=f2;
	}
	cout << "The count of this elements is: " << k << endl;
	
	return 0;
}
*/

/*
Series20. Дано целое число N (> 1) и набор из N целых чисел. Вывести те
элементы в наборе, которые меньше своего правого соседа, и количество K
таких элементов.
N=4
3 2 5 4   f1<f2
2<5
1
*/
/*
#include <iostream>;
using namespace std;

int main()
{
	int N, f1, f2, k=0;
	cout << "N: ";
	cin >> N;
	
	cout << "The set of integer numbers: " << endl;
	cin >> f1;
	for(int i=0; i<N-1; ++i)
	{
		cin >> f2;
		if(f1<f2)
		{
			cout << f1 << " < " << f2 << endl;
			++k;
		}
		f1=f2;
	}
	cout << "The count of this elements is: " << k << endl;
	
	return 0;
}
*/


/*
Series21◦. Дано целое число N (> 1) и набор из N вещественных чисел. 
Проверить, образует ли данный набор возрастающую последовательность. Если
образует, то вывести TRUE, если нет — вывести FALSE.
N=3
1<2.5<3
True

3>=2.5>1
False

1 2.5 3 4 5
1<2.5<3<4<5

2.5<3>1
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	bool a=true;
	cout << "N: ";
	cin >> N;
	
	float f1, f2;
	cout << "The set of real numbers:" << endl;
	cin >> f1;
	for(int i=0; i<N-1; ++i)
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
	
	return 0;
}
*/

/*
Series22. Дано целое число N (> 1) и набор из N вещественных чисел. Если
данный набор образует убывающую последовательность, то вывести 0;
в противном случае вывести номер первого числа, нарушающего закономерность.
N=3 
5>=2.5>=1 
0

5>=1<=2.5
2
5>=2.5>=2<=6<=8
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
	cout << "The set of real numbers:" << endl;
	cin >> f1;
	for(int i=0; i<N-1; ++i)
	{
		cin >> f2;
		if(f1<=f2 && a==0)
		{
			a=i+1;
		}
		f1=f2;
	}
	cout << a;
}
*/


/*
Series23. Дано целое число N (> 2) и набор из N вещественных чисел. Набор
называется пилообразным, если каждый его внутренний элемент либо
больше, либо меньше обоих своих соседей (то есть является «зубцом»).
Если данный набор является пилообразным, то вывести 0; в противном
случае вывести номер первого элемента, не являющегося зубцом.
N=7
1 2 1 5 7 8 9
f1 f2 f3
1<=2>=1 Yes
2>=1<=5 Yes  
Yes if f1<f2>f3 or f1>f2<f3
1<=5<=7
No 3

N=5
1 2 1 2 1
0
N=5
1 2 4 5 7 8 
2
N=6
9 8 9 5 4 2 1
4
N=3
1 1 1 
2
N=6
1 3 2 4 1 5
0

N=7
1 5 2 6 5 2 3
5
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=0, b=0;
	cout << "N: ";
	cin >> N;
	
	float f1, f2, f3;
	cout << "The set of real numbers:" << endl;
	cin >> f1;
	cin >> f2;
	for(int i=0; i<N-2; ++i)
	{
		cin >> f3;
		if(((f1>=f2 && f2>=f3) || (f1<=f2 && f2<=f3)) && a==0)
		{
			a=i+2;
			++b;
		}
		f1=f2;
		f2=f3;
	}
	if(b!=0)
	{
		cout << a;
	}
	else
	{
		cout << b;
	}
	
	return 0;
}
*/


/*
Series24. Дано целое число N и набор из N целых чисел, содержащий по
крайней мере два нуля. Вывести сумму чисел из данного набора, расположенных между последними двумя нулями 
(если последние нули идут подряд, то вывести 0).
N=6
1 2 5 0 0 2
0
N=6
1 0 5 6 0 2
14

N=7
2 5 0 8 6 0 7
7+14+7=28
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, sum=0;
	cout << "N: ";
	cin >> N;
	
	int f1, f2;
	cout << "The set of integers:" << endl;
	cin >> f1;
	for(int i=0; i<N-1; ++i)
	{
		cin >> f2;
		if(f1==0 && f2==0)
		{
			sum=0; //cout << "0";
			break; //return 0;
		}
		sum += f1;
		f1=f2;
	}
	cout << sum+f2;
}
*/
