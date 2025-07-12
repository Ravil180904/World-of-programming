   /* Integer (1 уровень)

1. Дано расстояние L в сантиметрах. 
Используя операцию деления нацело, 
найти количество полных метров в нем 
(1 метр = 100 см). 
*/

/*#include <iostream>
using namespace std;

int main()
{
	int L;
	cin >> L;
	
	int lb;
	
	lb = L/100;
	cout << lb;
	
	return 0;
	
	
}
*/

/*2 Дана масса M в килограммах. 
Используя операцию деления нацело, 
найти количество полных тонн в 
ней (1 тонна = 1000 кг). 
*/


/*#include <iostream>
using namespace std;

int main()
{
	int M;
	cin >> M;
	
	int Tonn;
	Tonn = M/1000;
	
	cout << Tonn;
	
	return 0;
}
*/


/*3 Дан размер файла в байтах. 
Используя операцию деления нацело, 
найти количество полных килобайтов, 
которые занимает данный файл 
(1 килобайт = 1024 байта). 
*/

/*#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	
	int abc;
	abc = a/1024;
	
	cout << abc;
	
	return 0;
}
*/


/*4 Даны целые положительные числа A и B (A > B). 
На отрезке длины A размещено максимально возможное 
количество отрезков длины B (без наложений). 
Используя операцию деления нацело, найти 
количество отрезков B, размещенных на отрезке A. 
*/

/*#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	
	int ab;
	// Находим отрезки В на отрезке А
	ab=a/b;
	
	cout << ab;
	
	return 0;
}
*/


/*5 Даны целые положительные числа A и B(A>B).
На отрезке длины A размещено максимально возможное 
количество отрезков длины B (без наложений). 
Используя операцию взятия остатка от деления нацело, 
найти длину незанятой части отрезка A.
*/


/*#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	
	int ab;
	// находим отрезок остаток деления незанятую часть А
	ab=b % a ;
	
	cout << ab;
	
	return 0;
}
*/


/*6 Дано двузначное число. Вывести вначале 
его левую цифру (десятки), а затем — его правую цифру 
(единицы). Для нахождения десятков использовать 
операцию деления нацело, для нахождения единиц — 
операцию взятия остатка от деления.

левую цифру (10,20, ..., 99)
правая цифра (1,2,3,4,5,6,7,8,9)  
4 + 5 */ 

/*#include <iostream>
using namespace std;

int main()
{
	int ab;
	cin >> ab;
	
	int a;
	int b;
	
	a = ab / 10;
	b = ab%10;
	
	
	cout << a <<endl;
	cout << b << endl;
	
	return 0;
}
*/


/*7 Дано двузначное число. 
Найти сумму и произведение его цифр.
45
4 + 5
4 * 5
*/ 


/*#include <iostream>
using namespace std;

int main()
{
	int ab;
	cin >> ab;
	
	int a = ab/10;
	int b = ab%10;
	
	int c = a + b;
	int d = a * b;
	
	cout << c <<endl;
	cout << d <<endl;
	
	return 0;
}
*/


/*8 Дано двузначное число. 
Вывести число, полученное при перестановке 
цифр исходного числа.
85  86
58  68
*/


/*#include <iostream>
using namespace std;

int main()
{
	int ab;
	cin >> ab;
	
	int a = ab/10;
	int b = ab%10;
	
	int ba = b * 10+a;
  // 86  68  6 * 10 + 8 = 68
	cout << ba;
	
	return 0;
}
*/


/*9 Дано трехзначное число. 
Используя одну операцию деления нацело, 
вывести первую цифру данного числа (сотни).
158
1 
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abc;
	cin >> abc;
	
	int a = abc/100;
	int b = (abc / 10)%10;
	
	int c = abc / 100;
	
	cout << c ;
	
	return 0;
}
*/


/*10 Дано трехзначное число. 
Вывести вначале его последнюю цифру (единицы), 
а затем — его среднюю цифру (десятки). 
597 
7
9
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abc;
	cin >> abc;
	
	int a = abc%10;
	int b = (abc / 10)%10;
	
	cout << a << " " << b;
	
	return 0;
}
*/


/*11 Дано трехзначное число. 
Найти сумму и произведение его цифр.
921
9 + 2 + 1 = 12
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abc;
	cin >> abc;
	
	int a = abc/100;
	int b = (abc / 10)%10;
	int c = abc%10;
	
	cout << a + b + c;
	
	return 0;
}
*/

 /*12 Дано трехзначное число. 
Вывести число, полученное при прочтении 
исходного числа справа налево. 
568
865
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abc;
	cin >> abc;
	
	int a = abc/100;
	int b = (abc / 10)%10;
	int c = abc%10;
	
	int cba = c * 100 + b * 10 + a;
	
	cout << cba;
	
	return 0;
}
*/


/*13 Дано трехзначное число. 
В нем зачеркнули первую слева цифру 
и приписали ее справа. Вывести полученное число.
219 abc
129 bca
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abc;
	cin >> abc;
	
	int a = abc/100;
	int b = (abc / 10)%10;
	int c = abc%10;
	
	int bac = b * 100 + a * 10 + c;
	
	cout << bac;
	
	return 0;
}
*/


/*14 Дано трехзначное число. 
В нем зачеркнули первую справа цифру 
и приписали ее слева. Вывести полученное число.
427 abc
742 cab
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abc;
	cin >> abc;
	
	int a = abc/100;
	int b = (abc / 10)%10;
	int c = abc%10;
	
	int cab = c * 100 + a * 10 + b;
	
	cout << cab;
	
	return 0;
}
*/

/*15 Дано трехзначное число. 
Вывести число, полученное при перестановке цифр 
сотен и десятков исходного числа 
(например, 123 перейдет в 213). abc bac 
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abc;
	cin >> abc;
	
	int a = abc/100;
	int b = (abc / 10)%10;
	int c = abc%10;
	
	int bac = b * 100 + a * 10 + c;
	
	cout << bac;
	
	return 0;
}
*/


/*16 Дано трехзначное число. 
Вывести число, полученное при перестановке 
цифр десятков и единиц исходного числа 
(например, 123 перейдет в 132). abc acb
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abc;
	cin >> abc;
	
	int a = abc/100;
	int b = (abc / 10)%10;
	int c = abc%10;
	
	int acb = a * 100 + c * 10 + b;
	
	cout << acb;
	
	return 0;
}
*/


/*17 Дано целое число, большее 999. 
Используя одну операцию деления нацело и 
одну операцию взятия остатка от деления, 
найти цифру, соответствующую разряду 
сотен в записи этого числа.  1538 5
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abcd;
	cin >> abcd;
	
	int b = (abcd / 100)%10;
	cout << b;
	
	return 0;
	
}
*/


/*18 Дано целое число, большее 999. 
Используя одну операцию деления нацело и 
одну операцию взятия остатка от деления, 
найти цифру, соответствующую разряду 
тысяч в записи этого числа. 2578 8469
*/	

/*#include <iostream>
using namespace std;

int main()
{
	int abcd;
	cin >> abcd;
	
	int a = (abcd/1000)%100;
	
	cout << a;
	
	return 0;
}
*/


/*19 С начала суток прошло N секунд 
(N — целое). Найти количество 
полных минут, прошедших с начала суток. 3600 sec   = 60 min
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	cout << N/60 << " " << endl;
	
	return 0;
	
}
*/


/*20 С начала суток прошло N секунд 
(N — целое). Найти количество 
полных часов, прошедших с начала суток.  10800 / 3600
*/


/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	cout << N/3600 << " " << endl;
	
	return 0;
	
}
*/
 
 
 /*21 С начала суток прошло N секунд 
(N — целое). Найти количество 
секунд, прошедших с начала последней минуты. 200 sec   % 60 = 20
*/
 
/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	cout << N%60 << endl;
	
	return 0;
}
*/
 
 /*22 С начала суток прошло N секунд 
(N — целое). Найти количество секунд, 
прошедших с начала последнего часа. 7300 % 3600 
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	cout << N%3600 << endl;
	
	return 0;
}
*/


/*23 С начала суток прошло N секунд 
(N — целое). Найти количество полных 
минут, прошедших с начала последнего часа. 10960 / 3600 = 3
10960 - 3600 * 3 = 160
160 / 60 = 2
*/
 
/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int a;
	a = N / 3600;
	
	int b;
	b = N - 3600 * a;
	
	int c;
	c = b / 60;
	
	cout << c << endl;
	
	return 0;
}
*/

/*24 Дни недели пронумерованы следующим образом: 
0 — воскресенье, 1 — понедельник, 2 — вторник,
 ..., 6 — суббота. Дано целое число K, лежащее 
в диапазоне 1–365. Определить номер дня недели 
для K-го дня года, если известно, что в этом 
году 1 января было понедельником.
Пн   Вт    Ср    Чт    Пт    Сб    Вс
1    2     3     4     5     6     7
8    9    10    11    12    13    14
15   16   17    18    19    20    21
22   23   24    25    26    27    28
29   30   31

11 % 7 = 4
*/

/*#include <iostream>
using namespace std;

int main()
{
	int k;
	cin >> k;
	
	cout << k % 7 << endl;
	
	return 0;
}
*/


/*25 Дни недели пронумерованы следующим образом: 
0 — воскресенье, 1 — понедельник, 2 — вторник, 
..., 6 — суббота. Дано целое число K, лежащее 
в диапазоне 1–365. Определить номер дня недели 
для K-го дня года, если известно, что в этом 
году 1 января было четвергом. 
Пн   Вт   Ср   Чт   Пт   Сб    Вс
  			    1    2    3    4
5     6    7    8    9   10   11
12   13   14   15   16   17   18
19   20   21   22   23   24   25
26   27   28   29   30   31     

(19 % 7) + 2
*/

/*#include <iostream>
using namespace std;

int main()
{
	int k;
	cin >> k;
	
	cout << (k + 3)% 7 << endl;
	
	return 0;
}
*/


/*26 Дни недели пронумерованы следующим образом: 
1 — понедельник, 2 — вторник, ..., 6 — суббота, 
7 — воскресенье. Дано целое число K, лежащее в 
диапазоне 1–365. Определить номер дня недели для 
K-го дня года, если известно, что в этом году 
1 января было вторником.
Пн    Вт    Ср    Чт    Пт    Сб    Вс
      1     2     3     4     5     6     
7     8     9    10    11    12    13   
14   15    16    17    18    19    20
21   22    23    24    25    26    27
28   29    30    31   
*/

/*#include <iostream>
using namespace std;

int main()
{
	int k;
	cin >> k;
	
	cout << (k + 1)% 7;
	
	return 0;
}
*/

/*27 Дни недели пронумерованы следующим образом: 
1 — понедельник, 2 — вторник, ..., 6 — суббота, 
7 — воскресенье. Дано целое число K, лежащее в 
диапазоне 1–365. Определить номер дня недели 
для K-го дня года, если известно, что в этом 
году 1 января было субботой. 
Пн    Вт    Ср    Чт    Пт    Сб    Вс
*     *     *      *     *    1     2
3     4     5     6     7     8     9
10   11    12    13    14    15    16
17   18    19    20    21    22    23
24   25    26    27    28    29    30
31   *     *     *     *     *     *
*/	

/*#include <iostream>
using namespace std;

int main()
{
	int k;
	cin >> k;
	
	cout << (k + 5)% 7;
	
	return 0;
}
*/


/*28 Дни недели пронумерованы следующим образом: 
1 — понедельник, 2 — вторник, ..., 6 — суббота, 
7 — воскресенье. Дано целое число K, лежащее в 
диапазоне 1–365, и целое число N, лежащее в 
диапазоне 1–7. Определить номер дня недели для 
K-го дня года, если известно, что в этом году 
1 января было днем недели с номером N.
*/

/*#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Number N of week: " << endl;
	cin >> N;
	
	int K;
	cout << "Number K of year: " << endl;
	cin >> K;
	
	int m;
	m = ((K+N)%7)-1;
	
	cout << "Number day of week:" << " " << m << endl;
	
	return 0;
}
*/




 /*  BOOLEAN 1
 
 1. Дано целое число А. Проверить истинность высказывания: "Число А является положительным"
 */
 
 
/*#include <iostream>
using namespace std;

int main()
{
	int A;
	cin >> A;
	
	
	if(A>0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*2 Дано целое число A. Проверить истинность высказывания: «Число A является нечетным».
*/


/*#include <iostream>
using namespace std;

int main()
{
	int A;
	cin >> A;
	
	if(A%2 == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/

/*3 Дано целое число A. Проверить истинность высказывания: «Число A является четным».
*/


/*#include <iostream>
using namespace std;

int main()
{
	int A;
	cin >> A;
	
	if(A%2 == 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/

/*4 Даны два целых числа: A, B. Проверить истинность высказывания:
«Справедливы неравенства A > 2 и B ≤ 3».
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A;
	cin >> B;
	
	if(A>2 && B<=3)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/	


/*5 Даны два целых числа: A, B. Проверить истинность высказывания:
«Справедливы неравенства A ≥ 0 или B < −2».
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A;
	cin >> B;
	
	if(A>=0 || B<-2)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*6 Даны три целых числа: A, B, C. Проверить истинность высказывания: 
«Справедливо двойное неравенство A < B < C».
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	
	if(A<B && B<C)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
	
}
*/


/*7 Даны три целых числа: A, B, C. Проверить истинность высказывания: 
«Число B находится между числами A и C». 8 12  16
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	
	if(B>A && B<C)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/




/*8 Даны два целых числа: A, B. Проверить истинность высказывания:
«Каждое из чисел A и B нечетное».
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A;
	cin >> B;
	
	if(B%2 == 1 && A%2 == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/

/*9 Даны два целых числа: A, B. Проверить истинность высказывания:
«Хотя бы одно из чисел A и B нечетное».
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A;
	cin >> B;
	
	if(B%2 == 1 || A%2 == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*10 Даны два целых числа: A, B. Проверить истинность высказывания: 
«Ровно одно из чисел A и B нечетное».
2 3
3 2
*/

/*
#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A;
	cin >> B;
	
	if(A%2 == 1 && B%2 == 0)
	{
		cout << "Yes";
	}
	else if(A%2 == 0 && B%2 == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*11 Даны два целых числа: A, B. Проверить истинность высказывания: 
«Числа A и B имеют одинаковую четность».
4 6
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A;
	cin >> B;
	
	if(A%2 == 0 && B%2 == 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*12 Даны три целых числа: A, B, C. Проверить истинность высказывания: 
«Каждое из чисел A, B, C положительное».
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	
	if(A > 0 && B > 0 && C > 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*13 Даны три целых числа: A, B, C. Проверить истинность высказывания: 
«Хотя бы одно из чисел A, B, C положительное».
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	
	if(A > 0 && B < 0 && C > 0)
	{
		cout << "Yes";
	}
	else if (A > 0 && B > 0 && C < 0)
	{
		cout << "Yes";
	}
	else if(A > 0 && B < 0 && C < 0)
	{
		cout << "Yes";
	}
	else if ( A < 0 && B > 0 && C > 0)
	{
		cout << "Yes";
	}
	else if(A < 0 && B > 0 && C < 0)
	{
		cout << "Yes";
	}
	else if(A < 0 && B < 0 && C > 0)
	{
		cout << "Yes";
	}
	else if(A > 0 && B > 0 && C > 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*14 Даны три целых числа: A, B, C. Проверить истинность высказывания: 
«Ровно одно из чисел A, B, C положительное».
5 -7 -8
-5 7 -8
-5 -7 8
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	
	if(A > 0 && B < 0 && C < 0)
	{
		cout << "Yes";
	}
	else if(A < 0 && B > 0 && C < 0)
	{
		cout << "Yes";
	}
	else if(A < 0 && B < 0 && C > 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/

/*15 Даны три целых числа: A, B, C. Проверить истинность высказывания: 
«Ровно два из чисел A, B, C являются положительными».
5 -7 2
-5 7 2
5 7 -2
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	
	if(A > 0 && B < 0 && C > 0)
	{
		cout << "Yes";
	}
	else if(A < 0 && B > 0 && C > 0)
	{
		cout << "Yes";
	}
	else if(A > 0 && B > 0 && C < 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*16 Дано целое положительное число. Проверить истинность высказывания: 
«Данное число является четным двузначным».
28 yes
29 no
*/

/*#include <iostream>
using namespace std;

int main()
{
	int ab;
	cin >> ab;
	
	int a = ab/10;
	int b = ab%10;
	if(b%2 == 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/

/*17 Дано целое положительное число. Проверить истинность высказывания: 
«Данное число является нечетным трехзначным».
667  yes
542 no
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abc;
	cin >> abc;
	
	int a = abc/100;
	int b = (abc / 10)%10;
	int c = abc%10;
	
	if(c%2 == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*18 Проверить истинность высказывания: «Среди трех данных целых
чисел есть хотя бы одна пара совпадающих».
3 5 3
3 3 5
5 3 3
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	
	if(A == B || A == C || B == C)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/

/*19 Проверить истинность высказывания: «Среди трех данных целых
чисел есть хотя бы одна пара взаимно противоположных».
2 6 -2
2 -2 6
-2 2 6
6 2 -2
-2 6 2
6 -2 2
*/

/*#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	
	if(A == -C || A == -B)
	{
		cout << "Yes";
	}
	else if(B == -A || B == -C)
	{
		cout << "Yes";
	}
	else if(C == -A || C == -B)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/

/*20 Дано трехзначное число. Проверить истинность высказывания:
«Все цифры данного числа различны».
359 yes
559 no
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abc;
	cin >> abc;
	
	int a = abc/100;
	int b = (abc / 10)%10;
	int c = abc%10;
	
	if(a != b && a!= c && b != c)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
	
}
*/


/*21 Дано трехзначное число. Проверить истинность высказывания:
«Цифры данного числа образуют возрастающую последовательность».
268 yes
286 no
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abc;
	cin >> abc;
	
	int a = abc/100;
	int b = (abc / 10)%10;
	int c = abc%10;
	
	if(a<b && b<c)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/

/*22 Дано трехзначное число. Проверить истинность высказывания:
«Цифры данного числа образуют возрастающую или убывающую последовательность».
269  962 yes
296  692  no
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abc;
	cin >> abc;
	
	int a = abc/100;
	int b = (abc / 10)%10;
	int c = abc%10;
	
	if(a<b && b<c)
	{
		cout << "Yes";
	}
	else if(a>b && b>c)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*23 Дано четырехзначное число. Проверить истинность высказывания: 
«Данное число читается одинаково слева направо и справа налево».
5665  5665
*/

/*#include <iostream>
using namespace std;

int main()
{
	int abcd;
	cin >> abcd;
	
	int a = abcd/1000;
	int b = (abcd/100)%10;
	int c = (abcd/10)%10;
	int d = abcd%10;
	
	if(a == d && b == c)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*24 Даны числа A, B, C (число A не равно 0). Рассмотрев дискрими-
нант D = B^2 − 4·A·C, проверить истинность высказывания: «Квадратное
уравнение A·x^2 + B·x + C = 0 имеет вещественные корни».
*/

/*#include <iostream>
using namespace std;

int main()
{
	float A, B, C;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	cout << "C: ";
	cin >> C;
	
	float D;
	D = (B*B)-(4*A*C);
	if(D>=0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/

/*25 Даны числа x, y. Проверить истинность высказывания: «Точка с
координатами (x, y) лежит во второй координатной четверти».
*/

/*#include <iostream>
using namespace std;

int main()
{
	float x, y;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	
	if(x<0 && y>0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*26 Даны числа x, y. Проверить истинность высказывания: «Точка с
координатами (x, y) лежит в четвертой координатной четверти».
*/

/*#include <iostream>
using namespace std;

int main()
{
	float x, y;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	
	if(x>0 && y<0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*27 Даны числа x, y. Проверить истинность высказывания: «Точка с
координатами (x, y) лежит во второй или третьей координатной четверти».
-7  2
-6  -5
*/

/*#include <iostream>
using namespace std;

int main()
{
	float x, y;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	
	if(x<0 && y>0)
	{
		cout << "Yes";
	}
	else if(x<0 && y<0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*28 Даны числа x, y. Проверить истинность высказывания: «Точка с
координатами (x, y) лежит в первой или третьей координатной четверти».
1 5
-3 -9
*/

/*#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	
	if(x>0 && y>0)
	{
		cout << "Yes";
	}
	else if(x<0 && y<0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*29 Даны числа x, y, x1, y1, x2, y2. Проверить истинность высказывания: 
«Точка с координатами (x, y) лежит внутри прямоугольника, левая
верхняя вершина которого имеет координаты (x1, y1), правая нижняя —
(x2, y2), а стороны параллельны координатным осям».
*/

/*#include <iostream>
using namespace std;

int main()
{
	float x, y, x1, y1, x2, y2;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;
	
	if(x>x1 && y<y1)
	{
		cout << "Yes";
	}
	else if(x<x2 && y>y2)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/

/*30 Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника. 
Проверить истинность высказывания: «Треугольник со сторонами a, b, c 
является равносторонним».
*/

/*#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	
	if(a == b && a == c && b == c)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*31 Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника. 
Проверить истинность высказывания: «Треугольник со сторонами a, b, c 
является равнобедренным».
*/

/*#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	
	if(a == b || a == c || c == b)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*32 Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника. 
Проверить истинность высказывания: «Треугольник со сторонами a, b, c 
является прямоугольным».
5  3   4
25   9  16 = 25
*/

/*#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	
	if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/

/*34 Даны координаты поля шахматной доски x, y 
(целые числа, лежащие в диапазоне 1–8). Учитывая, что левое нижнее поле доски (1, 1)
является черным, проверить истинность высказывания: «Данное поле является белым».
*/

/*#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	
	if((x+y)%2 == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/

/*35 Даны координаты двух различных полей шахматной доски x1,
y1, x2, y2 (целые числа, лежащие в диапазоне 1–8). Проверить истинность
высказывания: «Данные поля имеют одинаковый цвет».
3  2   5     2   4   6
4  5   9     4   4   8
4  6   10    4   5   9
*/

/*#include <iostream>
using namespace std;

int main()
{
	int x1, y1, x2, y2;
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;
	
	if((x1+y1)%2 == (x2+y2)%2)
	{
		cout << "Yes";
	}
	
	/*if((x1+y1)%2 == 1 && (x2+y2)%2 == 1)
	{
		cout << "Yes";	
	}
	else if((x1+y1)%2 == 0 && (x2+y2)%2 == 0)
	{
		cout << "Yes";
	}
	*/
/*	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*36 Даны координаты двух различных полей шахматной доски x1, y1,
x2, y2 (целые числа, лежащие в диапазоне 1–8). 
Проверить истинность высказывания: 
«Ладья за один ход может перейти с одного поля на другое».
1   3    2    6
3   3    2    3
*/

/*#include <iostream>
using namespace std;

int main()
{
	int x1, y1, x2, y2;
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;
	
	if(x1 == x2 || y1 == y2)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	
	return 0;
}
*/


/*37 Даны координаты двух различных полей шахматной доски x1,
y1, x2, y2 (целые числа, лежащие в диапазоне 1–8). Проверить истинность
высказывания: «Король за один ход может перейти с одного поля на другое».
4   1
3   2
5   2
*/

/*ДРУГОЕ (С ВИДОСА)
*/

/* 1. #include <iostream>
#include <string>
using namespace std;

int main()
{
	char arr[2] = {'s', 'r'};
	
	for (int i=0; i < 2; i++)
	{
		cout << arr[i] << endl;
	}
	
	return 0;
}
*/


/* 2. #include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector <int> vect (10);
	int arr[3] = {23, 34, 56};
	
	vect.insert(vect.begin(), arr, arr+2);
	vect.insert(vect.begin() + 2, 34);
	vect.push_back(47);
	cout << vect.front() << endl;
	
	return 0;
}
*/


/* 3. #include <iostream>
#include <string>
#include <vector>
using namespace std;

void print (string world) 
{
	cout << world << endl;
}

void print (string world, float a) 
{
	cout << world << " " << a << endl;
}

float del (float a, float b)
{
	if (b == 0)
		return 0;
	else
	return a / b;
}

/*float del (float a, float b)
{
	float res;
	try
	{
	if (b != 0)
		res = a / b;
	else
		throw (b);
	}
	catch (int number)
	{
		res = a;
	}
	return res;
}
*/
/*int main()
{
	string rr = "Hello world!";
	print (rr);
	
	float reb = del (23, 2);
	print ("Result is", reb);
	
	return 0;
}
*/
	

/* 4. #include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int val = 9;
	int &ref = val;
	
	cout << ref << endl;
	
	return 0;
}
*/


/* 5.
*/
/*#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car
{
	private:
		int height;
		float speed;
	public:
		void setValues (int height, float speed){
			this->height = height;
			this->speed = speed;
		}
		
	void print ()
	{
		cout << this->height << " - " << this->speed << endl;
	}
};

int main()
{
	Car shkoda;
	shkoda.setValues(2200, 256.6);
	shkoda.print();
	
	Car audi;
	audi.setValues(2150, 310.5);
	audi.print();
	
	return 0;
}
*/  


// Задание с учебника 


/*#include <iostream>;
using namespace std;

int main(){
	double A, B;
	
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	try
	{
		if(A!=0)
		{
			throw A;
		}
		if(B!=0)
		{
			throw "Not solution";
		}
		cout << "Solution - any number" << endl; 
	}
	catch(double e)
	{
		cout << "Solution of the equation: " << B/e << endl;
	}
	catch(char* e)
	{
		cout << e << endl;
	}
	
	return 0;
}
*/

// Найдите произвежение цифр трехзначного числа

/*#include <iostream>;
using namespace std;

int main()
{
	int n;
	cout << "Input n: ";
	cin >> n;
	if(n<100 || n>999)
	{
		cout << "Error " << endl;
	}
	else
	{
		int a, b, c;
		a=n%10;
		b=(n/10)%10;
		c=n/100;
		
		int dig;
		dig = a*b*c;
		cout << "answer is : " << dig << endl;
	}
	
	return 0;
}
*/


/*#include <iostream>;
using namespace std;

int a[100], d[100];
int main()
{
	int n, dre=0, r;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> r;
		a[r]++;
	}
	for(int i=0; i<n; i++)
	{
		cin >> r;
		d[r]++;
	}
	for(int i=0; i<=100; i++)
	{
		dre += min(a[i], d[i]);
		
	}
	cout << dre;
	
	return 0;
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int n;
	cout << "N:";
	cin >> n;
	
	float r = 1, ch = 0;
	
	for(int i=1; i<=n; ++i)
	{
		r *= i;
		ch += r;
	}
	
	cout << ch;
	return 0;
}
*/
