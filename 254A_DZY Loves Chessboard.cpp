/********
DZY loves chessboard, and he enjoys playing with it.

He has a chessboard of n rows and m columns. Some cells of the chessboard are bad, others are good. For every good cell, DZY wants to put a chessman on it. Each chessman is either white or black. After putting all chessmen, DZY wants that no two chessmen with the same color are on two adjacent cells. Two cells are adjacent if and only if they share a common edge.

You task is to find any suitable placement of chessmen on the given chessboard.

Input
The first line contains two space-separated integers n and m (1 ≤ n, m ≤ 100).

Each of the next n lines contains a string of m characters: the j-th character of the i-th string is either "." or "-". A "." means that the corresponding cell (in the i-th row and the j-th column) is good, while a "-" means it is bad.

Output
Output must contain n lines, each line must contain a string of m characters. The j-th character of the i-th string should be either "W", "B" or "-". Character "W" means the chessman on the cell is white, "B" means it is black, "-" means the cell is a bad cell.

If multiple answers exist, print any of them. It is guaranteed that at least one answer exists.
***********/


#include<bits/stdc++.h>
using namespace std;



int main()
{
	cin.tie(0);
	long int n,m;
	cin>>n>>m;
	char str[n][m];
	char st;
	for(long int i=0;i<n;i++)
	{
		for(long int j=0;j<m;j++)
		{
			cin>>st;
			if(st=='.')
			{
				if((i+j)%2==0)
				{
					str[i][j]='B';
				}
				else
				{
					str[i][j]='W';
				}
			}
			else
			{
				str[i][j]=st;
			}
		}
	}

	for(long int i=0;i<n;i++)
	{
		for(long int j=0;j<m;j++)
		{
			cout<<str[i][j];
		}
		cout<<endl;
	}

}


