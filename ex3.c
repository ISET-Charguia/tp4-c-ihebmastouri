#include <stdio.h>
int main() {
	int n1,x,n,t[20],i;
	printf("donner un nombre decimal");
		scanf("%d",&n);
		n1=n;
		x=0;
		do{
			t[x]=n%2;
			n=n/2;
			x++;
		}while (n!= 0);

if (x>20){
	printf("nbre trés grand");

}
else{
	for (i=x;i>=0;i--){
		printf("%d",t[i]);

	}

}
}

