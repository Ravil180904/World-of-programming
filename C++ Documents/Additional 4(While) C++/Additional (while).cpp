/*While1◦
. Даны положительные числа A и B (A > B). На отрезке длины A
размещено максимально возможное количество отрезков длины B (без
наложений). Не используя операции умножения и деления, найти длину
незанятой части отрезка A.

*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	
	while(A>=B)
	{
		A -= B;
	}
	cout << A << endl;
}
*/


/*While2◦. Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Не используя операции умножения и деления, найти количество
отрезков B, размещенных на отрезке A.

*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	
	int c=0;
	while (A >= B)
	{
		A -= B;
		c += 1;
	}
	
	cout << c;
}
*/

/*While3. Даны целые положительные числа N и K. Используя только операции
сложения и вычитания, найти частное от деления нацело N на K, а также
остаток от этого деления.
N=25 k=6

25/6=4
25 % 6 = 25-(25 / 6)*6=25-24=1
1
N=5  k=6
5 % 6 = 5-(5/6)*6=5-0=5

*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	
	while(N>=K)
	{
		N -= K;
		
	}
	cout << N << endl;
}

n=25  k=6
(25/6)=4

*/


/*#include <iostream>;
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	
	int c=0;
	while (N >= K)
	{
		N -= K;
		c += 1;
	}
	
	cout << c;
}
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	
	int c=0;
	while(N >= K)
	{
		N -= K;
		++c;
	}
	
	cout << c << " " << N;
}
*/

/*While4◦
. Дано целое число N (> 0). Если оно является степенью числа 3, то
вывести TRUE, если не является — вывести FALSE.
N=81
81
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a=1;
	while(N>a)
	{
		a *= 3;
	}
	if(a == N)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
	
}
*/


/*While5. Дано целое число N (> 0), являющееся некоторой степенью числа 2:
N = 2K. Найти целое число K — показатель этой степени.
256=2^8 k=8
256= 2*=k
32 = 2*2
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "Number: ";
	cin >> N;
	
	int pow=1,a=0;
	while(N>pow)
	{
		pow *= 2;
		++a;
	}
	cout << a << " " << pow;
	
	return 0;
}
*/


/*While6. Дано целое число N (> 0). Найти двойной факториал N:
N!! = N·(N−2)·(N−4)·. . .
(последний сомножитель равен 2, если N — четное, и 1, если N — нечетное). 
Чтобы избежать целочисленного переполнения, 
вычислять это произведение с помощью вещественной переменной и вывести его как вещественное число.
10!!=10*8*6*4*2=
9!!=9*7*5*3*1=  
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	long double fac=1;
	
	
	while(n>1)
	{
		fac *= n;
		n -= 2;
	}
	cout << fac;
}
*/

/*While7◦. Дано целое число N (> 0). Найти наименьшее целое положительное
число K, квадрат которого превосходит N: K^2 > N. Функцию извлечения
квадратного корня не использовать.
132
N>k
k=1
k**2
256
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int k=1,a;
	while(N>=k)
	{
		k *= 2;
		a=k;
	}
	cout << a;
}
*/


/* While17. Дано целое число N (> 0). Используя операции деления нацело и
взятия остатка от деления, вывести все его цифры, начиная с самой правой
(разряда единиц).
51234 %10 /10
4
3
2
1
5  
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	
	while(N>0)
	{
		cout << N%10;
		N/=10;
		
	}
}
*/


/*While18. Дано целое число N (> 0). Используя операции деления нацело и
взятия остатка от деления, найти количество и сумму его цифр.
51234 = 4+3+2+1+5= 15
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int sum=0, a=0;
	while(N>0)
	{
		sum += N%10;
		N/=10;
		++a;
	}
	cout << sum << " " << a << endl;
}
*/


/*While19. Дано целое число N (> 0). 
Используя операции деления нацело и взятия остатка от деления, 
найти число, полученное при прочтении числа N
справа налево.
51234=43215
  N большое
32654

a=0*10+4=4
5123
a=4*10+3=43
512
a=43*10+2=432
51
a=432*10+51=4320+1=4321
5
a=4321*10+5=43210+5=43215


0+4=4

65

a=5+0=5
6
a=6+0=6


*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int a=0;
	while(N>0)
	{
		a = a*10 + N%10;
		
		N/=10;
		
	}
	cout << a;
}
*/

/*While20. Дано целое число N (> 0). С помощью операций деления нацело
и взятия остатка от деления определить, имеется ли в записи числа N
цифра «2». Если имеется, то вывести TRUE, если нет — вывести FALSE
56
2
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int n=0;
	while(N>0)
	{
		if(N%10==2)
		{
			++n;
		}
		N/=10;
	}
	if(n==1)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	cout << n;
}
*/

/*While21. Дано целое число N (> 0). С помощью операций деления нацело
и взятия остатка от деления определить, имеются ли в записи числа N
нечетные цифры. Если имеются, то вывести TRUE, если нет — вывести
FALSE.
N=159 True
159%10==159%3==0
a=9
if 9%2==1
++n
159/10=15

a=5
5==1 ++n

15/10=1

1==1 ++n

1/10=0 n==3
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int n=0,a=0;
	while(N>0)
	{
		a=N%10;
		if(a%2==1)
		{
			++n;	
		}
		N/=10;
	}
	if(n!=0)
	{
		cout << "True" << endl;
		cout << n;
	}
	else
	{
		cout << "False";
	}
	
	return 0;
}
*/

/*While22◦
. Дано целое число N (> 1). Если оно является простым, то есть не
имеет положительных делителей, кроме 1 и самого себя, то вывести TRUE,
Последовательности 27
иначе вывести FALSE
23
26 %10 = 26 =2,13. 2
11%2!=1
21%2!=0 
if a
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int a=2; 
	/*for(int i=2; i<N; ++i)
	{
		if(N%i==0)
		{
			++a;
		}
	}
	*/
	
/*	while(N%a!=0)
	{
		++a;	
		cout << a << endl;
		
	}
	if(a==N)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
	
}
*/

/*While23◦
. Даны целые положительные числа A и B. Найти их наибольший
общий делитель (НОД), используя алгоритм Евклида:
НОД(A,   B) = 
НОД(B, A mod B), если B 6= 0; НОД(A, 0) = A.
Нод 12,26=2 
A   B
12  7
7   5
5   2
2   1
1   0   

*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	
	int n=1;
	while(B!=0)
	{
		n=A%B;
		A=B;
		B=n;
	}
	cout << A;
	
}
*/

/*While24. Дано целое число N (> 1). Последовательность чисел Фибоначчи FK
определяется следующим образом:
F1 = 1, F2 = 1, FK = FK−2 + FK−1, K = 3, 4, . . . .
1,1,  2 3 5 8 13 21 34 55 89
Проверить, является ли число N числом Фибоначчи. Если является, то
вывести TRUE, если нет — вывести FALSE.

*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int a=1,b=1,c=0;
	while(N>c)
	{
		c=a+b;
		a=b;
		b=c;	
	}
	if(c==N)
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
	cout << c;
}
*/

/*While25. Дано целое число N (> 1). 
Найти первое число Фибоначчи, большее N. 
(определение чисел Фибоначчи дано в задании While24
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int a=1,b=1,c=0;
	while(N>=c)
	{
		c=a+b;
		a=b;
		b=c;	
	}
	
	cout << c;
}
*/

/*While26. Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK
(определение чисел Фибоначчи дано в задании While24). Найти целые
числа FK−1 и FK+1 — предыдущее и последующее числа Фибоначчи.
1,1,  2 3 5 8 13 21 34 55 89
5= 3  8

*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int a=1, b=1, c=0;
	while(N>=c)
	{
		c=a+b;
		a=b;
		b=c;
	}
	
	cout << b-N << " " << b << endl;
}
*/

/*While27. Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK
(определение чисел Фибоначчи дано в задании While24). Найти целое
число K — порядковый номер числа Фибоначчи N.
5=5  8=6 3=4
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int a=1, b=1, c=0;
	int n=1;
	while(N>=c)
	{
		c=a+b;
		a=b;
		b=c;
		++n;
	}
	cout << n;
}
*/

/*While28. Дано вещественное число ε (> 0). Последовательность вещественных
чисел AK определяется следующим образом:
A1 = 2, AK = 2 + 1/AK−1, K = 2, 3, . . . .
Найти первый из номеров K, для которых выполняется условие
|AK − AK−1| < ε, и вывести этот номер, а также числа AK−1 и AK.
A1=2
A2=2+1/2=2.5
A3=2+1/2.5=2+0.4=2.4
A4=2+1/2.4=2+0.416=2.416
A5=2+1/2.416=2+0.4139=2.4139
A6=2+1/2.4139=2+0.414=2.414
2.5-2=0.5
2.4-2.5=-0.1
2.416-2.4=0.016
2.4139-2.416=-0.0021
2.414-2.4139=0.0001

2.5 2
2.4 2.5
2.416 2.4
2.4139 2.416


*/

/*#include <iostream>;
using namespace std;

int main()
{
	float A=2, a=2, b, e;
	
	
	while()
	{
		b=2+1/a;
		cout << b << " " << a <<  b-a << endl;
		a=b;
	}
	/*a=2;
	b=2+1/a;
	cout << b << " " << a << endl; 
	a=b;
	b=2+1/a;
	cout << b << " " << a << endl;
	a=b;
	b=2+1/a;
	cout << b << " " << a << endl;
	a=b;
	b=2+1/a;
	cout << b << " " << a << endl;
	a=b;
	b=2+1/a;
	cout << b << " " << a << endl;
	*/
	/*for(int i=-10; i<=10; ++i)
	{
		b=2+1/a;
		cout << b << " " << a << " " << b-a << endl;
		a=b;
		
	}
	
}
*/


/*While30. Даны положительные числа A, B, C. На прямоугольнике размера A × B размещено максимально возможное количество квадратов со
стороной C (без наложений). Найти количество квадратов, размещенных
на прямоугольнике. Операции умножения и деления не использовать.

A 5 B 4
C 2

ac bc
5  1
20
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	
	int AC=0, BC=0, sum=0;
	while(A>=C)
	{
		A-=C; // 5-2 =3-2=1 AC=2
		++AC;
	}
	while(B>=C)
	{
		B-=C;
		++BC;
		
	}
	while(BC>0)
	{
		
		sum += AC;
		--BC;
		
	}
	cout << sum;
}
*/
