#include<stdio.h>
#include<stdlib.h>
void one (int x);
int  two (int x);

int main(void){
	
	//��ܭӤH����e�� 
	one(1);
		//��J�K�X�A�p�G���~�T���h�����{�� 
	if (!two(1)) {
		return 0;
	}
	
	system("CLS");
	//�M������
	//�p�G�K�X���T�A��ܿ�� 
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
}
int two (int x){
	int a,b=0;
	while(1){
		if(b==3){
			printf("\a");
			printf("�K�X���~�T��");
			return 0;
		}
		printf("�п�J�K�X:");
		scanf("%d",&a);
		if(a==2025)
			
			return 1;
		else
			b++;
	}
	
	
}
