/* Task 1: Calculating the area of a rectangle
Write a program that asks the user for the length and width of a rectangle, and 
then calculates and displays its area on the screen
*/
/*
#include <iostream>;
using namespace std;

int main()
{
	int a, b;
	cout << "Length: ";
	cin >> a;
	cout << "Width: ";
	cin >> b;
	
	int c;
	c = a * b;
	cout << "Area of rectangle equals: " << c << endl;
	
	return 0; 
}
*/

/*Task 2: Calculation of the perimeter of the circle
Write a program that asks the user for the radius of a circle, and then 
calculates and displays its perimeter.
*/


/*#include <iostream>;
using namespace std;

int main()
{
	int r;
	float pi=3.14;
	
	cout << "Radius of circle: ";
	cin >> r;
	
	int p;
	p=2*pi*r;
	
	cout << "Perimeter of circle equals: " << p << endl;
	
	return 0;
}
*/



/*Task 3: Temperature converter
Write a program that asks the user for the temperature in degrees Celsius and 
converts it to degrees Fahrenheit and Kelvins. Display all three values on the 
screen
*/


/*#include <iostream>;
using namespace std;

int main()
{
	int c, f, k;
	
	cout << "Degrees Celsius: ";
	cin >> c;
	
	f=(c*9/5)+32;
	cout << "Degrees Fahrenheit: " << f << endl;
	
	k=c+273;
	cout << "Degrees Kelvins: " << k << endl;
	
	return 0;
}
*/


/*Task 4: Calculation of the average value
Write a program that asks the user for three numbers and calculates their 
average value. Display the result on the screen
*/

/*#include <iostream>;
using namespace std;

int main()
{
	float a, b, c, sum, av;
	
	cout << "number 1: ";
	cin >> a;
	
	cout << "number 2: ";
	cin >> b;
	
	cout << "number 3: ";
	cin >> c;
	
	sum=a+b+c;
	av=sum/3;
	
	cout << "Average value is: " << av << endl;
	
	return 0;
}
*/


/*Task 5: Permutation of values
Write a program that swaps the values of two variables. Ask the user for two 
numbers, swap their values, and then display the result on the screen
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int a, b, n;
	
	cout << "First value: ";
	cin >> a;
	
	cout << "Second value: ";
	cin >> b;
	
	cout << "Before swap: " << endl;
	cout << "first value: " << a << " " << "Second value: " << b << endl;
	
	n = a;
	a = b;
	b = n;
	
	cout << "After swap: " << endl;
	cout << "First value: " << a << " " << "Second value: " << b << endl;
	
	return 0; 
}
*/

/*Task 6: Dividing numbers (If/else)
Write a program that asks the user for two numbers and outputs the result of 
their division with a floating point. Check if the divisor is zero and output an 
error message if it is.
*/


/*#include <iostream>;
using namespace std;

int main()
{
	float a, b, n;
	
	cout << "Number 1: ";
	cin >> a;
	
	cout << "Number 2: ";
	cin >> b;
	
	n=a/b;
	
	if(a !=0 && b!=0)
	{
		cout << "Value is: " << n << endl;
	}
	else
	{
		cout << "Error ";
	}
	
	return 0;
}
*/

/*Task 7: Parity check (If/else)
Write a program that asks the user for an integer and checks if it is even. 
Display the corresponding message on the screen
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int n;
	
	cout << "Integer: ";
	cin >> n;
	
	if( n%2 == 0 )
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

/*Task 8: Comparison operators (If/else)
Write a program that asks the user for two numbers and checks whether the 
first number is greater than, less than, or equal to the second number. Display 
the corresponding message on the screen
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int a,b;
	
	cout << "Number 1: ";
	cin >> a;
	
	cout << "Number 2: ";
	cin >> b;
	
	if(a>b)
	{
		cout << "First value greater than second " << endl;
	}
	else if(a<b)
	{
		cout << "First value less than second " << endl;	
	}	
	else
	{
		cout << "First value equals to the second" << endl;
	}
	
	return 0;
}
*/

/*Task 9: Checking the leap year (If/else)
Write a program that asks the user for the year and checks if it is a leap year. 
Display the corresponding message on the screen.
1400
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int n;
	
	cout << "Year: ";
	cin >> n;
	
	if( n%4 == 0)
	{
		cout << "Leap year";
	}
	else
	{
		cout << "Not leap year";
	}
	
	return 0;
	
}
*/

/*Task 11: Checking for divisibility (If/else)
Write a program that asks the user for a number and checks whether it is 
divisible by 3 and 5 at the same time. Display the corresponding message on 
the screen.
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int n;
	
	cout << "Number: ";
	cin >> n;
	
	if( n%3==0 && n%5==0)
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


/*Task 12: Time Converter
Write a program that asks the user for the time in seconds and converts it to 
hours, minutes and seconds. Display the result on the screen
*/


/*#include <iostream>;
using namespace std;

int main()
{
	float s;
	cout << "Second: ";
	cin >> s;
	
	float h, m, n;
	h=s/3600;
	cout << "Hours is: " << h << endl;
	
	
	m=s/60;
	cout << "Minutes is: " << m << endl;
	
	n=s;
	cout << "Second is: " << n << endl;
	
	return 0;
}
*/


/*Task 13: Calculating the sum of numbers
Write a program that asks the user for two numbers and calculates their sum. 
Display the result on the screen.
*/


/*#include <iostream>;
using namespace std;

int main()
{
	int a,b;
	
	cout << "Number 1: ";
	cin >> a;
	
	cout << "Number 2: ";
	cin >> b;
	
	int sum;
	sum=a+b;
	
	cout << "Sum of numbers is: " << sum << endl;
	
	return 0;
}
*/

/*Task 14: Exponentiation
Write a program that asks the user for a number and its degree, and then 
calculates the result of raising the number to the specified degree. Display the 
result on the screen
*/

/*#include <iostream>;
#include <cmath>
using namespace std;

int main()
{
	int n, d;
	cout << "Number : ";
	cin >> n;
	
	cout << "Degree: ";
	cin >> d;
	
	int p=0;
	p=pow(n, d);
	
	cout << "Number is: " << p << endl;
	
	return 0;
}
*/

/*Task 16: Checking for a prime number (for, while or do while) +/- function
Write a program that asks the user for a number and checks if it is prime. 
Display the corresponding message on the screen
*/

/*#include <iostream>;
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "number: ";
	cin >> n;
	
	int a=0;
	
	for(int i=2; i<n; ++i)
	{
		if(n%i == 0)
		{
			a++;
		}
	}
	
	if(a == 0)
	{
		cout << "It is prime number" <<endl;
	}
	else
	{
		cout << "It is not prime number" << endl;
	}
	
	return 0;
}
*/

/*Task 17: Finding the maximum number (If/else)
Write a program that asks the user for three numbers and finds the largest of 
them. Display the result on the screen
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int a, b, c;
	
	cout << "Number 1: ";
	cin >> a;
	
	cout << "Number 2: ";
	cin >> b;
	
	cout << "Number 3: ";
	cin >> c;
	
	if(a>b && a>c)
	{
		cout << "the largest number is: " << a << endl;
	}
	else if(b>a && b>c)
	{
		cout << "the largest number is: " << b << endl;
	}
	else
	{
		cout << "the largest number is: " << c << endl;
	}
	
	return 0;
}
*/

/*Task 19: Calculating the sum of numbers in a given range (for, while or do 
while)
Write a program that asks the user for two integers (the beginning and the end 
of the range) and calculates the sum of all the numbers in this range. Display 
the result on the screen
1  4 = 2+3
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	
	cout << "Number 1: ";
	cin >> a;
	
	cout << "Number 2: ";
	cin >> b;
	
	int sum=0;
	for(int i=a+1; i<b; ++i)
	{
		sum += i;
	}
	cout << "Number is: " << sum << endl;
	
	return 0;
}
*/


/*Task 21: Printing numbers from 1 to 10 (for, while or do while)
Write a program that prints numbers from 1 to 10 inclusive
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	for(int i=1; i<=10; ++i)
	{
		cout << i << endl;
	}
	
	return 0;
}
*/

/*Task 22: Printing numbers from 10 to 1 in reverse order (for, while or do 
while)
Write a program that prints numbers from 10 to 1 in reverse order.
*/


/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	for (int i=10; i>=1; --i)
	{
		cout << i << endl;
	}
	
	return 0;
}
*/

/*Task 23: Printing even numbers from 1 to 20 (for, while or do while)
Write a program that prints all even numbers from 1 to 20.
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	for(int i=1; i<=20; ++i)
	{
		if(i%2 == 0)
		{
			cout << i << endl;
		}
	}
	
	return 0;
}
*/


/*Task 24: Printing odd numbers from 1 to 20 (for, while or do while)
Write a program that prints all odd numbers from 1 to 20
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	for( int i=1; i<=20; ++i)
	{
		if(i%2 == 1)
		{
			cout << i << endl;
		}
	}
	
	return 0;
}
*/


/*Task 25: Calculation of the factorial of a number (for, while or do while)
Write a program that asks the user for a number and calculates its factorial. 
The factorial of the number n is denoted by n! and is equal to the product of all 
natural numbers from 1 to n. Display the result on the screen
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int n;
	
	cout << "Number : ";
	cin >> n;
	
	int factorial=1;
	
	for(int i=1; i<=n; ++i)
	{
		factorial *= i;
	}
	
	cout << "Number of factorial is: " << factorial << endl;
	
	return 0;
}
*/


/*Task 26: Checking for a prime number (for, while or do while)
Write a program that asks the user for a number and checks if it is prime. 
Display the corresponding message on the screen.
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int n;
	
	cout << "Number: ";
	cin >> n;
	
	
	int r=0;
	for(int i=2; i<n; ++i)
	{
		if(n % i == 0)
		{
			++r;
		}
	}
	
	if(r == 0)
	{
		cout << "It is prime number" << endl;
	}
	
	else
	{
		cout << "It is not prime number" << endl;
	}
	
	return 0;
}
*/

/*Task 27: Printing the multiplication table (for, while or do while)
Write a program that prints a multiplication table from 1 to 10.
*/


/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int a;
	cout << "Number: ";
	cin >> a;
	
	int rez;
	
	for(int i=1; i<=10; ++i)
	{
		cout << a << "*" << i << "=" << a*i << endl;
	}	
	
	return 0;
}
*/


/*Task 28: Finding the sum of numbers that are multiples of 3 or 5 (for, while or 
do while)
Write a program that asks the user for a number and calculates the sum of all 
numbers that are multiples of 3 or 5 in the range from 1 to a given number. 
Display the result on the screen.
16 = 15 + 12 + 10 + 9 + 6 + 5 + 3 + 1 = 61.
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Number: ";
	cin >> n;
	
	int sum=0;
	for(int i=1; i<=n; ++i)
	{
		if(i%5 == 0 || i%3 == 0)
		{
			sum += i;	
		}
	}
	
	cout << sum << endl;
	
	return 0;
}
*/

/*Task 29: Finding the greatest common divisor (GCD) (for, while or do while)
+/- function
Write a program that asks the user for two numbers and calculates their 
greatest common divisor (GCD) using the Euclid algorithm. Display the result 
on the screen.
4  12 = 4,12
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	
	cout << "Number 1: ";
	cin >> a;
	
	cout << "Number 2: ";
	cin >> b;
	int gcd;
	
	for(int i=1; i<=a && i<=b; ++i)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	
	cout << "The Greatest common divisor is: " << gcd << endl;
	
	return 0;
}
*/

/*Task 30: Finding the smallest common multiple (SCM) (for, while or do while)
+/- function
Write a program that asks the user for two numbers and calculates their 
smallest common multiple (SCM) using the formula: SCM = (number1 * 
number2) / (GCD) (number1, number2). To calculate the node, use the Euclid 
algorithm. Display the result on the screen.
54 65 = 3510
*/


/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	
	cout << "number 1: ";
	cin >> a;
	
	cout << "number 2: ";
	cin >> b;
	
	int n, m, scm;
	
	for(int i=1; i<=a; ++i)
	{
		if(a%i == 0)
		{
			n = i;
		}
	}
	for(int j=1; j<=b; ++j)
	{
		if(b%j == 0)
		{
			m = j;
		}
	}
	scm = m * n;
	
	cout << "The smallest common multiple is: " << scm << endl;
	
}
*/

/*Task 31: Finding the sum of the digits of a number (for, while or do while)
Write a program that asks the user for a number and calculates the sum of its 
digits. Display the result on the screen.
3  5  = 3+5=8
*/


/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int abc;
	cout << "Number: ";
	cin >> abc;
	
	int a = abc/100;
	int b = (abc/10)%10;
	int c = abc%10;
	
	cout << a+b+c << endl;
	
	return 0;
}
*/
	
 
           

/*Task 32: Checking for a perfect number (for, while or do while) +/- function
Write a program that asks the user for a number and checks whether it is 
perfect. A perfect number is a number equal to the sum of all its divisors, 
excluding the number itself. For example, 6 is a perfect number, since 6 = 1 + 2 
+ 3 . Display the corresponding message on the screen.
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Number: ";
	cin >> n;
	
	int a, b, sum=0;
	
	for(int i=1; i<n; ++i)
	{
	if(n%i == 0)
	{
		sum += i;
		b=sum;
	}
	}
	
	if(sum == n)
	{
		cout << "It is a perfect number" << endl;
	}
	
	else
	{
		cout << "It is not a perfect number" << " " << b << endl;
	}
	
	return 0;
}
*/

/*Task 34: Finding the largest digit in a number (for, while or do while)
Write a program that asks the user for a number and finds the largest digit in 
that number. Display the result on the screen.
156 = 6   957 = 9  524 = 5
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout <<"Number is: ";
	cin >> n;
	
	int a = n/100;
	int b = (n/10)%10;
	int c = n%10;
		
	if(a > b && a > c)
	{
		cout << "The largest digit is: " << a;
	}
	else if(b > a && b > c)
	{
		cout << "The largest digit is: " << b;
	}
	else
	{
		cout << "The largest digit is: " << c;
	}
	
	return 0;\
}
 */
 
 
 /*Task 35: Finding the smallest digit in a number (for, while or do while)
Write a program that asks the user for a number and finds the smallest digit in 
that number. Display the result on the screen.
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Number: ";
	cin >> n;
	
	int a=n/100;
	int	b=(n/10)%10;
	int	c=n%10;
	
	if(a<b && a<c)
	{
		cout << "The smallest digit is: " << a;
	}
	else if(b<a && b<c)
	{
		cout << "The smallest digit is: " << b;
	}
	else
	{
		cout << "The smallest digit is: " << c;
	}
	
	return 0;
}
*/

/*Task 38: Reverse the number (for, while or do while)
Write a program that asks the user for a number and outputs it in reverse 
order. For example, for the number 12345, the program should output 54321.
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int a;
	cout << "Number: ";
	cin >> a;
	
	int n, sum=0;
	for(int i=a; a!=0; a=a/10)
	{
		n=a%10;
		sum = sum*10+n;
	}
	cout << "Number in reverse order is: " << sum << endl;
	
	return 0;
}
*/


/*Task 39: Checking for Armstrong Number (Armstrong Number) (for, while or 
do while) +/- function
Write a program that asks the user for a number and checks if it is an 
Armstrong number. An Armstrong number is a number that is equal to the sum 
of its digits raised to a power equal to the number of digits. For example, 153 is 
an Armstrong number, since 1^3 + 5^3 + 3^3 = 153. Display the corresponding 
message on the screen.
153 = 153
*/


/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Number: ";
	cin >> n;
	
	int a,b,sum=0;
	a=n;
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		sum=sum+b*b*b;
	}
	if(n == sum)
	{
		cout << "This number is Armstrong: " << endl;
	}
	else
	{
		cout << "This number is not Armstrong" << " " << sum << endl;
	}
	
	return 0;
}
*/


/*Task 40: Finding the factorial of a number (for, while or do while) +/- function
Write a program that asks the user for a number and calculates its factorial. 
The factorial of a number is the product of all natural numbers from 1 to a 
given number. For example, the factorial of the number 5 is 5! = 5 * 4 * 3 * 2 * 
1 = 120. Display the result on the screen.
*/

/*#include <iostream>;
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Number: ";
	cin >> n;
	
	int factorial=1;
	for(int i=1; i<=n; ++i)
	{
		factorial *= i;
	}
	
	cout << "This factorial equals: " << factorial << endl;
	
	return 0;
}
*/

/*Task 41: Checking for a prime number (for, while or do while) +/- function
Write a program that asks the user for a number and checks if it is prime. A 
prime number is a number that is divisible without remainder only by 1 and by 
itself. Display the corresponding message on the screen.
*/

/*#include <iostream>;
using namespace std;
int main()
{
	int n;
	cout << "Number: ";
	cin >> n;
	
	int a=0;
	for(int i=2; i<n; ++i)
	{
		if(n%i == 0)
		{
			++a;	
		}
	}
	
	if(a == 0)
	{
		cout << "It is a prime number" << endl;
	}
	else
	{
		cout << "It is a not prime number" << endl;
	}
	
	return 0;
}
*/

/*Task 42: Generating prime numbers in the range (for, while or do while) +/-
function
Write a program that asks the user for the beginning and end of a range and 
outputs all prime numbers in that range. Display the result on the screen.
14=13,11,7,5,3,2
*/

/*#include <iostream>;
using namespace std;
int main()
{
	int n;
	cout << "Number: ";
	cin >> n;
	
	int a=0;
	for(int i=2; i<n; ++i)
	{
		for(int j=2; j<i; ++j)
		{
			if(i%j == 0)
			{
				++a;
			}
		}
		if(a==0)
		cout << i << endl;
		a=0;
	}
	
	return 0;
}
*/

/*Task 44: Output of the multiplication table (for, while or do while)
Write a program that outputs a multiplication table from 1 to 10. Display the 
result on the screen.
*/

/*#include <iostream>;
using namespace std;
int main()
{
	int n;
	cout << "Number: ";
	cin >> n;
	
	for(int i=1; i<=10; ++i)
	{
		cout << n << "*" << i << "=" << n*i << endl;
	}
	
	return 0;
}
*/

/*
Task 45: Finding the sum of numbers in the range (for, while or do while)
Write a program that asks the user for the beginning and end of a range and 
outputs the sum of all the numbers in this range. Display the result on the 
screen.
4=1+2+3+4=10
*/

/*#include <iostream>;
using namespace std;
int main()
{
	int n;
	cout << "Number: ";
	cin >> n;
	
	int sum=0;
	
	for(int i=1; i<=n; ++i)
	{
		sum += i;
	}
	
	cout << "Sum of numbers in the range is: " << sum << endl;
	
	return 0;
}
*/


/*Task 46: Finding the largest number in the array (for, while or do while)
Write a program that asks the user for the size of an array and the elements of 
this array, and then finds the largest element. Display the result on the screen.
*/


/*#include <iostream>;
using namespace std;
int main()
{
	int n;
	cout << "Number: ";
	cin >> n;
	
	cout << "Array elements" << " ";
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin >> arr[i];
	}
	
	int max=arr[0];
	
	for(int i=0; i<n; ++i)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	cout << "largest value of array is: " << max << endl;
	
	return 0;
}
*/

/*Task 47: Finding the smallest number in the array (for, while or do while)
Write a program that asks the user for the size of an array and the elements of 
this array, and then finds the smallest element. Display the result on the 
screen.
*/

/*#include <iostream>;
using namespace std;
int main()
{
	int n;
	cout << "Number of elements: ";
	cin >> n;
	
	cout << "Array elements" << " ";
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin >> arr[i];
	}
	
	int min=arr[0];
	
	for(int i=0; i<n; ++i)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	
	cout << "Smallest value of array is: " << min << endl;
	
	return 0;
}
*/


/*Task 48: Finding the arithmetic mean of numbers in an array (for, while or do 
while)
Write a program that asks the user for the size of an array and the elements of 
this array, and then finds the arithmetic mean of all the elements. Display the 
result on the screen.
*/

/*#include <iostream>;
using namespace std;
int main()
{
	int n, arr[n];
	cout << "Number: ";
	cin >> n;
	
	cout << "Array elements: ";
	for(int i=0; i<n; ++i)
	{
		cin >> arr[i];
	}
	float av, sum=0;
	for(int i=0; i<n; ++i)
	{
		sum += arr[i];
	}
	av=sum/n;
	
	cout << "The mean value of array elements is: " << av << endl;
	
	return 0;
}
*/


/*Task 49: Finding the largest and smallest numbers in the array (for, while or do 
while)
Write a program that asks the user for the size of an array and the elements of 
this array, and then finds the largest and smallest elements. Display the result 
on the screen.
*/

/*#include <iostream>;
using namespace std;
int main()
{
	int n;
	cout << "Number: ";
	cin >> n;
	
	int arr[n];
	cout << "Array elements: ";
	for(int i=0; i<n; ++i)
	{
		cin >> arr[i];
	}
	
	int max=arr[0];
	int min=arr[0];
	
	for(int i=0; i<n; ++i)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	for(int i=0; i<n; ++i)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	
	cout << "The largest number in the array: " << max << endl;
	cout << "The smallest number in the array is: " << min << endl;
	
	return 0;
}
*/

/*
Task 50: Counting the number of even numbers in an array (for, while or do 
while)
Write a program that asks the user for the size of an array and the elements of 
this array, and then counts the number of even numbers. Display the result on 
the screen
*/

/*#include <iostream>;
using namespace std;
int main()
{
	int n, odd=0, even=0;
	cout << "Number: ";
	cin >> n;
	
	int arr[n];
	cout << "Elements of array: ";
	for(int i=0; i<n; ++i)
	{
		cin >> arr[i];
	}
	
	for(int i=0; i<n; ++i)
	{
		if(arr[i]%2==0)
		{
			++even;
		}
		else
		{
			++odd;
		}
	}
	
	cout << "Even numbers of array: " << even << endl;
	cout << "Odd numbers of array: " << odd << endl;
	
	return 0;
}
*/

