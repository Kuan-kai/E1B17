#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h> 
void one (int x);
int  two (int x);
void three(int x);
void four (int x);
void five (int x);
void six (int x);
# define SIZE 10
char seat[SIZE][SIZE];

int main(void){
	char a;
	//��ܭӤH����e�� 
	one(1);
		//��J�K�X�A�p�G���~�T���h�����{�� 
	if (!two(1)) {
		return 0;
	}
	system("CLS");
	//�M������
	//�p�G�K�X���T�A��ܿ�� 
	four(1);
	while(1){
		three(1);
		scanf("%c",&a);
		if(a=='a'){
			five(1);
			system("pause");
			system("CLS");
			fflush(stdin);
			continue;
		if(a=='b');
		}

		
		
			}
}
void one (int x){
	//�㦳�U�H���檺�e�� 
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
	printf("��                               -�{���@�~3           ��\n");
	printf("��                                                    ��\n");
	printf("��^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^��\n");
	printf("��<             �s�g��:���a��                        >��\n");
	printf("��vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv��\n");
	printf("��                                                    ��\n");
	printf("��                                                    ��\n");
	printf("��                                                    ��\n");
	printf("��                             ���U���N��}�l�ϥ� ....��\n");
	printf("��                                                    ��\n");
	printf("������������������������������������������������������������������������������������������������������������\n");
	system("pause");
	system("cls");
}
int two (int x){
	int i,a,b=0,B=0,ok;
	char P[]="123123";
	char pass[6];

	while(1){
	printf("�п�J�K�X(6��):");
	for(i=0;i<6;i++){
		fflush(stdin);
		pass[i]=getch();
		if(pass[i]=='\r') break;
		printf("*");
	}
	pass[i]='\0';
	ok=strcmp(pass,P);
	if(ok==0) {
			printf("\nwelcome\n");
		break;
	}
	
	else {
		printf("�K�X�����T\n");
		B++;
		}
	if(B==3)
		return 0;
	
	}
	return 1;
	}
void three (int x){
	printf("----------[Booking System]----------\n"
"| a. Available seats |\n"
"| b. Arrange for you |\n"
"| c. Choose by yourself |\n"
"| d. Exit |\n"
"------------------------------------\n");
}
void four (int x){
	int count = 0, row, col;
	srand(time(NULL));
	int i,j;
	for (i = 0; i <SIZE; i++)
        for (j = 0; j < SIZE; j++){
        	 seat[i][j] = '-';
		}
           
    
	while (count < 10) {
        row = rand() % SIZE;
        col = rand() % SIZE;
        if (seat[row][col] != '*') { // �קK���Ʀ�m
            seat[row][col] = '*';
            count++;
        }
    }       
            
}
void five(int x){
	 int i,j;
	 printf("\\123456789\n"); // ����渹
    for ( i = 1; i < SIZE; i++) {
        printf("%d", SIZE - i); // �ϦV�C���]9��1�^
        for ( j = 1; j < SIZE; j++) {
            printf("%c", seat[i][j]);
        }
        printf("\n");
    }
}

