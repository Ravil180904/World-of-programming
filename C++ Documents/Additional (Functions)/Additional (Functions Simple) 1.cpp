/*
1 Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X 
следующие значения:
−1, если X < 0; 
0, если X = 0; 
1, если X > 0.
С помощью этой функции найти значение выражения Sign(A) + Sign(B)
для данных вещественных чисел A и B.
*/

/*#include <iostream>;
using namespace std;

int sign(float X)
{
	if(X<0)
	{
		return -1;
	}
	else if(X==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
}


int main()
{
	int a, b;
	float A, B;
	cin >> A >> B;
	cout << sign(A)+sign(B);
	
	/*if(A<0)
	{
		a=-1;
	}
	else if(A==0)
	{
		a=0;
	}
	else
	{
		a=1;
	}
	if(B<0)
	{
		b=-1;
	}
	else if(B==0)
	{
		b=0;
	}
	else
	{
		b=1;
	}
	cout << a+b;
	*/
	//cout << 
	
	/*if(X<0)
	{
		cout << -1;
	}
	else if(X==0)
	{
		cout << 0;
	}
	else
	{
		cout << 1;
	}*/
//}


/*
2 Описать функцию RootsCount(A, B, C) целого типа, определяющую
количество корней квадратного уравнения A·x^2 + B·x + C = 0 
(A, B, C — вещественные параметры, A != 0). Количество корней 
определять по значению дискриминанта: D = B^2 − 4·A·C.
*/

/*#include <iostream>;
using namespace std;

int RootsCount(float A,float B,float C)
{
	float D;
	D=B*B-4*A*C;
	if(D>0)
	{
		return 2;
	}
	else if(D==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	
	cout << RootsCount(a,b,c);
}*/


/*
3 Описать функцию CircleS(R) вещественного типа, находящую площадь 
круга радиуса R (R — вещественное). Площадь круга радиуса R вычисляется 
по формуле S = π·R^2. В качестве значения π использовать 3.14.
R=2
3.14*2*2=12.56
*/

/*#include <iostream>;
using namespace std;

float Circles(float R)
{
	float S;
	S=3.14*R*R;
	return S;
}

int main()
{
	float r;
	cin >> r;
	cout << Circles(r);
}*/


/*
4 Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца,
заключенного между двумя окружностями с общим центром и радиусами R1 и R2 
(R1 и R2 — вещественные, R1 > R2). Воспользоваться формулой 
площади круга радиуса R: S = π·R^2. В качестве значения π использовать 3.14.
R1=5 R2=8
8-5=3
S=28.26
*/

/*#include <iostream>;
using namespace std;

float RingS(float R1, float R2)
{
	float S1, S2, S;
	S1=3.14*R1*R1;
	S2=3.14*R2*R2;
	S=S1-S2;
		return S;
}

int main()
{
	int n, r;
	cin >> n >> r;
	
	cout << RingS(n,r);
}*/