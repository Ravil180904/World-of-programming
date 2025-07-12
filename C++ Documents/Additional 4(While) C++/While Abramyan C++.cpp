/*#include <iostream>;
using namespace std;

int main()
{
	cout << "Hello world";
	
	return 0;
}
*/

/*While1◦ . Даны положительные числа A и B (A > B). На отрезке длины A
размещено максимально возможное количество отрезков длины B (без
наложений). Не используя операции умножения и деления, найти длину
незанятой части отрезка A.
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cout << "Line A: ";
	cin >> A;
	cout << "Line B: ";
	cin >> B;
	
	while(A>=B)
	{
		A -= B;
	}
	cout << "Free line: " << A << endl;
	
	return 0;
}
*/

/*While2◦. Даны положительные числа A и B (A > B). 
На отрезке длины A размещено максимально возможное количество отрезков длины B 
(без наложений). Не используя операции умножения и деления, найти количество
отрезков B, размещенных на отрезке A.
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B, ch=0;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	
	while(A>=B)
	{
		A -= B;
		++ch;
	}
	cout << "Lines B by line A: " << ch << endl;
	
	return 0;
}
*/

/*While3. Даны целые положительные числа N и K. Используя только операции
сложения и вычитания, найти частное от деления нацело N на K, а также
остаток от этого деления.
N=38 K=6
38/6=6 38%6=2
38/6=38-6-6-6-6-6-6=2 remainder

25 / 8 = 25-8-8-8=1 25/8=3
25%8=25-(25/8)*8=25-3*8=25-24=1
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N, K, ch=0;
	cout << "Divisible N: ";
	cin >> N;
	cout << "Divider K: ";
	cin >> K;
	
	while(N>=K)
	{
		N -= K;
		++ch;
	}
	cout << "The quotient of N by K is: " << ch << endl;
	cout << "The remainder of N by K is: " << N << endl;
	
	return 0;
}
*/

/*While4◦. Дано целое число N (> 0). Если оно является степенью числа 3, то
вывести TRUE, если не является — вывести FALSE.
81=true
26=false
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N, sh=1;
	cout << "Integer N: ";
	cin >> N;
	
	while(N>sh)
	{
		sh *= 3;
	}
	if(sh == N)
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

/*While5. Дано целое число N (> 0), являющееся некоторой степенью числа 2:
N = 2^K. Найти целое число K — показатель этой степени.
128=2^7 2*2*2*2*2*2*2=128
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N, K=1, ch=0;
	cout << "N: ";
	cin >> N;
	
	while(N>K)
	{
		K *= 2;
		++ch;
	}
	cout << "The power indicator of 2 is: " << ch << endl;
	
	return 0;
}
*/

/*While6. Дано целое число N (> 0). Найти двойной факториал N: N!! = N·(N−2)·(N−4)·. . .
(последний сомножитель равен 2, если N — четное, и 1, если N — нечетное). 
Чтобы избежать целочисленного переполнения, 
вычислять это произведение с помощью вещественной переменной и вывести его как вещественное число.
11!!=11*9*7*5*3*1=10395
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	long double factorial=1;
	
	while(N>0)
	{
		factorial *= N;
		N-=2;
	}
	cout << "The result of factorial is: " << factorial << endl;
	
	return 0;
}
*/

/*While7◦. Дано целое число N (> 0). Найти наименьшее целое положительное число K, 
квадрат которого превосходит N: K^2 > N. Функцию извлечения квадратного корня не использовать.
N=11 
4*4=16 k=16>11
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	int K=1, zh=0;
	while(N>=K)
	{
		K *= 2;
	}
	cout << "The number K of square that greater then N: " << K << endl;
	
	return 0;
}
*/

/*While8. Дано целое число N (> 0). Найти наибольшее целое число K, квадрат которого не превосходит N: 
K^2 ≤ N. Функцию извлечения квадратного
корня не использовать.
N=147
12*12=144

*/


/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	int K=1, ch=1;
	while(N>=K*K)
	{
		++K;
		++ch;
	}
	cout << "The result is: " << ch << endl;
	
	return 0;
}
*/

/*While9. Дано целое число N (> 1). Найти наименьшее целое число K, при
котором выполняется неравенство 3^K > N.
1558
3^7=2187>1558
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cout <<"N: ";
	cin >> N;
	
	int K=1, ch=0;
	while(N>=K)
	{
		K *= 3;
		++ch;
	}
	cout << "The result 3^K > N, K is: " << ch << endl;
	
	return 0;
}
*/

/*While10. Дано целое число N (> 1). Найти наибольшее целое число K, при
котором выполняется неравенство 3^K < N.
50
3*3*3=27<50
3^3=27
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	
	int K=1, ch=0;
	while(N>K)
	{
		K *= 3;
		 ++ch;
	}
	cout << "The result of 3^K<N, K is: " << ch-1 << endl;
	
	return 0;
}
*/

/*While11◦. Дано целое число N (> 1). Вывести наименьшее из целых чисел K,
для которых сумма 1 + 2 + . . . + K будет больше или равна N, и саму эту сумму.
N=10
K=1+2+3+4=10
N=12
K=1+2+3+4=10 10+5=15
0+1
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cout << "N: ";
	cin >> N;
	int K=0, sum=0;
	
	while(N>sum)
	{
		++K;
		sum += K;	
	}
	cout << K << " " << sum << endl;
	
	return 0;
}
*/

/*While12◦. Дано целое число N (> 1). Вывести наибольшее из целых чисел K,
для которых сумма 1 + 2 + . . . + K будет меньше или равна N, и саму эту
сумму.
N=30
1+2+3+4+5+6+7=28
K   sum    N
7  28   30
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, K=0, sum=0;
	
	cout << "N: ";
	cin >> N;
	
	while(N>sum+K)
	{
		++K;
		sum += K;
	}
	cout << K << " " << sum;
	
	return 0; 
}
*/

/*While13. Дано число A (> 1). Вывести наименьшее из целых чисел K, для
которых сумма 1 + 1/2 + . . . + 1/K будет больше A, и саму эту сумму.
1+1/2+1/3+1/4+1/5+1/6+1/7+1/8+1/9+1/10+1/11=3.001 K=11
A=3
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A;
	cout << "A: ";
	cin >> A;
	
	float k=2, sum=1;
	while(A>=sum)
	{
		sum += 1/k;
		++k;
	}
	cout << k << " " << sum << endl;
	
	return 0;
}
*/

/*While14. Дано число A (> 1). Вывести наибольшее из целых чисел K, для
которых сумма 1 + 1/2 + . . . + 1/K будет меньше A, и саму эту сумму.
A=2
1+0.5+0.333=1.8333 
k=3
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A;
	cout << "A: ";
	cin >> A;
	
	float sum=0, k=1;
	while(sum<=A)
	{
		sum += 1/k;
		++k;
	}
	cout << k << " " << sum << endl; // 3  1.8333
	
	return 0;
}
*/

/*While15. Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается на P процентов от имеющейся суммы (P —
вещественное число, 0 < P < 25). 
По данному P определить, через сколько месяцев размер вклада превысит 1100 руб., 
и вывести найденное количество месяцев K (целое число) и итоговый размер вклада S (вещественное число).
P=6.50
k=2   s=1134.22
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float p;
	cout << "P: ";
	cin >> p;
	
	int k=0;
	float s=1000;
	while(s<=1100)
	{
		s += s * p/100;
		++k;
	}
	cout << "K month: " << k << endl; 
	cout << "s contribution: " << s << endl;
	
	return 0;
}
*/

/*While16. Спортсмен-лыжник начал тренировки, пробежав в первый день
10 км. Каждый следующий день он увеличивал длину пробега на P процентов от пробега предыдущего дня (P — вещественное, 0 < P < 50). По
данному P определить, после какого дня суммарный пробег лыжника за
все дни превысит 200 км, и вывести найденное количество дней K (целое)
и суммарный пробег S (вещественное число).
P procent K days S process run
P=25  9   258.023
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float p;
	cout << "P: ";
	cin >> p;
	
	int k=1;
	float s=10, cou=10;
	while(cou<=200)
	{
		s += s*p/100; // 2.5 10+2.5=12.5
		cou += s;    // 12.5+2.5=15   
		++k;
	}
	cout << "Count of month K: " << k << endl;
	cout << "Count of length running of S: " << cou << endl;
	
	return 0;
}
*/

/*While17. Дано целое число N (> 0). Используя операции деления нацело и
взятия остатка от деления, вывести все его цифры, начиная с самой правой
(разряда единиц).
N=5224

4225
5224%10=4
5224/10=522
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=0;
	cout << "N: ";
	cin >> N;
	
	while(N>0)
	{
		cout << N%10;
		N/=10;
	}
}*/

/*
While18. Дано целое число N (> 0). Используя операции деления нацело и
взятия остатка от деления, найти количество и сумму его цифр.
5665
5665%10=5
566%10=6
56%10=6
5%10=5
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=0, sum=0;
	cout << "N: ";
	cin >> N;
	
	while(N>0)
	{
		sum += N%10;
		N/=10;
		++a;
	}
	cout << "The sum of the digits is: " << sum << endl;
	cout << "The count of the digits is: " << a << endl;
	
	return 0;
}
*/

/*
While19. Дано целое число N (> 0). Используя операции деления нацело и взятия остатка от деления, 
найти число, полученное при прочтении числа N справа налево.
N=15478
87451
8+8*10+7=87451
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=0;
	cout << "N: ";
	cin >> N;
	
	while(N>0)
	{
		a = a*10 + N%10;
		N/=10;
		//cout << a << endl;
	}
	cout << "The number that received digits from right to left: " << a << endl;
	
	return 0;
}
*/

/*
While20. Дано целое число N (> 0). С помощью операций деления нацело
и взятия остатка от деления определить, имеется ли в записи числа N
цифра «2». Если имеется, то вывести TRUE, если нет — вывести FALSE.
15277
1 True
15799
0 False
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=0, n=0;
	cout << "N: ";
	cin >> N;
	
	while(N>0)
	{
		a=N%10;
		if(a==2)
		{
			++n;
		}
		N/=10;
		//cout << a << endl;
	}
	if(n!=0)
	{
		cout << "True " << n;
	}
	else
	{
		cout << "False ";
	}
	
	return 0;
}
*/

/*
While21. Дано целое число N (> 0). С помощью операций деления нацело
и взятия остатка от деления определить, имеются ли в записи числа N
нечетные цифры. Если имеются, то вывести TRUE, если нет — вывести
FALSE.
25477
true
24466
false
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=0, n=0;
	cout << "N: ";
	cin >> N;
	
	while(N>0)
	{
		a=N%10;
		if(a%2==1)
		{
			++n;
		}
		N/=10;
		//cout << a << endl;
	}
	if(n!=0)
	{
		cout << "True " << n;
	}
	else
	{
		cout << "False";
	}
	
	return 0;
}
*/

/*
While22◦. Дано целое число N (> 1). Если оно является простым, то есть не
имеет положительных делителей, кроме 1 и самого себя, то вывести TRUE, иначе вывести FALSE.
11=true
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=2;
	cout << "N: ";
	cin >> N;
	
	while(N%a!=0)
	{
		++a;
	}
	if(a==N)
	{
		cout << "True";
	}
	else
	{
		cout << "False " << a << endl;
	}
	
	return 0;
}
*/

/*
While23◦. Даны целые положительные числа A и B. Найти их наибольший
общий делитель (НОД), используя алгоритм Евклида:
НОД(A, B) = НОД(B, A mod B), если B 6= 0; НОД(A, 0) = A.
12 20 = 4
A   B   A   B
12  7   12  4
7   5   4   0
5   2
2   1
1   0   
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A, B, n=1;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	
	while(B>0)
	{
		n=A%B;
		A=B;
		B=n;
	}
	cout << "Result is: " << A;
	
	return 0;
}
*/

/*
While24. Дано целое число N (> 1). Последовательность чисел Фибоначчи FK
определяется следующим образом:
F1 = 1, F2 = 1, FK = FK−2 + FK−1, K = 3, 4, . . . .
Проверить, является ли число N числом Фибоначчи. Если является, то
вывести TRUE, если нет — вывести FALSE.
N=20
c=a+b
1+1=2
2+1=3
3+2=5
5+3=8
8+5=13
13+8=21
21+13=34
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=1, b=1, c=0;
	cout << "N: ";
	cin >> N;
	
	while(N>c)
	{
		c=a+b;
		b=a;
		a=c;
	}
	if(c==N)
	{
		cout << "True " << c;
	}
	else
	{
		cout << "False " << c;
	}
	
	return 0;
}
*/

/*
While25. Дано целое число N (> 1). Найти первое число Фибоначчи, большее N. 
(определение чисел Фибоначчи дано в задании While24)
N=21
1 1 2 3 5 8 13 21 34
N=20
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=1, b=1, c=0;
	cout << "N: ";
	cin >> N;
	
	while(c<=N)
	{
		c=a+b;
		b=a;
		a=c;
	}
	cout << "Result is: " << c << endl;
	
	return 0;
}
*/


/*
While26. Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK
(определение чисел Фибоначчи дано в задании While24). Найти целые
числа FK−1 и FK+1 — предыдущее и последующее числа Фибоначчи.
N=25
c=a+b
1+1=2
2+1=3
3+2=5
5+3=8
8+5=13
13+8=21
21+13=34
Answer 21 34
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=1, b=1, c=0;
	cout << "N: ";
	cin >> N;
	
	while(N>=c)
	{
		c=a+b;
		b=a;
		a=c;
	}
	cout << "Previous number: " << b << endl; 
	cout << "Following number: " << c;
	
	return 0;	
}
*/

/*
While27. Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK
(определение чисел Фибоначчи дано в задании While24). Найти целое
число K — порядковый номер числа Фибоначчи N.
N=25
c=a+b
1+1=2
2+1=3
3+2=5
5+3=8
8+5=13
13+8=21
21+13=34
Answer 6
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int N, a=1, b=1, c=0, k=2;
	cout << "N: ";
	cin >> N;
	
	while(N>c)
	{
		c=a+b;
		b=a;
		a=c;
		++k;
	}
	cout << "Ordered number Fibonacci is: " << k << endl;
	cout << c;
	
	return 0;
}
*/

/*
While30. Даны положительные числа A, B, C. На прямоугольнике размера A × B размещено максимально возможное количество квадратов со
стороной C (без наложений). Найти количество квадратов, размещенных
на прямоугольнике. Операции умножения и деления не использовать.
A=7 B=5 C=2
7-2=5  5-2=3 3-2=1  3
5-2=3  3-2=1 2
3+2=5  

*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A, B, C, AC=0, BC=0, sum=0;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	cout << "C: ";
	cin >> C;
	
	while(A>C)
	{
		A -= C;
		++AC;
	}
	while(B>C)
	{
		B -= C;
		++BC;
	}
	while(BC>0)
	{
		sum += AC;
		--BC;
	}
	cout << "The amount of square is octal is: " << sum << endl;
	
	return 0;
}
*/
