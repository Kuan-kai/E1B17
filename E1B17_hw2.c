#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i,j,a,b=0;
	char c,e,space,ch,d;
	
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
	if(a==2025){
		printf("__________________\n"); 
		printf("|a.�e�X�����T����|\n");
		printf("|b.��ܭ��k��    |\n");
		printf("|c.����          |\n");
		printf("__________________\n"); 
	}
	fflush(stdin);
	scanf("%c",&e);
	if(e=='a'&&'A')
		system("CLS");
		printf("�п�J�@��a��n���r��");
		fflush(stdin);
		scanf("%c",&c) ;
		//�L�T���� 
		for (d=c;d>='a';d--) {
        // �L�Ů�
        for (space='a'; space<d;space++) {
            printf(" ");
        }
        // �L�r��
        for (ch=d;ch<=c;ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }
	system("pause");
	
	return 0;
}
