/*Problem	D.	Division	and	remainders	
Schoolboy Vanya decided to do his FEE homework. He was given a very difficult task, few 
people can cope with it. But you will help him. You are given two numbers a and b. You 
should output three answers: usual division a on b, division without remainder a on b, 
remainder a on b. 
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
	
	double div=A/B;
	double divis=A/B;
	int rem=A%B;
	
	cout << "Division: " << div << endl;
	cout << "Division without remainder: " << divis << endl;
	cout << "Remainder: " << rem << endl;
	
	return 0;
}
*/

/*Problem	E.	Sum	of	digits	in	number	
One day Ioann decided to go to the store and buy something. He can buy 1,2 or 3 goods. 
Ioann received a check with the sum n. Each digit in number n represents the price of the 
each item. How much should Ioann pay? 
454  13
*/

/*#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	string b;
	int a=0;
	cin>>b;
	for (int i=0; i<b.size(); ++i){
		a += (b[i]-48);
	}
	cout << a;
	return 0;
}
*/





/* Problem	G. Sum	and	Average	
Help Bakdaulet to find the average number of input numbers and the sum of these 
numbers.
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int n;
	float sum=0,arr[100],ave;
	cout << "Number of elements: ";
	cin >> n;
	cout << "array elements: ";
	for(int i=0; i<n; ++i)
	{
		cin >> arr[i];	
	}
	
	for(int i=0; i<n; ++i)
	{
		sum += arr[i];
	}
	ave=sum/n;
	cout << "Average: " << ave << endl;
	cout << "Sum: " << sum << endl;
	
	return 0;
}
*/

/*Problem	I.	Does	a	triangle	exist?	
Given three natural numbers a, b, c, written in separate lines. You need to check whether 
there is a triangle with such sides
3 4 5
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	if((a+b+c)%3==0)
	{
		cout << "Yes";}
	else{
		cout << "No";}
	
	return 0;
}
*/

/*Problem	L.	How	long	have	I	been	here?	
Is time relative or not? I’ve already counted N seconds, I wonder how much time has passed 
since I started. Help me create something like a clock. I hope you can do it.
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int h, m, s;
	h=n/3600;
	m=(n/60)%60;
	s=n%60;
	
	cout << h << " : " << m << " : " << s << endl;
	
	return 0;
}
*/

/*Problem	O.	+,	- ,	*	,	-
You need to create a mini calculator.
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int a, b, x;
	cin >> a >> b; 
	cin >> x;
	
	switch(x)
	{
		case '+':
			cout << a << " + " << b << " = " << a+b << endl;
			break;
			
		case '-':
			cout << a << " - " << b << " = " << a-b << endl;
			break;
		
		case '*':
			cout << a << " * " << b << " = " << a*b << endl;
			break;
		
		case '/':
			if(b != 0.0)
				cout << a << " / " << b << " = " << a/b << endl;
			else
				cout << "Not equals";
			break;
		default:
			cout << "Error";
			break;
		
	}
	
	return 0;
}
*/


/* Problem	R.	Array	modes	
You are given an array of integer numbers. Print its mode. Mode is the number that occurs 
most frequently in the array. If there is several modes, print them in descending order.
*/

/*#include <iostream>;
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; ++i)
	{
		cin >> arr[i];
	}
	int max=0;
	for(int i=0; i<n; ++i)
	{
		for(int j=i+1; j<n; ++j)
		{
			if(arr[i]==arr[j])
			{
				++arr[j];
			}
		}
	}
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
		if(arr[j]>max)
		{
			max=arr[j];
		}
	}
	}
	
	cout << max;
	
	return 0;
}
*/

/*Problem	S.	Not	a	palindrome	
You’re given string s. Print the maximum length of its substring that is not a palindrome. If 
there is no such substring print 0. 
Input	
The only line of input contains string s	(1	≤	length(s)	≤	100). Output	
Print the maximum length of substring of given string that is not a palindrome.
*/

/*#include <iostream>;
#include <string>
using namespace std;

int main()
{
	string n,r;
	cin>>n;
	
	for(int i=0;i<n.size()/2; ++i){
		if(n[i]!=n[n.size()-1-i]){
			cout<<n[i];
			return 0;
		}
	}
	cout << "0";
	
}
*/


/*Problem	X.	73314.	Shift+delete	
Have you ever tried to create your own language? Akerke, another hero of our legends, 
states that it is very simple! She just picks up one letter of the Latin alphabet and never uses 
that letter anymore. That is the way how she comes up with a new language. 
Now, when her language has become very popular among her friends, she decided to make 
a translator. As she is not a programmer, she dared to ask for your help in this. The 
translator should get a string, delete all occurrences of some letter and output the modified 
string. 
Can you help Akerke in creating a translator?
*/


/*#include <iostream>;
#include <string>;
#include <algorithm>;
using namespace std;

int main()
{
	string s;
	char rem;
	cin >> rem;
	cin >> s;
	s.erase(remove(s.begin(), s.end(), rem), s.end());
	cout << s << endl;
	
	return 0;
}
*/
