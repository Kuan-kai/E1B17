#include<stdio.h>
#include<stdlib.h>

int main(void){
	int password;
	int n,i,j,k;
	char m;
	printf(
	"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" 
	"|##�A�n�ڧA�n�ڧA�n�ڧA�n�ڧA�n�ڧA�n�ڧA�n��##|\n"
	"|O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0|\n");

	for(i=1;i<=5;i++){
		printf("|");
		//��J"|"
			for(j=6-i;j>=1;j--){
			printf("*");	
			}//��J�P�� *�q6��1 
		printf("                 ");
		// �[�J�ť��� 
			for(j=1;j<=i;j++){
				printf("*");	
			}//��J�P�� *�q1��6
			for(j=1;j<=i;j++){
				printf("*");	
			}//��J�P�� *�q1��6
		printf("                 ");
		// �[�J�ť���
			for(j=6-i;j>=1;j--){
				printf("*");	
				}//��J�P�� *�q6��1
		printf("|");
		//��J"|"
		printf("\n");
		//���� 
	}
	for(i=1;i<=5;i++){
		printf("|");
		//��J"|"
		for(j=1;j<=i;j++){
			printf("*");	
		}//��J�P�� *�q1��6
	printf("                 ");	
		// �[�J�ť���
		for(j=6-i;j>=1;j--){
			printf("*");	
		}//��J�P�� *�q6��1	
		for(j=6-i;j>=1;j--){
			printf("*");	
		}//��J�P�� *�q6��1	
	printf("                 ");
		// �[�J�ť���
		for(j=1;j<=i;j++){
			printf("*");	
		}//��J�P�� *�q1��6	
	printf("|");
	//��J"|"
	printf("\n");
	//���� 
	}//�άP����{�X<> 
	

	printf(
	"|O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0|\n"	
	"|##�A�n�ڧA�n�ڧA�n�ڧA�n�ڧA�n�ڧA�n�ڧA�n��##|\n"
	"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	);
	
	system("pause");//�t�μȰ� 
	system("CLS");//�M���e�� 
	

	printf("��J4��ƱK�X:");
	scanf("%d",&password);
	if(password==2025)//�K�X�O�_��2025 
	{
	
		printf("�w��A\n");

		system("pause");//�t�μȰ�
		system("CLS");//�M���e�� 
	
	printf(
	"�п�J�U�C�r��:\n"
	" 'A'~'Z' :Uppercase\n"
	" 'a'~'z' :Lowercase\n"
	" '0'~'9' :Digit\n"
	"Otherwise:Your name\n");
		fflush(stdin);//�M���w�İ� 
		scanf("%c",&m);
		if(m>='A'&&m<='Z') 
		printf("Uppercase");
		else if(m>='a'&&m<='z')
		printf("Lowercase");
		else if(m>='0'&&m<='9')
		printf("Digit");
		else
			printf("E1B17  ���a��");
			//�P�_��J��ܦU�ؿ�X 
	} 

	
	else
		printf("�K�X���~\n");
		//�K�X����2025�ɿ�X���~ 

	system("pause");//�t�μȰ� 
	return 0;

}
//�b�o�����礤�ڤj�q���ϥ�for loop�Mif-else�ƲߤF�W�Ǵ��������x���j��A�]�Ĥ@�����W���ѡA�ҥH���o����J��
//�Ӧb�������L�{���A�ڤ]��[���x�o�ӵ{�����y�{�C 
