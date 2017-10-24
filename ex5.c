#include <stdio.h>
int main() {
	int t[10],n,i,rep,min,x,y,p;
	do{
	printf("donner la taille du tableau\n");

			scanf("%d",&n);

			}while (n>10);
	for (i=0;i<n;i++){
		printf("donner l'element %d\n",i+1);
				scanf("%d",&t[i]);}
	do{
printf("1. Déterminer le minimum de ses éléments.\n  ");
printf("2. Remplacer toutes les occurrences d’un entier x dans le tableau par un entier y. \n ");
printf("3. Insérer un entier x à une position p donnée du tableau, sans écraser son contenu. \n  ");
printf("4. Supprimer toutes les occurrences d’un entier x, du tableau, en décalant les éléments du tableau à chaque suppression.\n ");
scanf("%d",&rep);
switch (rep)
{
case 1:
{min=t[0];
for (i=0;i<n;i++){
if (t[i]	< min) {
	min=t[i];
}
}
printf("le minimum : %d",min);

}
  break;
case 2:
{printf("donner x et y ");
scanf ("%d %d",&x,&y);
for (i=0;i<n;i++){
	if (t[i] == x) {
		t[i]=y;
	}
}

}
  break;
case 3:
{printf("donner la position ");
scanf("%d",&p);

}

  break;
case 4:

  break;
default:

}
	} while (n!=5)

}
