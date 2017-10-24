#include <stdio.h>
int main() {

	int T1[50], T2[50], T3[100];
	int n, m;
	int i, j, k;

	printf("Dimension du 1ére tableau : ");
	scanf("%d", &n);
	printf("Entrer les éléments de T1 :\n");
	for (i = 0; i < n; i++) {
		printf("Elément T1[%d] : ", i);
		scanf("%d", &T1[i]);
	}
	printf("Dimension du 2éme tableau   : ");
	scanf("%d", &m);
	printf("Entrer les éléments d :\n");
	for (j = 0; j < m; j++) {
		printf("Elément T2[%d] : ", j);
		scanf("%d", &T2[j]);
	}

	printf("le premier tableau :\n");
	for (i = 0; i < n; i++)
		printf("%d ", T1[i]);
	printf("\n");
	printf("deuxiéme tableau :\n");
	for (j = 0; j< m; j++)
		printf("%d ", T2[j]);
	printf("\n");

	i = 0;
	j = 0;
	k = 0;
	while ((i < n) && (j < m))
		if (T1[i] < T2[j]) {
			T3[k] = T1[i];
			k++;
			i++;
		} else {
			T3[k] = T2[j];
			k++;
			j++;
		}


		printf("Tableau aprés la fusion :\n");
		for (k = 0; k < n + m; k++)
			printf("%d ", T3[k]);
		printf("\n");

	}
