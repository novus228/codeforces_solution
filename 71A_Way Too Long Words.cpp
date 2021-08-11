#include <bits/stdc++.h>
using namespace std;
 
void test(string str)
{
	int len;
	len=str.length();
	if(len<=10)
		cout<<str<<endl;
	else
		cout<<str[0]<<len-2<<str[len-1]<<endl;
}	
 
 
 
int main()
{ 
	cout.tie(0);
	int n,i;
	string str;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>str;
		test(str);
	}
return 0;
}