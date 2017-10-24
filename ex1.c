#include <stdio.h>


int main() {
	int t[20];
	int n,i,s;
	double m;
	do{printf("donner l'element du tableau");
	scanf("%d",&n);

	}while (n>20);

	s=0;
	for (i=0;i<n;i++){
		scanf("%d",&t[i]);
				s=s+t[i];

	}
	m=s/n;
printf("la moyenne : %f\n ",m);

}
