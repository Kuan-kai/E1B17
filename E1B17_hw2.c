#include<stdio.h>
#include<stdlib.h>
int main(void){
	//�ŧi�ܼ� 
	int i,j,a,b=0,g,h,k;
	char c,e,space,ch,d,l;
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
	
	//��J�K�X�A�p�G���~�T���h�����{�� 
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
	//�M������
	//�p�G�K�X���T�A��ܿ�� 
	while(1){
		if(a==2025){
			printf("_______�D���_____\n"); 
			printf("|a.�e�X�����T����|\n");
			printf("|b.��ܭ��k��    |\n");
			printf("|c.����          |\n");
			printf("__________________\n"); 
		}
	fflush(stdin);
	scanf("%c",&e);
		//��JA��a�h���� 
		if(e=='a'||e=='A'){
		
			system("CLS");
		//��J�@��A~N���r���A�p�G��J���~�A�h���п�J�쥿�T 
		do{
			printf("�п�J�@��a��n���r��");
			fflush(stdin);
			scanf("%c",&c) ;	
		}while(c<='a'||c>='o');
	
		//�L�X�T���� 
		for (d=c;d>='a';d--) {
		// ���L�Ů�
        for (space='a'; space<d;space++) {
            printf(" ");
        }
        // �A�L�r��
        for (ch=d;ch<=c;ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    //��J���N��A�M���ù��ê�^��� 
	printf("���U���N���^���"); 
	getch();
		system("CLS");
		continue;
	}
	//	
	//�p�G��J��B��b�h���� 
	else if(e=='b'||e=='B'){
	//�A�n�D��J1~9�䤤�@�ӼơA�p�G��J���~�h��J�쥿�T���� 
	do{
			printf("��J�@��1��9�����:");
			fflush(stdin);
			scanf("%d",&g) ;	
	//��J���~�A��ܿ��~�õo�X�n������ϥΪ� 
	if(g<1||g>10){
		printf("���~��J�Э��s");
		printf("\a");
		}
	}while(g<=1||g>=10);
	//�L�XN�����k�� 
	for(h=1;h<=g;h++){
		for(k=1;k<=g;k++){
		printf(" %d*%d=%d",h,k,h*k);
	//��� 
		if(h*k<10){
			printf(" ");
		}
		}
		printf("\n");	
	}
	//���U���N��M���ù��ê�^��� 
	printf("���U���N���^���");
	getch();
		system("CLS");
		continue;
	}
	//�p�G��JC��c�h���� 
	else if(e=='c'||e=='C'){
	//�߰ݬO�_�n�^��@�~�t�� 
	printf("\'Continue?(y/n)\'\n");
	printf("�p�G�n���s��J�A�Х�Y�A�Y��JN�h�^��@�~�t��");
	//�T�w��J�OY�By�٬ON�Bn�A��J��L�h���s��J 
	do{
	fflush(stdin);
	scanf("%c",&l);
	//�Y��J��Y�By�h��^��� 
	if(l=='Y'||l=='y'){
		system("cls");
		break;
	}
	//��JN��n�����{��	
	else if(l=='N'||l=='n'){
		system("cls");
		printf("�{������");
		return 0;
	}
	//��J��L���s��J 
	else{
		printf("���~��J�Э��s��J:"); 
	}
	//�L���j��	
	}while(1);
	}
	//��J��L���s��J
	else{
		system("cls");
		printf("���~��J�Э��s��J\n");
		}
	}
	//�t�μȰ��A�����{�� 
	system("pause");
	
	return 0;
}
//�b�o�����{�����A��ı�o���I��²����������A��K�X��J���T��i�H�L���ϥΡC
//�o���J�����x�����ƨ�T�����^��r+�����J�A�٦��U�H����e���ڷQ�F����[ 
//�o���{���ϥΤF�ܦh�L�u�j��+�P�_����A�ڵo�{��_�n��J����while�j��A�ڧ���w�ϥγo�رo 
//�M��]���{���ܪ��A�ҥH��F����h�Ѥ~�g�n�A�p�G�٦��ɶ��A�ڷ|�յۨϥΨ�ƪ��覡���D�{�����������b�@�I
//�ŧi���ܼƤ]�|�֤@�I 
