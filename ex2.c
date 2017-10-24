#include <stdio.h>
int main() {
	int t[10];
	int tn[10];
	int tp[10];
	int n,j,k,i;
	do{printf("donner l'element du tableau");
		scanf("%d",&n);

		}while (n>10);
	j=0;
				k=0;
	for (i=0;i<n;i++){
			scanf("%d",&t[i]);

					if (t[i]<0){
						tn[j]=t[i];
						j++;

					} else
					{
						tp[k]=t[i];
						k++;
					}

		}
	for (i=0;i<j;i++){
		printf ("tn: %d\n",tn[i]);

	}

	for (i=0;i<k;i++){
			printf ("tp:%d\n",tp[i]);

		}
}
