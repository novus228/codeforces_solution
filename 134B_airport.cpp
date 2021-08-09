/***********
Lolek and Bolek are about to travel abroad by plane. The local airport has a special "Choose Your Plane" offer. The offer's conditions are as follows:

it is up to a passenger to choose a plane to fly on;
if the chosen plane has x (x > 0) empty seats at the given moment, then the ticket for such a plane costs x zlotys (units of Polish currency).
The only ticket office of the airport already has a queue of n passengers in front of it. Lolek and Bolek have not stood in the queue yet, but they are already wondering what is the maximum and the minimum number of zlotys the airport administration can earn if all n passengers buy tickets according to the conditions of this offer?

The passengers buy tickets in turn, the first person in the queue goes first, then goes the second one, and so on up to n-th person.

Input
The first line contains two integers n and m (1 ≤ n, m ≤ 1000) — the number of passengers in the queue and the number of planes in the airport, correspondingly. The next line contains m integers a1, a2, ..., am (1 ≤ ai ≤ 1000) — ai stands for the number of empty seats in the i-th plane before the ticket office starts selling tickets.

The numbers in the lines are separated by a space. It is guaranteed that there are at least n empty seats in total.

Output
Print two integers — the maximum and the minimum number of zlotys that the airport administration can earn, correspondingly.
**********/
#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long int n,m;
	cin>>n>>m;
	long int a[m],b[m];
	for(long int i=0;i<m;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	int si = sizeof(a) / sizeof(a[0]);
	sort(a,a+si);
	long int max=0,min=0;
	long int no=n;
    while(n!=0)
    {
    	max=max+a[m-1];
    	a[m-1]=a[m-1]-1;
    	n=n-1;
	    sort(a,a+si);
    }
	int siz = sizeof(b) / sizeof(b[0]);
	sort(b,b+si);
    long int i=0;
    while(no!=0)
    {
    	if(b[i]==0)
    	{
    		min=min+b[i+1];
    		b[i+1]=b[i+1]-1;
    		no=no-1;
    		i=i+1;
    	}
    	else
    	{
	    	min=min+b[i];
	    	b[i]=b[i]-1;
	    	no=no-1; 	
		}
		sort(b,b+siz);
    }
    cout<<max<<" "<<min<<endl;
	return 0;
}