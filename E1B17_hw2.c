#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i,j,a,b=0,g,h,k;
	char c,e,space,ch,d,l;
	
	printf("������������������������������������������������������������������������������������������������������������\n");
	printf("��                                                    ��\n");
	printf("��    �i�i�i�i�i �i�i�i�i�i �i�i�i�i�i �i�i�i�i�i                         ��\n");
    printf("��        �i �i   �i     �i �i                             ��\n");
    printf("��    �i�i�i�i�i �i   �i �i�i�i�i�i �i�i�i�i�i                         ��\n");
    printf("��    �i     �i   �i �i         �i                         ��\n");
    printf("��    �i�i�i�i�i �i�i�i�i�i �i�i�i�i�i �i�i�i�i�i                         ��\n");
	printf("��                                                    ��\n");
	printf("��                                                    ��\n");
	printf("��       �w��Ө�E1B17���{���]�p                      ��\n");
	printf("��                               -�{���@�~2           ��\n");
	printf("��                                                    ��\n");
	printf("��              �s�g��:���a��                         ��\n");
	printf("��                                                    ��\n");
	printf("��                                                    ��\n");
	printf("��                                                    ��\n");
	printf("��                                                    ��\n");
	printf("��                             ���U���N��}�l�ϥ� ....��\n");
	printf("��                                                    ��\n");
	printf("������������������������������������������������������������������������������������������������������������\n");
	system("pause"); 
	
	
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
	while(1){
		if(a==2025){
			printf("__________________\n"); 
			printf("|a.�e�X�����T����|\n");
			printf("|b.��ܭ��k��    |\n");
			printf("|c.����          |\n");
			printf("__________________\n"); 
		}
	fflush(stdin);
	scanf("%c",&e);
		if(e=='a'||e=='A'){
		
			system("CLS");
		//�T�w��J�OA~N 
		do{
			printf("�п�J�@��a��n���r��");
			fflush(stdin);
			scanf("%c",&c) ;	
		}while(c<='a'||c>='o');
	
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
    getch();
		system("CLS");
		continue;
	}
	//	
	else if(e=='b'||e=='B'){
	do{
			printf("��J�@��1��9�����:");
			fflush(stdin);
			scanf("%d",&g) ;	
	if(g<1||g>9){
		printf("���~��J�Э��s");
		printf("\a");
		}
	}while(g<=1||g>=9);
	for(h=1;h<=g;h++){
		for(k=1;k<=g;k++){
		printf(" %d*%d=%d",h,k,h*k);
		}
		printf("\n");	
	}
	getch();
		system("CLS");
		continue;
	}
	
	else if(e=='c'||e=='C'){
	printf("\'Continue?(y/n)\'\n");
	printf("�p�G�n���s��J�A�Х�Y�A�Y��JN�h�^��@�~�t��");
	
	do{
	fflush(stdin);
	scanf("%c",&l);
	if(l=='Y'||l=='y'){
		system("cls");
		break;
	}
		
	else if(l=='N'||l=='n'){
		system("cls");
		printf("�{������");
		return 0;
	}
	else{
		printf("���~��J�Э��s��J:"); 
	}
		
	}while(1);
	}
	else{
		system("cls");
		printf("���~��J�Э��s��J\n");
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	
	return 0;
}
