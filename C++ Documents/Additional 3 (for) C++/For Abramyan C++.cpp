/*For1. Даны целые числа K и N (N > 0). Вывести N раз число K.

*/

/*#include <iostream>
using namespace std;

int main()
{
	int K, N;
	cout << "Number K: ";
	cin >> K;
	cout << "N times number K: ";
	cin >> N;
	
	for(int i=0; i<N; ++i)
	{
		cout << K << endl;
	}
	
	return 0;	
}
*/


/*For2. Даны два целых числа A и B (A < B). Вывести в порядке возрастания все
целые числа, расположенные между A и B (включая сами числа A и B), а
также количество N этих чисел.
A 1
		2 3 4 5
B 6

*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A, B;
	cout << "Number A: ";
	cin >> A;
	cout << "Number B: ";
	cin >> B;
	
	cout << "Numbers between A and B in icreasing order: " << endl;
	for(int i=A; i<=B; ++i)
	{
		cout << i << endl;	
	}
	
	return 0;	
}
*/

/*For3. Даны два целых числа A и B (A < B). Вывести в порядке убывания все
целые числа, расположенные между A и B (не включая числа A и B), а
также количество N этих чисел.
A 12
		15 14 13
B 16
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A, B;
	cout << "Number A: ";
	cin >> A;
	cout << "Number B: ";
	cin >> B;
	
	cout << "Number between B and A in decreasing order: " << endl;
	
	for(int i=B-1; i>A; --i)
	{
		cout << i << endl;
	}
	
	return 0;
}
*/

/*For4. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1,
2, . . . , 10 кг конфет.
1 kg =2tg
2kg=2*2=4tg
10kg=2*10=20tg
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float n;
	cout << "Price of sweets: ";
	cin >> n;
	
	cout << "Count of sweets: " << endl;
	float a;
	for(int i=1; i<=10; ++i)
	{
		a=n*i;
		cout << a << endl;
	}
	
	return 0;
}
*/

/*For5◦
. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1,
0.2, . . . , 1 кг конфет.
1kg=1tg
0.1kg=1/0.1=10tg
*/


/*#include <iostream>;
using namespace std;

int main()
{
	float n;
	cout << "Price of sweets: ";
	cin >> n;
	
	cout << "Count of sweets: " << endl;
	
	float a;
	for(float i=0.1; i<1.1; i+=0.1)
	{
		a=n*i;
		cout << a << endl;
	}
	
	return 0;
}
*/

/*For6. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1.2,
1.4, . . . , 2 кг конфет.
1kg=1tg
1.2kg=1*1.2=1.2kg;
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float n;
	cout << "Price of sweets: ";
	cin >> n;
	
	cout << "Count of sweets: " << endl;
	
	float a;
	for(float i=1.2; i<2.1; i+=0.2)
	{
		a=n*i;
		cout << a << endl;
	}
	
	return 0;
}
*/

/*For7. Даны два целых числа A и B (A < B). Найти сумму всех целых чисел
от A до B включительно
A 2
2+3+4+5+6+7+8+9=27+17=44
B 9
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A, B;
	cout << "Number A: ";
	cin >> A;
	cout << "Number B: ";
	cin >> B;
	
	cout << "The sum integers from A to B is: " << endl;
	int sum=0;
	for(int i=A; i<=B; ++i)
	{
		sum+=i;
	}
	cout << sum;
	
	return 0;
}
*/

/*For8. Даны два целых числа A и B (A < B). Найти произведение всех целых
чисел от A до B включительно.
A 2
2*3*4*5=120
B 5
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A, B;
	cout << "integer A: ";
	cin >> A;
	cout << "integer B: ";
	cin >> B;
	
	int pro=1;
	cout << "The product integers from A to B: " << endl;
	
	for(int i=A; i<=B; ++i)
	{
		pro*=i;
	}
	cout << pro;
	
	return 0;
}
*/

/*For9. Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых
чисел от A до B включительно.
A 3
9+16+25=50
B 5
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A, B;
	cout << "integer A: ";
	cin >> A;
	cout << "integer B: ";
	cin >> B;
	
	int sum=0;
	cout << "The sum of squares integers from A to B is: " << endl;
	for(int i=A; i<=B; ++i)
	{
		sum += i*i;	
	} 
	cout << sum;
	
	return 0;
}
*/

/*For10. Дано целое число N (> 0). Найти сумму
1 + 1/2 + 1/3 + . . . + 1/N
(вещественное число).
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "integer N: ";
	cin >> N;
	
	float sum=0;
	cout << "The sum of integers 1+1/N is: " << endl;
	for(float i=1; i<=N; ++i)
	{
		sum += 1/i;
	}
	cout << sum;
	
	return 0;
}
*/

/*For11. Дано целое число N (> 0). Найти сумму
N
2 + (N + 1)2 + (N + 2)2 + . . . + (2·N)
2+(2+1)+(2+2)=2+2+4=8
3+(3+1)^2+(3+2)^2+(3+3)^2=3+4+5+6=9+16+25+36=86
(целое число).
*/

/*#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	int N;
	cout << "integer N: ";
	cin >> N;
	
	int sum=0;
	cout << "The sum of 2+(N+1)^2 is: " << endl;
	for(int i=0; i<=N; ++i)
	{
		sum += pow(N+i, 2);
	}
	cout << sum;
	
	return 0;
}
*/

/*For14. Дано целое число N (> 0). Найти квадрат данного числа, используя для
его вычисления следующую формулу:
N^2 = 1 + 3 + 5 + . . . + (2·N − 1).4^2=16
После добавления к сумме каждого слагаемого выводить текущее значение суммы (в результате будут выведены квадраты всех целых чисел от 1
до N).
N=4   1+3+5+7=16
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "Integer: ";
	cin >> N;
	
	int sum=0;
	for(int i=1; i<=(2*N-1); i += 2)
	{
		sum += i;
	}
	cout << "The sum by (2*N-1) is: " << sum << endl;
	
	return 0;
}
*/

/*For15◦
. Дано вещественное число A и целое число N (> 0). Найти A в степени N:
A^N = A·A· . . . ·A
(числа A перемножаются N раз)
A^N
A=3 N=5
3^5=3*3*3*3*3=243
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float A, N;
	cout << "Integer: ";
	cin >> A;
	cout << "Power N: ";
	cin >> N;
	
	float pro=1;
	for(float i=1; i<=N; ++i)
	{
		pro *= A;
	}
	cout << "The product of A^N is: " << pro << endl;
	
	return 0;
}
*/

/*For16◦
. Дано вещественное число A и целое число N (> 0). Используя один
цикл, вывести все целые степени числа A от 1 до N.
A=2 N=4
2 4 8 16
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float A, N;
	cout << "integer: ";
	cin >> A;
	cout << "Power N: ";
	cin >> N;
	
	float pro=1;
	for(int i=1; i<=N; ++i)
	{
		pro *= A;
		cout << pro << endl;
	}
	
	return 0;
}
*/

/*For17. Дано вещественное число A и целое число N (> 0). Используя один
цикл, найти сумму 1 + A + A2 + A3 + . . . + A^N.
7.5^3=1+7.5+7.5*7.5+7.5*7.5*7.5=8.5+56.25+421.875=486.625
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float A, pow=1, sum=1;
	cout << "A: ";
	cin >> A;
	int N;
	cout << "N: ";
	cin >> N;
	
	for(int i=0; i<N; ++i)
	{
		pow *= A;
		sum += pow;
	}
	cout << "The result number: " << sum << endl;
	
	return 0;
}
*/

/*For18. Дано вещественное число A и целое число N (> 0). Используя один
цикл, найти значение выражения 1 − A + A2 − A3 + . . . + (−1)^N ·A^N.
1-7.5+7.5^2-7.5^3=-6.5+56.25-421.875=-372.125
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float A, pow=1, sum=1;
	cout << "A: ";
	cin >> A;

	int N;
	cout << "N: ";
	cin >> N;
	
	for(int i=0; i<N; ++i)
	{
		pow *= -A;
		sum += pow;
	}
	cout << "The result is: " << sum << endl;
	
	return 0;
}
*/

/*For19◦. Дано целое число N (> 0). Найти произведение 22 М. Э. Абрамян. 
Электронный задачник Programming Taskbook 4.5 N! = 1·2·. . .·N (N–факториал). 
Чтобы избежать целочисленного переполнения, вычислять это произведение с помощью вещественной переменной и вывести
его как вещественное число.
4*3*2*1=24
*/

/*#include <iostream>;
using namespace std;

int main()
{
	double N, factorial=1;
	cout << "N: ";
	cin >> N;
	
	for(int i=1; i<=N; ++i)
	{
		factorial *= i;
	}
	cout << "This factorial is: " << factorial << endl;
	
	return 0;
}
*/

/*For20◦. Дано целое число N (> 0). Используя один цикл, найти сумму 1! + 2! + 3! + . . . + N!
(выражение N! — N–факториал — обозначает произведение всех целых чисел от 1 до N: N! = 1·2·. . .·N). 
Чтобы избежать целочисленного переполнения, проводить вычисления с помощью вещественных переменных
и вывести результат как вещественное число.
5!=120+24+6+2+1=153
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, factorial=1, sum=0;
	cout << "N: ";
	cin >> N;
	
	for(int i=1; i<=N; ++i)
	{
		factorial *= i;
		sum += factorial;
	}
	
	cout << "Sum of factorial is: " << sum << endl;
	
	return 0;
}
*/


/*For21. Дано целое число N (> 0). Используя один цикл, найти сумму
1 + 1/(1!) + 1/(2!) + 1/(3!) + . . . + 1/(N!)
(выражение N! — N–факториал — обозначает произведение всех целых
чисел от 1 до N: N! = 1·2·. . .·N). Полученное число является приближенным значением константы e = exp(1).
1+1/1!+1/2!+1/3!=1+1+1/2+1/6=2+0.5+0.16=2.666
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N; 
	double factorial=1, sum=1;
	cout << "N: ";
	cin >> N;
	
	for(int i=1; i<=N; ++i)
	{
		factorial *= i;
		sum += 1/factorial;
	}
	cout << "The sum factorial is: " << sum << endl;
	
	return 0;
}
*/

/*For22. Дано вещественное число X и целое число N (> 0). Найти значение
выражения 1 + X + X^2/(2!) + . . . + X^N /(N!) (N! = 1·2·. . .·N). 
Полученное число является приближенным значением функции exp в точке X
X=2 N=3
1+2+2^2/2+2^3/3!=3+2+8/6=5+1.333=6.333
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	float X;
	cout << "X: ";
	cin >> X;
	double factorial=1, pow=1, sum=1;
	
	for(int i=1; i<=N; ++i)
	{
		factorial *= i;
		pow *= X;
		sum += pow/factorial;
	}
	cout << "The result sum is: " << sum << endl;
	
	return 0;
}
*/

/*For23. Дано вещественное число X и целое число N (> 0). Найти значение
выражения X − X^3/(3!) + X^5/(5!) − . . . + (−1)N ·X^(2·N+1)/((2·N+1)!)
(N! = 1·2·. . .·N). Полученное число является приближенным значением
функции sin в точке X.
X=2 N=3
2-2^3/6+2^5/120-2^7/5040=2-1.333+0.266-0.0253=0.9077
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	float X;
	cout << "X: ";
	cin >> X;
	double factorial=1, sum=0, pow=1, sig=1;
	
	for(int i=1; i<=2*N+1; i+=2)
	{
		factorial *= i;
		pow *= -X;
		sum += pow*sig/factorial;
	}
	cout << "The result of sum is: " << sum;
	
	return 0;
}
*/

/*For24. Дано вещественное число X и целое число N (> 0). Найти значение
выражения 1 − X^2/(2!) + X^4/(4!) − . . . + (−1)N ·X^2·N /((2·N)!) (N! = 1·2·. . .·N). 
Полученное число является приближенным значением
функции cos в точке X.
X=4, N=2
1-4^2/2+4^4/32=1-8+256/32=-7+8=1
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float X;
	cout << "X: ";
	cin >> X;
	int N;
	cout << "X: ";
	cin >> X;
	
	double factorial=1, pow=1, sum=1;
	
	for(int i=1; i<=2*N; i+=2)
	{
		factorial *= i;
		pow *= -X;
		sum += pow/factorial;
	}
	
	cout << "The result of sum is: " << sum << endl;
	
	return 0;
}
*/

/*For33◦. Дано целое число N (> 1). Последовательность чисел Фибоначчи FK
(целого типа) определяется следующим образом: F1 = 1, F2 = 1, FK = FK−2 + FK−1, K = 3, 4, . . . .24 М. Э. Абрамян. Электронный задачник Programming Taskbook 4.5
Вывести элементы F1, F2, ..., FN .
F1=1 F2=1 F3=F1+F2=1+1=2 F4=F2+F3=1+2=3  F5=F3+F4=2+3=5  3+5=8  8+5=13 13+5=18 18+13=31
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=1, b=1, c=0;
	cout << "N: ";
	cin >> N;
	
	for(int i=3; i<=N; ++i)
	{ 
		c=a+b; //1+1=2   2+1=3
		a=b; // 1=1    1=2    3+2=5
		b=c; // 1=2    2=3
	}
	cout << "The series of Fibonacci is: " << c << endl;
	
	return 0;
}
*/





/*1.

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
	cin >> N;
	for(int j=0; j<N; ++j)
	{
		for(int i=0; i<N; ++i)
		{
			cout << "*";
		}
		cout << endl;
	}
	
}
*/

/* 2.
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
	
	int j, N;
	cin >> N;
	
	for(int j=0; j<N; ++j)
	{
		for(int i=0; i<=j; ++i)
		{
			cout << "*" << " ";
			
		
		}
		cout << endl;
	}
	
	
}
*/

/*
****** 3.
****
***
**
*
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int j, N;
	cin >> N;
	
	for(j=N; j>0; --j)
	{
		for(int i=0; i<j; ++i)
		{
			cout << "*" << " ";	
		}
		cout << endl;
	}
}
*/	
	/*j=4;
	for(int a=j; a>0; --a)
	{
		cout << "*" << " ";		
	}
	cout << endl;
	j=3;
	for(int b=j; b>0; --b)
	{
		cout << "*" << " ";	
	}
	cout << endl;
	j=2;
	for(int c=j; c>0; --c)
	{
		cout << "*" << " ";	
	}
	cout << endl;
	j=1;
	for(int q=j; q>0; --q)
	{
		cout << "*" << " ";	
	}
	cout << endl;
	*/
	
	
/* 4.
0000* 
000**
00***
0****
*****
5-4
5-3
5-2
5-1
5-0
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, j;
	cin >> N;
	
	for(j=N; j>0; --j)
	{
		for(int i=1; i<j; ++i)
		{
			cout << "0";
		}
		
		for(int a=j-(N-(N-1)); a<N; ++a) //// a=5-(5-(5-1))=5-(5-4)=5-1=4 
		{
			cout << "*";
		}
		cout << endl;
	}*/
	
	/*j=4; n=1;
	for(int i=0; i<j; ++i)
	{
		cout << "0";
	}
	for(int i=0; i<n; ++i)
	{
		cout << "*";
	}
	cout << endl;
	j=3, n=2;
	for(int i=0; i<j; ++i)
	{
		cout << "0";
	}
	for(int i=0; i<n; ++i)
	{
		cout << "*";
	}
	cout << endl;
	j=2, n=3;
	for(int i=0; i<j; ++i)
	{
		cout << "0";
	}
	for(int i=0; i<n; ++i)
	{
		cout << "*";
	}
	cout << endl;
	j=1, n=4;
	for(int i=0; i<j; ++i)
	{
		cout << "0";
	}
	for(int i=0; i<n; ++i)
	{
		cout << "*";
	}
	cout << endl;
	n=5;
	for(int i=0; i<n; ++i)
	{
		cout << "*";
	}
	cout << endl;*//*
	
	return 0;
}
*/


/* 5.
*****
0****
00***
000**
0000*
5-5
5-4
5-3
5-2
5-1
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, j, a;
	cin >> N;
	
	for(int j=N; j>0; --j)
	{
		for(int i=j-(N-4); i<N-1; ++i)
		{
			cout << " ";
		}
		for(int a=0; a<j; ++a)
		{
			cout << "*";
		}
		cout << endl;
	}*/
	
	/*j=5, a=0;
	for(int i=j; i>0; --i)
	{
		cout << "*";
	}
	for(int n=0; n<a; ++n)
	{
		cout << "0";
	}
	cout << endl;
	
	j=4, a=1;
	for(int n=0; n<a; ++n)
	{
		cout << "0";
	}
	
	for(int i=j; i>0; --i)
	{
		cout << "*";
	}
	cout << endl;
	j=3, a=2;
	for(int n=0; n<a; ++n)
	{
		cout << "0";
	}
	
	for(int i=j; i>0; --i)
	{
		cout << "*";
	}
	cout << endl;
	
	j=2, a=3;
	for(int n=0; n<a; ++n)
	{
		cout << "0";
	}
	
	for(int i=j; i>0; --i)
	{
		cout << "*";
	}
	cout << endl;
	j=1, a=4;
	for(int n=0; n<a; ++n)
	{
		cout << "0";
	}
	
	for(int i=j; i>0; --i)
	{
		cout << "*";
	}
	cout << endl;
	*/
	
	/*return 0;
}
*/

/* 6.
0000*
000***
00*****
0*******
*********

*
***
*****
*******
*********


N=5
j=N-1  a=N-3-1
j=N-2	a=N-3+1
j=N-3  a=N-3+3
j=N-4	a=N-3+5
j=N-5   a=N-3+7
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, j, a;
	cin >> N;
	
	
	for(int j=0; j<N+N; j += 2)
	{
		for(int i=j-(N-1); i<N-1; i += 2)
		{
			cout << "0";
		}
		for(int a=0-1; a<j; ++a)
		{
			cout << "*";
		}
		cout << endl;
	}*/
	
	/*a=4, j=1;
	for(int i=a; i>0; --i)
	{
		cout << "0";	
	}	
	for(int i=0; i<j; i += 2)
	{
		cout << "*";
	}
	cout << endl;
	a=3, j=3;
	for(int i=a; i>0; --i)
	{
		cout << "0";	
	}	
	for(int i=0; i<j; ++i)
	{
		cout << "*";
	}
	cout << endl;
	a=2, j=5;
	for(int i=a; i>0; --i)
	{
		cout << "0";	
	}	
	for(int i=0; i<j; ++i)
	{
		cout << "*";
	}
	cout << endl;
	a=1, j=7;
	for(int i=a; i>0; --i)
	{
		cout << "0";	
	}	
	for(int i=0; i<j; ++i)
	{
		cout << "*";
	}
	cout << endl;
	a=0, j=9;
	for(int i=a; i>0; --i)
	{
		cout << "0";	
	}	
	for(int i=0; i<j; ++i)
	{
		cout << "*";
	}
	cout << endl;*/
	
	/*return 0;
}
*/


/*
......*......
.....***.....
....*****....
...*******...
..*********..
.***********.
*************
N=7
0-(7-1)=0-6=-6 
2-(7-1)=2-6=-4
4-(7-1)=4-6=-2
000000
00000
*/

#include <iostream>;
using namespace std;

int main()
{
	int N, j;
	cin >> N;
	
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
		for(int n=j-(N-1); n<N-1; n += 2)
		{
			cout << ".";
		}
		cout << endl;
	}
	
	return 0;
}

