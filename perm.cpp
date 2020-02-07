#include <bits/stdc++.h>
using namespace std;

void swap( char *char_1, char *char_2);

void permutation(char* array, int lower, int size)
{
	if(lower==size)
	{
		cout << array << "\n";
	}
	else
	{
		for(int count=lower;count<=size;count++)
		{
			swap((array+lower),(array+count));
			permutation(array,lower+1,size);
			swap((array+lower),(array+count));
		}
	}
}

int main()
{
	char list[3]={'x','y','z'};
	int length=strlen(list);
	permutation(list,0,length-1);
	return 0;
}

void swap( char *char_1, char *char_2)
{
	char temp;
	temp=*char_1;
	*char_1=*char_2;
	*char_2=temp;
}
