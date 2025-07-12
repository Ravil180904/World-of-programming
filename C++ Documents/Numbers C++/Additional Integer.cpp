
/*Integer1◦
. Дано расстояние L в сантиметрах. Используя операцию деления
нацело, найти количество полных метров в нем (1 метр = 100 см).
2=2*100=200
abc=a/100
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float N;
	cin >> N;
	
	float a=N/100;
	
	cout << a << endl;
	
	return 0;
}
*/

/*Integer2◦
. Дана масса M в килограммах. Используя операцию деления нацело,
найти количество полных тонн в ней (1 тонна = 1000 кг)
1500=1.5 kg
*/

/*#include <iostream>;
using namespace std;

int main()
{		
	float M;
	cout << "Kilogramms: ";
	cin >> M;
	
	float a;
	a=M/1000;
	
	cout << M << " " << "Kilagramm is: " << a << endl;
	
	return 0;
}
*/

/*Integer3◦
. Дан размер файла в байтах. Используя операцию деления нацело,
найти количество полных килобайтов, которые занимает данный файл
(1 килобайт = 1024 байта).
2550 byte = 2550/1024= 2,...
*/


/*#include <iostream>;
using namespace std;

int main()
{
	float n;
	cout << "Bytes: ";
	cin >> n;
	
	float a;
	a=n/1024;
	
	cout << n << " " << "Bytes is: " << a << endl;
	
	return 0;
}
*/

/*Integer4◦
. Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B
(без наложений). Используя операцию деления нацело, найти количество
отрезков B, размещенных на отрезке A.
A=15  B=4
15/4=3,3
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A, B;
	
	cout << "Piece of A: ";
	cin >> A;
	
	cout << "Piece of B: ";
	cin >> B;
	
	int n, r;
	n=A/B;
	r=A%B;
	
	cout << "The max quantity of B by A: " << n << endl;
	
	return 0;	
}
*/

/*Integer5◦
. Даны целые положительные числа A и B (A > B). На отрезке длины A
размещено максимально возможное количество отрезков длины B (без
наложений). Используя операцию взятия остатка от деления нацело, найти
длину незанятой части отрезка A.
A=27 B=7 n=27%7=6
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int A, B;
	cout << "Piece of A: ";
	cin >> A;
	cout << "Piece of B: ";
	cin >> B;
	
	int n;
	n=A%B;
	
	cout << "Unoqqupied piece is: " << n;
	
	return 0;
}
*/

/*Integer6◦
.
Дано двузначное число. Вывести вначале его левую цифру (десятки), 
а затем — его правую цифру (единицы). Для нахождения десятков
использовать операцию деления нацело, 
для нахождения единиц — операцию взятия остатка от деления.
97 = 97/10 = 9 
97 % 10 = 7
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int ab;
	cout << "Two-digit number: ";
	cin >> ab;
	
	int a = ab/10;
	int b = ab%10;
	
	cout << "First digit: " << a << endl;
	cout << "Second digit: " << b << endl;
	
	return 0;
}
*/

/*Integer7◦
. Дано двузначное число. Найти сумму и произведение его цифр.
65=6+5=11
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int ab;
	cout << "Two-digit number: ";
	cin >> ab;
	
	int a = ab/10;
	int b = ab%10;
	
	cout << "The sum of two-digit number is: " << a+b << endl;
	
	return 0;
}
*/

/*Integer8◦
. Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа
85 = 58
85=85/10=8 
85%10 = 5
5*10+8=50+8=58
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int ab;
	cout << "Two-digit number: ";
	cin >> ab;
	
	int a=ab/10;
	int b=ab%10;
	
	int n=b*10+a;
	
	cout << "Swap of two-digit number is: " << n;
	
	return 0;
}
*/

/*Integer9◦
. Дано трехзначное число. Используя одну операцию деления нацело,
вывести первую цифру данного числа (сотни).
758
758/100=7
758/10=75%10=5 == (758/10)%10
758%10=8
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int abc;
	cout << "Three-digit number: ";
	cin >> abc;
	
	int a=abc/100;
	int b=(abc/10)%10;
	int c=abc%10;
	
	cout << "First digit of three-digit number is: " << a << endl;
	
	return 0;
}
*/

/*Integer10◦
. Дано трехзначное число. Вывести вначале его последнюю цифру
(единицы), а затем — его среднюю цифру (десятки).
515= 5 and 1
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int abc;
	cout << "Three-digit number: ";
	cin >> abc;
	
	int a=abc/100;
	int b=(abc/10)%10;
	int c=abc%10;
	
	cout << "Third digit: " << c << endl;
	cout << "Second digit: " << b << endl;
	
	return 0;
}
*/

/*Integer11◦
. Дано трехзначное число. Найти сумму и произведение его цифр.
631=6+3+1=10
631=6*3*1=18
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int abc;
	cout << "Three-digit number: ";
	cin >> abc;
	
	int a=abc/100;
	int b=(abc/10)%10;
	int c=abc%10;
	
	int n,m;
	n=a+b+c;
	m=a*b*c;
	
	cout << "The sum of three-digit number: " << n << endl;
	cout << "The product of three-digit number: " << m << endl;
	
	return 0;
}
*/

/*Integer12◦
. Дано трехзначное число. 
Вывести число, полученное при прочтении исходного числа справа налево.
379=973
379=379/100 = 3
379=379/10%10=7
379=379%10=9
9*100+7*10+3*1=900+70+3=973
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int abc;
	cout << "Three-digit number: ";
	cin >> abc;
	
	int a=abc/100;
	int b=(abc/10)%10;
	int c=abc%10;
	
	int n=c*100+b*10+a;
	
	cout << "The swap of three-digit number: " << n;
	
	return 0;
}
*/

/*Integer13◦
. Дано трехзначное число. В нем зачеркнули первую слева цифру и
приписали ее справа. Вывести полученное число.
379=793
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int abc;
	cout << "Three-digit number: ";
	cin >> abc;
	
	int a=abc/100;
	int b=(abc/10)%10;
	int c=abc%10;
	
	int n=b*100+c*10+a;
	
	cout << "The number is: " << n << endl;
	
	return 0;
}
*/

/*Integer14◦
. Дано трехзначное число. В нем зачеркнули первую справа цифру
и приписали ее слева. Вывести полученное число.
379=937
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int abc;
	cout << "Three-digit number: ";
	cin >> abc;
	
	int a=abc/100;
	int b=(abc/10)%10;
	int c=abc%10;
	
	int n=c*100+a*10+b;
	
	cout << "Number is: " << n;
	
	return 0;
}
*/

/*Integer15◦
. Дано трехзначное число. Вывести число, полученное при перестановке 
цифр сотен и десятков исходного числа (например, 123 перейдет в 213).
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int abc;
	cout << "Three-digit number: ";
	cin >> abc;
	
	int a=abc/100; //1
	int b=(abc/10)%10; //2   2*100+1*10+3=200+10+3=213
	int c=abc%10; //3
	
	int n=b*100+a*10+c;
	
	cout << "Swaps of three-digit number: " << n << endl;
	
	return 0;
}
*/


/*Integer16◦
. Дано трехзначное число. Вывести число, полученное при перестановке цифр десятков и единиц исходного числа (например, 123 перейдет
в 132)
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int abc;
	cout << "Three-digit number: ";
	cin >> abc;
	
	int a=abc/100;
	int b=(abc/10)%10;
	int c=abc%10;
	
	int n=a*100+c*10+b;
	
	cout << n;
	
	return 0;
}
*/

/*Integer17◦
. Дано целое число, большее 999. Используя одну операцию деления нацело и одну операцию взятия остатка от деления, найти цифру,
соответствующую разряду сотен в записи этого числа
1520=1520/1000=1
1520/100=15%10=5
1520/10=152%10=2
1520%10=0

*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int abcd;
	cout << "Four-digit number: ";
	cin >> abcd;
	
	int b=(abcd/100)%10;
	
	cout << b << endl;
	
	return 0;
}
*/


/*Integer18◦
. Дано целое число, большее 999. Используя одну операцию деления нацело и одну операцию взятия остатка от деления, найти цифру,
соответствующую разряду тысяч в записи этого числа.
2560=2560/1000=2%10=2
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int abcd;
	cin >> abcd;
	
	int a=(abcd/1000)%10;
	
	cout << a << endl;
	
	return 0;
}
*/


/*Integer19◦
. С начала суток прошло N секунд (N — целое). Найти количество
полных минут, прошедших с начала суток.
45 second=45/60 minutes
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int N;
	cout << "Seconds: ";
	cin >> N;
	
	//int m;
	//m=N/60;
	
	cout << N/60 << " Minutes left" << endl;
	
	return 0;
}
*/

/*Integer20◦
. С начала суток прошло N секунд (N — целое). Найти количество
полных часов, прошедших с начала суток.
7300 second= (7300/3600)hours left
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int N;
	cout << "Seconds: ";
	cin >> N;
	
	cout << N/3600 << " Hours left" << endl;
	
	return 0;
}
*/

/*Integer21◦
. С начала суток прошло N секунд (N — целое). Найти количество
секунд, прошедших с начала последней минуты.
156 second = 36 second left since beginning last minute
156%60=36
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int N;
	cout << "Seconds: ";
	cin >> N;
	
	cout << N%60 << " Seconds left since beginning last minute" << endl;
	
	return 0;
}
*/

/*Integer22◦ .С начала суток прошло N секунд (N — целое). Найти количество
секунд, прошедших с начала последнего часа.
4600=4600%3600=1000 seconds left since beginning last hour
10400%3600=3200
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int N;
	cout << "Seconds: ";
	cin >> N;
	
	cout << N%3600 << " Seconds left since beginning last hour" << endl;
	
	return 0;
}
*/

/*Integer23◦
. С начала суток прошло N секунд (N — целое). Найти количество
полных минут, прошедших с начала последнего часа.
4880 second
4880/60=81 minutes
81%60=21 minutes left since beginning last hour 
*/

/*#include <iostream>;
using namespace std;

int main ()
{
	int N;
	cout << "Seconds: ";
	cin >> N;
	
	int m=N/60; //minutes
	
	cout << m%60 << " Minutes left since beginning last hour" << endl;
	
	return 0;
}
*/

/*Integer29◦
. Даны целые положительные числа A, B, C. На прямоугольнике размера A × B размещено максимально возможное количество квадратов со
стороной C (без наложений). Найти количество квадратов, размещенных
на прямоугольнике, а также площадь незанятой части прямоугольника.
*/
