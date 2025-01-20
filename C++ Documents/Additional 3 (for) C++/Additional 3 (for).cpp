/*1 Даны целые числа K и N (N > 0). Вывести N раз число K.*/
/*
K N 
K=0 N=6
0
0
0
0
0
0

*/

/*#include <iostream>
using namespace std;

int main()
{
	int K, N;
	
	cin >> K >> N;
	
	for(int i=0; i<N; i++)
	{
		cout << K;
	}
	
}
*/
/*
i 0  0<6
i 1  1<6
i 2 

i 5  5<6
i 6  6<6
00 .. 0

*/

/*2 Даны два целых числа A и B (A < B). Вывести в порядке возрастания все
целые числа, расположенные между A и B (включая сами числа A и B), а
также количество N этих чисел.
A = 3  B = 6
 3  4 5   6
 
N = 2
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	int n=0;
	
	for(int i=A; i<=B; i++)
	{
		cout << i << " ";
		n++;
	}
	cout << endl << n;
	
}
*/


/*3 Даны два целых числа A и B (A < B). Вывести в порядке убывания все
целые числа, расположенные между A и B (не включая числа A и B), а
также количество N этих чисел.
A= 3   B= 6
   5   4 
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	int N=0;
	
	for(int i=B-1; i>A; i--)
	{
		cout << i << " ";
		N++;
	}
	cout << endl << N;
	
}
*/


/*4 Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1,
2, . . . , 10 кг конфет.
1 кг 10 
2 кг 20
*/

/*#include <iostream>
using namespace std;

int main()
{
	double a;
	cin >> a;
	
	for(int i=1; i<=10; i++)
	{
		cout << i << " " << a * i << endl; 	
	}

}
*/


/*
5 Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1,
0.2, . . . , 1 кг конфет.
0.1  кг   5 
0.2       1
0.3      1.5
0.4      2
0,5     2.5
*/

/*#include <iostream>
using namespace std;

int main()
{
	float a;
	cin >> a;
	
	for(int i=0.1; i<=1; i += 0.1)
	{
		cout << i << " " << i*a << endl;
	}
	
	return 0;
}
*/


/*6 Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1.2,
1.4, . . . , 2 кг конфет.
*/

/*#include <iostream>
using namespace std;

int main()
{
	double a;
	cin >> a;

	for(int i=1.2; i<=2; i+=0.2)
	{
		cout << i << " " << i * a << endl;
	}
	
	return 0;
}
*/


/*7 Даны два целых числа A и B (A < B). Найти сумму всех целых чисел
от A до B включительно.
2   6
2+3+4+5+6=20   
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	int sum=0;
	
	for(int i=A; i<=B; ++i)
	{
		sum +=i;
	}
	cout << "Sum is: " << sum;
	
	return 0;
}
*/



/*8. Даны два целых числа A и B (A < B). Найти произведение всех целых
чисел от A до B включительно.
3   7
3*4*5*6*7=2520
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	
	int n=1;
	
	for(int i=A; i<=B; ++i)
	{
		n *=i;
	}
	
	cout << "Product is: " << n;
	
	return 0;
}
*/


/*9 Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых
чисел от A до B включительно.
1  4
1+4+9+16=30
*/


/*#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	int sum=0;
	
	for(int i=A; i<=B; ++i)
	{
		sum +=i*i;
	}
	
	cout << "Sum of square is: " << sum;
	
	return 0;
}
*/



/*10 Дано целое число N (> 0). Найти сумму
1 + 1/2 + 1/3 + . . . + 1/N
5
1+(1/2)+(1/3)+(1/4)+(1/5)=2.28
(вещественное число).
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	float sum=0;
	
	for(float i=1; i<=N; ++i)
	{
		sum +=1/i;
	}
	
	cout << sum;
	
	return 0;
}
*/


/*11 Дано целое число N (> 0). Найти сумму
N^2 + (N + 1)^2 + (N + 2)^2 + . . . + (2·N)^2
(целое число).
3
3^2+(3+1)^2+(3+2)^2+(3+3)^2+(2*3)^2=9+16+25+36+36=122
*/

/*#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	float n=0;
	
	for(int i=0; i<=N; ++i)
	{
		n +=pow(N+i,2); //+pow(2*N,2)
	}
	
	cout << "Sum of result: " << n;
	
	return 0;
}
*/


/*#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "a: ";
	cin >> a;
	
	for(int i=0; i>=a; ++i)
	{
		a++;
	}
	
	return 0;
}
*/


/*#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<" input n: ";
	cin>>n;
	
	if(n<1)
	{
		cout << "error" << endl;	
	}
	else
	{
		int sum=0;
		for(int i=1; i<=n; i++)
		{
			sum+=i;
		}
		cout << "sum = "<< sum << endl;
	}
	
	return 0;
}
*/


/*14. Дано целое число N (> 0). 
Найти квадрат данного числа, используя для его вычисления следующую формулу: N^2 = 1 + 3 + 5 + … + (2*N — 1). 
После добавления к сумме каждого слагаемого выводить текущее значение суммы 
(в результате будут выведены квадраты всех целых чисел от 1 до N).
N=4   1+3+5+7=16
*/

/*#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Number: ";
	cin >> n;
	
	int math=0;
	
	for(int i=1; i <= (2 * n - 1); i+=2)
	{
		math += i;
	}
	cout <<math;
	return 0;	
}
*/


//15. Дано вещественное число A и целое число N (> 0). 
//Найти A в степени N: A^N = A*A*… *A (числа A перемножаются N раз).


#include <iostream>
using namespace std;

int main()
{
	float A;
	cout << "Put a Number :";
	cin >> A;
	
	int N;
	cout << "Power is: ";
	cin >> N;
	
	float rez = 1;
	
	for(int i=1; i<=N; ++i)
	{
		rez *= A; //A это число которая возводится в степень rez это  
	}	
	cout << "Number is: " << rez << endl;
	
	return 0;
}


//16. Дано вещественное число A и целое число N (> 0). Используя один цикл, вывести все целые степени числа A от 1 до N
// A5^N2 = 5 25

/*#include <iostream>
using namespace std;

int main()
{
	float A;
	cout << "A: ";
	cin >> A;
	
	int N;
	cout << "N: ";
	cin >> N;
	
	float rez = 1;
	
	for(int i=1; i<=N; ++i)
	{
		rez *= A;
		cout << rez;
	}
	cout << endl;
	
	return 0;
}
*/

/*17. Дано вещественное число A и целое число N (> 0). 
Используя один цикл, найти сумму 1 + A + A2 + A3 + … + A^N.
5^3 = 1 + 5 + 25 + 125 = 155
*/

/*#include <iostream>
using namespace std;

int main()
{
	float A;
	cout << "Number A: ";
	cin >> A;
	
	int N;
	cout << "Power N: ";
	cin >> N;
	
	float rez = 1, sum = 1;
	
	for(int i=1; i<=N; ++i)
	{
		rez *= A;
		sum += rez;
	}
		cout << "Number series is: " << sum << endl;
	
	return 0;
}
*/

/*18. Дано вещественное число A и целое число N (> 0). 
Используя один цикл, найти значение выражения 1 — A + A2 — A3 + … + (-1)N*AN. 
Условный оператор не использовать.
3^2*(-1)^2 = -3 + 9 + 1 = 7
3^3 * (-1)^3 = -3 + 9 - 27  = -21
*/

/*#include <iostream>
using namespace std;

int main()
{
	float A;
	cout << "Number A: ";
	cin >> A;
	
	int N;
	cout << "Power N: ";
	cin >> N;
	
	float sum = 0, rez = 1;
	
	for(int i=1; i<=N; ++i)
	{
		rez *= -A;
		sum += rez;
	}
	
	cout << "Number series is: " << sum << endl;
	
	return 0;
}
*/


/*19. Дано целое число N (> 0). Найти произведение N! = 1*2*…*N (N-факториал). 
Чтобы избежать целочисленного переполнения, 
вычислять это произведение с помощью вещественной переменной и вывести его как вещественное число.
5! = 5*4*3*2*1 = 120
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Number N: ";
	cin >> N;
	
	float factorial = 1;
	
	for(int i=1; i<=N; ++i)
	{
		factorial *= i;
	}
	
	cout << "Factorial is: " << factorial << endl;
	
	return 0;
}
*/

/*20. Дано целое число N (> 0). Используя один цикл, найти сумму 1! + 2! + 3! + … + N! 
(выражение N! — N-факториал — обозначает произведение всех целых чисел от 1 до N: N! = 1*2*…*N ). 
Чтобы избежать целочисленного переполнения, проводить вычисления с помощью вещественных переменных и 
вывести результат как вещественное число.

3! = 1 + 2 + 6 = 9
5! = 1 + 2 + 6 + 24 + 120 = 153
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Number N: ";
	cin >> N;
	
	float factorial=1, sum = 0;
	
	for(int i=1; i<=N; ++i)
	{
		factorial *= i;
		sum += factorial;
	}
	
	cout << "Factorial sum is: " << sum << endl;
	
	return 0;
}
*/

/*21. Дано целое число N (> 0). 
Используя один цикл, найти сумму 1 + 1/(1!) + 1/(2!) + 1/(3!) +…+ 1/(N!) 
(выражение N! — N-факториал — обозначает произведение всех целых чисел от 1 до N: N! = 1*2*…*N). 
Полученное число является приближенным значением константы e = exp(1).
4! = 1 + 1/1! + 1/2! + 1/3! + 1/4! = 1+1+1/2+1/6+1/24=2.707
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Number N: ";
	cin >> N;
	
	float factorial=1, sum=1;
	
	for(int i=1; i<=N; ++i)
	{
		factorial *= i;
		sum += 1/factorial;
	}
	
	cout << "Number is: " << sum << endl;
	
	return 0;
}
*/

/*22. Дано вещественное число X и целое число N (> 0). 
Найти значение выражения 1 + X + X2/(2!) +…+ XN/(N!) (N! = 1*2*…*N). 
Полученное число является приближенным значением функции exp в точке X.
X 2 N 2 = 1+2+2^2/2=5
*/

/*#include <iostream>
using namespace std;

int main()
{
	float X;
	cout << "X: ";
	cin >> X;
	
	int N;
	cout << "N: ";
	cin >> N;
	
	float factorial = 1, sum = 1, x=1;
	
	for(int i=1; i<=N; ++i)
	{
		factorial *= i;
		x *= X;
		sum += x/factorial;
	}
	
	cout << "Number is :" << sum << endl;
	
	return 0;
}
*/

/*24. Дано вещественное число X и целое число N (> 0). 
Найти значение выражения X — X3/(3!) + X5/(5!) -…+ (-1)N*X2*N+1/((2*N+1)!) (N! = 1*2*…*N). 
Полученное число является приближенным значением функции sin в точке X.
X=2 N=3: 1+(-1*2^2*1/(2*1)!)+(1*2^2*2/(2*2)!)+(-1*2^2*3/(2*3)!) */

/*#include <iostream>
using namespace std;

int main()
{
	float X;
	cout << "X: ";
	cin >> X;
	
	int N;
	cout << "N: ";
	cin >> N;
	
	float factorial=1, sum=1, x=1;
	int k=0;
	
	for(int i=1; i<=N; ++i)
	{
		++k;
		factorial *= k;
		++k;
		factorial *= k;
		x *= X*-X;
		sum += x/factorial;	
	}
	
	cout << "Number is: " << sum << endl;
	
	return 0;
}
*/


/*25. Дано вещественное число X (|X| < 1) и целое число N (> 0). 
Найти значение выражения X — X2/2 + X3/3 -…+ (-1)N-1*XN/N. 
Полученное число является приближенным значением функции ln в точке 1 + X.
X=4; N=3 : 4-4^2/2+4^3/3= 4-16/2+64/3=4-8+21.33=17.33
*/

/*#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float X;
	cout << "X: ";
	cin >> X;
	
	int N;
	cout << "N: ";
	cin >> N;
	
	float x1 = 1, rez=0;
	
	for(int i=1; i<=N; ++i)
	{
		x1 = pow(-1,(i-1))*pow(X, i);
		rez += x1/i;
	}
	
	cout << "Answer is :" << rez << endl;
	return 0;
}
*/


/*39. Даны целые положительные числа A и B (A < B). 
Вывести все целые числа от A до B включительно; при этом каждое число должно выводиться столько раз, 
каково его значение (например, число 3 выводится 3 раза).
*/


/*#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int A, B;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	
	for(int i=A; i<=B; ++i)
	{
		for(int j=1; j<=i; ++j)
		{
			cout << i << endl;
		}
	}
	
	return 0;
}
*/
