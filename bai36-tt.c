
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10001

int min(int a, int b)
{
	return a<b ? a:b;
}

int lastOccurrence(char *P, char x) // tim vi tri xuat hien cuoi cung cua kitu x trong chuoi P
{
	for(int i=strlen(P)-1; i>=0; i--)
	{
		if(P[i] == x)
			return i;
	}
	return -1;
}

int notMatch(char *T, int x) //kitu tai vi tri x trong chuoi T da xuat hien truoc do chua 
{
	for(int i=0; i<x; i++)
	{
		if(T[i] == T[x])
			return 0;
	}
	return 1;
}

void table_L (char *T, char *P)
{	
	printf("\nLast occurrence\n");
	printf("%5s", "x");	
	for (int i=0; i<strlen(T); i++) //duyet T de in kitu ko trung 
	{
		if(notMatch(T, i))
			printf("%5c", T[i]);
	}
	printf("\n");
	printf("%5s", "L(x)");	
	for(int i=0; i<strlen(T); i++) // duyet qua chuoi T
	{
		if(notMatch(T, i))
			printf("%5d", lastOccurrence(P, T[i])); // tinh va in vitri xuat hien cuoi cung cua x trong P
	}
	printf("\n");
}

void BoyerMooreSearch(char *T, char *P)
{
	int m = strlen(P);	//do dai mau P
	int i = m - 1; //vi tri cuoi cung cua mau P trong T
	int j = m - 1;	// vi tri cuoi cung cua mau P
	int flag = 0;	
	
	while(i <= strlen(T))
	{
		if(T[i] != P[j]) //ko khop dich chuyen i, j
		{
			i = i + m - min(j, 1 + lastOccurrence(P, T[i]));
			j = m - 1;
		}
		else
		{			
			if(j == 0)
			{			
				printf("\nVi tri xuat hien cua P trong T la %d", i);
				flag = 1;
				break; //i = i + m; j = m - 1;
			}
			i--;
			j--;
		}
	}
	if(flag == 0) 
		printf("\nNot found!");		
}

int main()
{
	char T[MAX], P[MAX];
	printf("Nhap chuoi T: ");
	gets(T);
	printf("Nhap chuoi P: ");
	gets(P);
		
	table_L(T, P);
	BoyerMooreSearch(T, P);

	return 0;
}
/*
	Truong hop cai tien hon vet can
	T = "aaaaaaaaaab"
	P = "aab"
*/
