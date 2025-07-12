//1 Дано целое число. Если оно является положительным, то прибавить к
//нему 1; в противном случае не изменять его. Вывести полученное число.
/*
#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	
	if(a>0)
	{
		a++;
	}
	
	cout << a;
	
	return 0;
}
*/


//2 Дано целое число. Если оно является положительным, то прибавить к
//нему 1; в противном случае вычесть из него 2. Вывести полученное число.
/*#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	
	if(a>0)
	{
		a++;
	}
	else
	{
		a-=2;
	}
	
	cout << a;
	
	return 0;
}


3. 3 Дано целое число. Если оно является положительным, то прибавить к
нему 1; если отрицательным, то вычесть из него 2; если нулевым, то
заменить его на 10. Вывести полученное число.
*/

/*#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	
	if(a>0)
	{
		a++;
	}
	else if (a<0)
	{
		a-=2;
	}
	else
	{
		a=10;
	}
	
	cout << a;
	
	return 0;
}
*/

//4.Даны три целых числа. Найти количество положительных чисел в исходном наборе.


/*#include <iostream>
using namespace std;

int main()
{
	int a, b,c;
	cin >> a >> b >> c;
	int n=0;
	
	if(a>0)
	{
		n++;
	}
	
	if(b>0)
	{
		n++;
	}
	
	if(c>0)
	{
		n++;
	}
	cout<<n;
	
	return 0;
}
*/
/*5. Даны три целых числа. Найти количество положительных и количество
отрицательных чисел в исходном наборе.
*/
/*#include <iostream>
using namespace std;

int main()
{
	int a, b,c;
	cin >> a >> b >> c;
	int n=0;
	
	int d=0;
	
	if(a>0)
	{
		n++;
	}
	
	if(b>0)
	{
		n++;
	}
	
	if(c>0)
	{
		n++;
	}
	
	if(a<0)
	{
		d++;
	}
	if(b<0)
	{
		d++;
	}
	if(c<0)
	{
		d++;
	}
	
	cout << n << " " << d;
}
*/

//6.Даны два числа. Вывести большее из них.

/*#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	
	if(a>b)
	{
		cout<<a;
	}
	else
	{
		cout<<b;
	}
	
}
*/

//7 Даны два числа. Вывести порядковый номер меньшего из них.

/*#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	
	if(a<b)
	{
		cout<<a;
	}

}
*/


//8. Даны два числа. Вывести вначале большее, а затем меньшее из них.

/*#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if(a>b)
	{
		cout << a << " " << b; 
	}
	
}
*/

/*9. Даны две переменные вещественного типа: A, B. Перераспределить 
значения данных переменных так, чтобы в A оказалось меньшее из значений, 
а в B — большее. Вывести новые значения переменных A и B.
3 5   3 5
5 3   3 5

*/
/*#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if(b<a)
	{
		int c;
		c = a;
		a = b;
		b = c;
	}	
	
	cout << a << " " << b; 
	
}
*/

/*10 Даны две переменные целого типа: A и B. Если их значения не равны,
то присвоить каждой переменной сумму этих значений, а если равны,
то присвоить переменным нулевые значения. Вывести новые значения
переменных A и B.
*/

/*#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	
	if(a != b)
	{
		a += b;
		b = a;
	}
	else
	{
		a=0; 
		b=0;
	}
	cout << a << " " << b ;
}
*/

/*11 Даны две переменные целого типа: A и B. Если их значения не равны, то
присвоить каждой переменной большее из этих значений, а если равны,
то присвоить переменным нулевые значения. Вывести новые значения
переменных A и B.
*/

/*#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	
	if(a != b)
	{
	
		if( a > b)
		{
			b = a;
		}
		else
		{
			a = b;
		}
	
	}
	else
	{
		a=0;
		b=0;
	}
	
	cout << a << " " << b;
}
*/

// 12.Даны три числа. Найти наименьшее из них.


/*#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	if(a < b && a < c)
	{
		cout << a;
	}
	if(b < a && b < c)
	{
		cout << b;
	}
	if(c < a && c < b)
	{
		cout << c;
	}
		
	return 0; 
}
*/


// 13. Даны три числа. Найти среднее из них (то есть число, расположенное
//между наименьшим и наибольшим).	

/*#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	if(a < b && a > c || a > b && a < c){
	cout << a;
	}
	
	else if (b > a && b < c || b > c && b < a)
	{
		cout << b;
	}
	else{
		cout << c;
	}
	
	return 0;
}
*/


// 14.Даны три числа. Вывести вначале наименьшее, а затем наибольшее из
//данных чисел.


/*#include <iostream>
using namespace std;

int main()
{
	int a, b, c, min=0, max=0;
	cin >> a >> b >> c;
	
	if(a < b && a < c)
	{
		min=a;
	}
	else if(b < a && b < c )
	{
		min=b;
	}
	else
	{
		min=c;
	}
	cout << min <<endl;
	
	if(a > b && a > c)
	{
		max=a;
	}
	else if(b > a && b > c)
	{
		max=b;
	}
	else
	{
		max=c;
	}
	cout << max <<endl;
	
	return 0;
}
	
*/	


//15 Даны три числа. Найти сумму двух наибольших из них.


/*#include <iostream>
using namespace std;

int main()
{
	int a, b, c, min=0, max=0;
	cin >> a >> b >> c;
	
	if(c <= a && c <= b)
	{
		min=c;
	}
	else if(b <= c && b <= a)
	{
		 min = b;
	}
	else
	{
		min = a;
	} 


	
	
	int sum = a + b + c - min;
	cout << sum;
}


/*16 Даны три переменные вещественного типа: A, B, C. Если их значения
упорядочены по возрастанию, то удвоить их; в противном случае заменить 
значение каждой переменной на противоположное. Вывести новые
значения переменных A, B, C.
2 < 4 < 9 
*/

/* #include <iostream>
using namespace std;

int main()
{
	int a, b, c, min=0, max=0;
	cin >> a >> b >> c;
	
	if( a < b && b < c )
	{
		a*=2, 
		b*=2, 
		c*=2;
	}
	else
	{
		a = -a;
		b = -b;
		c = -c;
	}
	
	cout << a << " " << b << " " << c;
}
*/

/*17 Даны три переменные вещественного типа: A, B, C. Если их значения
упорядочены по возрастанию или убыванию, то удвоить их; в противном 
случае заменить значение каждой переменной на противоположное.
Вывести новые значения переменных A, B, C.
9 7 3
*/

/* #include <iostream>
using namespace std;

int main()
{
	int a, b, c, min=0, max=0;
	cin >> a >> b >> c;
	
	if( a < b && b < c )
	{
		a*=2;
		b*=2; 
		c*=2;
	}
	else if( a > b && b > c)
	{
		a*=2;
		b*=2;
		c*=2;
	}
	else
	{
		a = -a;
		b = -b;
		c = -c;
	}
	cout << a << " " << b << " " << c;
}
*/


/* 18 Даны три целых числа, одно из которых отлично от двух других, 
равных между собой. Определить порядковый номер числа, отличного от
остальных.
7 2 7
*/

/*#include <iostream>
using namespace std;

int main()
{
	int a, b, c, min=0, max=0;
	cin >> a >> b >> c;
	
	if( a == b )
	{
		cout << 3;
	}
	else if( b == c)
	{
		cout << 1;
	}
	else
	{
		cout << 2;
	}
	
}
*/

/* 19 Даны четыре целых числа, одно из которых отлично от трех других,
равных между собой. Определить порядковый номер числа, отличного от
остальных. 5 5 5 8
*/


/*#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if( a == b && b == c )
	{
		cout << 4;
	}
	else if( a == b && b == d )
	{
		cout << 3;
	}
	else if( a == c && a == d)
	{
		cout << 2;
	}
	else
	{
		cout << 1;
	}
	
}
*/

/* 20 На числовой оси расположены три точки: A, B, C. Определить, какая из
двух последних точек (B или C) расположена ближе к A, и вывести эту
точку и ее расстояние от точки A. 
5 8 7
*/

/*
#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	
	float ab=abs(b - a);
	float ac=abs(c - a);
	
	if( ab < ac )
	{
		cout << b << " " << ab;
	}
	else
	{
		cout << c << " " << ac;	
	}
}
*/

/*
21 Даны целочисленные координаты точки на плоскости. Если точка совпадает 
с началом координат, то вывести 0. Если точка не совпадает с началом координат, 
но лежит на оси OX или OY, то вывести соответственно 1 или 2. 
Если точка не лежит на координатных осях, то вывести 3.
*/

/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int x, y;
	cin >> x >> y;
	if((x==0) && (y==0))
	{
		cout << "0" << endl;	
	}
	else if((x!=0) && (y==0))
	{
		cout << "1" << endl;
	}
	else if ((x==0) && (y!=0))
		{
			cout << "2" << endl;
		}
	else
	{
		cout << "3" << endl;
	}
	
}

*/


/*22 Даны координаты точки, не лежащей на координатных осях OX и OY.
Определить номер координатной четверти, в которой находится данная
точка.
*/

/*#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
	setlocale(LC_ALL, "Russian");
	
	int x, y;
	cin >> x >> y;
	if((x>0) && (y>0))
	{
		cout << "1-st quater";
	}
	else if((x<0) && (y>0))
	{
		cout << "2-nd quater";
	}
	else if((x<0) && (y<0))
	{
		cout << "3-th quater";
	}
	else
	{
		cout << "4-th quater";
	}
	
	return 0;
}
*/


/*24  Для данного вещественного x найти значение следующей функции f,
принимающей вещественные значения:
f (x) = 
2·sin(x), если x > 0,
6 − x, если x ≤ 0
*/

/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	setlocale(LC_ALL, "Russian");
	
	float x;
	
	cin>>x;
	if( x>0)
	{
		cout << "f(x)= 2 * sinx" << 2*sin(x) ;
	}
	else
	{
		cout << "f(x) = 6-x" << 6-(x);
	}
	
	return 0;
}
*/


/*25 Для данного целого x найти значение следующей функции f, 
принимающей значения целого типа:
f (x) =
2·x, если x < −2 или x > 2,
−3·x, в противном случае.
*/

/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int x;
	
	cin >> x;
	
	if( x<-2 || x>2)
	{
		cout << "f(x)=2*x" << 2*(x);
	}
	else
	{
		cout << "f(x)=-3*x" << -3*(x);
	}
	
	return 0;
}
*/


/* 26 Для данного вещественного x найти значение следующей функции f,
принимающей вещественные значения:
f (x) = 
−x, если x ≤ 0,
x^2, если 0 < x < 2,
4, если x ≥ 2.
*/


/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	double x;
	double f;
	
	cin >> x;
	
	if( x <=0 )
	{
		f=-x;
	}
	
	else if(0 < x && x < 2)
	{
		 f=x*x;
	}
	else
	{
		 f=4;
	}
	cout << f;
	return 0;
}
*/


/*27 Для данного вещественного x найти значение следующей функции f,
принимающей значения целого типа:
f (x) =
0, если x < 0,
1, если x принадлежит [0, 1), [2, 3), . . . ,   0.999 0   2.999 2   2.0   2
−1, если x принадлежит [1, 2), [3, 4), . . . .  1.999 1    3.999 3  
*/

/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	double x; 
	
	int xx;
	int f;
	
	cin >> x;
	xx = x;
	
	if( x < 0)
	{
		f=0;
	}
	else
	{
		if( xx%2 == 1 )
		{
			f=-1;
		}
		else
		{
			f=1;
		}	
	}

	cout << f;
	
}

*/


/*28 Дан номер года (положительное целое число). Определить количество
дней в этом году, учитывая, что обычный год насчитывает 365 дней, а
високосный — 366 дней. Високосным считается год, делящийся на 4, за
исключением тех годов, которые делятся на 100 и не делятся на 400
(например, годы 300, 1300 и 1900 не являются високосными, а 1200 и 2000
— являются).
*/


/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int x; 
	
	cin >> x;
	
	if( x %400 == 0)
	{
		cout << "Leap year";
	}
	else if( x%100 ==0 )
	{
		cout << "Not leap year";
	}
	else if ( x%4 == 0)
	{
		cout << "Leap year";
	}
	else
	{
		cout << "Not leap year";
	}
}
*/

/*29 Дано целое число. Вывести его строку-описание вида «отрицательное
четное число», «нулевое число», «положительное нечетное число» и т. д.
*/


/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int x; 
	
	cin >> x;
	
	if( x < 0)
	{
	cout << "negative ";	
	}
	else if( x > 0)
	{
		cout << "positive ";
	}
	else if(x == 0)
	{
		cout << "zero number";
	}
	
	if(x%2 == 0)
	{
		cout << "even number";
	}
	else
	{
		cout << "odd number";
	}

}
*/


/*30 Дано целое число, лежащее в диапазоне 1–999. Вывести его строку - 
описание вида «четное двузначное число», «нечетное трехзначное число»
и т. д.	
*/

/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int x; 
	
	cin >> x;
	
	if( x < 0)
	{
	cout << "negative ";	
	}
	else if( x > 0)
	{
		cout << "positive ";
	}
	else if(x == 0)
	{
		cout << "zero number ";
	}
	
	if(x%2 == 0)
	{
		cout << "even number ";
	}
	else
	{
		cout << "odd number ";
	}
	
	
	if( x>=10 && x<=99 )
	{
		cout << "two-digit number";
	}
	else if( x>=100 && x<=999)
	{
		cout << "three-digit number";
	}
	
	else
	{
		cout << "one rank";
	}

}
*/

//The End!!!





	
	
	
