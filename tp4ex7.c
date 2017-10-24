/*
 ============================================================================
 Name        : tp4ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const int max_l=20;
	const int max_c=20;
	int T[max_l][max_c];
	int l,c,i,j,s;
	float moy;

	do {printf("donner le nombre de ligne et de colonnes :");
			scanf("%d,%d",&l,&c);
	}while(l<0 || l>20 || c<0 || c>20  );
	s=0;
for(i=0;i<=l;i++)
{
	for(j=0;j<=c;j++)
	{
scanf("%d",&T[i][j]);
s=s+T[i][j];
	}
}
moy=s/(l*c);
printf("la somme %d \n" ,s);
printf("la moyenne %.2f",moy);
}
