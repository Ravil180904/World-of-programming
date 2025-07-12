//1 Дано целое число A. Проверить истинность высказывания: «Число A является положительным».


/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int A; 
	
	cin >> A;
	
	if( A > 0)
	{
		cout << "Yes";
	}
	else 
	{
		cout << "No";
	}
}
*/	
	

//2.Дано целое число A. Проверить истинность высказывания: «Число A является нечетным».


/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int A; 
	
	cin >> A;
	
	if( A %2 == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout <<"No";
	}
	
}
*/


//4 Даны два целых числа: A, B. Проверить истинность высказывания:
//«Справедливы неравенства A > 2 и B ≤ 3».

/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int A, B; 
	
	cin >> A >> B;
	
	if( A > 2 && B <= 3)
	{
		cout << "Yes";
	}
	else
	{
		cout <<"No";
	}
	
}
*/


//8 Даны два целых числа: A, B. Проверить истинность высказывания:
//«Каждое из чисел A и B нечетное».


/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int A, B; 
	
	cin >> A >> B;
	
	if( A %2== 1 && B %2== 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}
*/


//7 Даны три целых числа: A, B, C. Проверить истинность высказывания: 
//«Число B находится между числами A и C».


// 6 3 2
/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int A, B, C; 
	
	cin >> A >> B >> C;
	
	if( A < B && B < C  )
	{
		cout << "Yes";
	}
	else if( A > B && B > C)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}
*/


//9 Даны два целых числа: A, B. Проверить истинность высказывания:
//«Хотя бы одно из чисел A и B нечетное».

/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int A, B; 
	
	cin >> A >> B;
	
	if( A %2 == 1 || B%2 == 1 )
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}
*/


//11 Даны два целых числа: A, B. Проверить истинность высказывания: 
//«Числа A и B имеют одинаковую четность».

/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int A, B; 
	
	cin >> A >> B;
	
	if( A %2 == B%2)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}
*/

// 14 Даны три целых числа: A, B, C. Проверить истинность высказывания: 
//«Ровно одно из чисел A, B, C положительное».

// -2 6 -7
// -1 -5 7
// 2 -2 -4
/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int A, B, C; 
	
	cin >> A >> B >> C;
	
	if(A > 0 && B <= 0 && C <= 0)
	{
		cout << "yes";
	}
	else if (B > 0 && A <= 0 && C <= 0)
	{
		cout << "yes";
	}
	else if(C > 0 && A<= 0 && B <= 0)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}
*/

//	16 Дано целое положительное число. Проверить истинность высказывания: 
//«Данное число является четным двузначным».


/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int A; 
	
	cin >> A;
	
	if(A >= 10 && A<= 99 && A%2 == 0 )
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}
*/

// 17 Дано целое положительное число. Проверить истинность высказывания: 
//«Данное число является нечетным трехзначным».


/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int A; 
	
	cin >> A;
	
	if(A >= 100 && A <= 999 && A%2 == 1)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}
*/

//18 Проверить истинность высказывания: «Среди трех данных целых
//чисел есть хотя бы одна пара совпадающих».
//  1 1 2     1 2 1   2 1 1   


/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int A, B, C; 
	
	cin >> A >> B >> C;
	
	if(A == B || A == C || B == C)
	{
		cout << "yes";
	}	
	else 
	{
		cout << "no";
	}
}
eee
*/



//19 Проверить истинность высказывания: «Среди трех данных целых
//исел есть хотя бы одна пара взаимно противоположных».
// 2 1 -2

/*
#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int A, B, C; 
	
	cin >> A >> B >> C;
	
	if(A == -B || A == -C || B == -C)
	{
		cout << "yes";
	}
	else 
	{
		cout << "no";
	}
}
tt
*/


//20 Дано трехзначное число. Проверить истинность высказывания:
//«Все цифры данного числа различны».
// 3 5 7   357   357%10 = 7     357/10  = 35    35%10=5

/*#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int abc; 
	
	cin >> abc;
	int a, b, c;
	
	a = abc/100;
	b = (abc/10)%10
	c = abc%10;
	
*/	




	
