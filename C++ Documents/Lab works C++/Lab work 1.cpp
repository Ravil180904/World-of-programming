/*#include <iostream>;
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a[N];
	
	for(int i=0; i<N; ++i)
	{
		cin >> a[i];
	}
	
	int min=0, n=-1, sum=0;
	for(int i=0; i<N-1; ++i)
	{
		if(sum < min)
		{
			
		}
	}
	
	return 0;
}*/

/* C. Given two strings. Each string contains lower case English letters and the # symbol, 
which means you typed backspace. Check if two strings are equal.
*/

/*#include <iostream>;
using namespace std;

bool letters(const char * string)
{
	int counter[26]={0};
	for(int i=0; string[i]!='\0'; ++i)
	{
		int index=string[i]-'a';
		if(counter[index]>0)
		{
			return true;
		}
		++counter[index];
	}
	return false;
}

int main()
{
	char string[100];
	cin >> string;
	
	if(letters(string))
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

/* F Just print n-th prime number.
#include <iostream>;
using namespace std;

bool isprime(int n)
{
	if(n<2)
	{
		return false;
	}
	for(int i=2; i*i<=n; ++i)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n=2, a=0, b, q=0;
	cin >> b;
	
	while(true)
	{
		if(isprime(n))
		{
			++a;
		}
		if(a==b)
		{
			break;
		}
		++n;
	}
	
	cout << n;
}
*/


/* H Asman is very curious and likes to check whether some number is prime or not. 
Check if the number is prime. A prime number is a number that has only 2 divisors, it is 1
and the number itself.
*/

/*#include <iostream>;
using namespace std;

bool isprime(int n)
{
	if(n<2)
	{
		return false;
	}
	for(int i=2; i*i<=n; ++i)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	
	return true;
}

int main()
{
	int n;
	cin >> n;
	
	if(isprime(n))
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

