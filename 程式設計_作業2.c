#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i,j,a,b=0;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
		printf("%d",j);	
		}
		printf("\n");
	}
	printf("�ڬOE1B17 ���a��\n");
	for(i=1;i-1<=9;i++){
		for(j=9;j>=i;j--){
		printf("%d",j);	
		}
		printf("\n");
	}
	
	while(1){
		if(b==3){
			printf("\a");
			printf("�K�X���~�T��");
			return 0;
		}
		printf("�п�J�K�X:");
		scanf("%d",&a);
		if(a==2025)
			break;
		else
			b++;
	}
	system("CLS");
	system("pause");
	return 0;
}
