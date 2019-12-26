#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node{                			// �ŧi�`�I
    int data;
    struct node *next;
};
struct node *newNode(int n){            // �s�W�`�I
    struct node *add = (struct node*) malloc(sizeof(struct node));
    add->data = n;
    add->next = NULL;
    return add;
}


void note(void);                 		// �����\��ƨ禡�ŧi
void compare(void);
int serch();
int totalMoney = 0;             		// ���O�ֿn

int main()
{
	char menu[50];
	printf("----DAILY COST----\n");
	system("pause");
	printf("\n");
	while(1)
	{
		printf("�п�ܥ\�� ([1]���� [2]�j�M [3]��� [0]����): ");
		scanf("%s",menu);
		switch(menu[0])
		{
			case '1':{
				note();
				break;
			}
			case '2':{
				serch();
				break;
			}
			case '3':{
				compare();
				break;
			}
			case '0':{
				printf("\n���� <DAILY COST> \n");
				exit(1);
			}
			default :{
				printf("�п�J���T�\��ﶵ!\n");
				break;
			}
		}
	}
	return 0;
}

	// �n�u-�����\��
void note(void){
    int menu;                         	// ��������
    int money;                       	// ��J���B
    int i;
    int dayMoney = 0;              		// ���O
    int money_1_to_7[8] = {0};    		// �U���زֿn��O
    char output[10];
    
    struct node *menu_A[8];         	// �ŧi���ؼ��Y�`�I
    for (i=0; i<8; i++) {
        menu_A[i] = (struct node* ) malloc(sizeof(struct node));
        menu_A[i]->next = NULL;
    }
    struct node *ptr = NULL;
    
    printf("--------�w�i�J�����\��--------\n\n");
    while (1) {
        printf("�п�J������������[1]���� [2]��q [3]�T�� [4]�ʪ� [5]���� [6]�ͬ� [7]��L [0]����: ");
        scanf("%d", &menu);
        if (menu == 0) 
            break;
        if (menu > 7 || menu < 0) {
            printf("��J���~�A�Э��s��J����\n");
            continue;
        }
        printf("�п�J���B�G ");
        scanf("%d", &money);
        dayMoney += money;
        totalMoney += money;
        switch (menu) {
            case 1:
                ptr = menu_A[menu];
                money_1_to_7[menu] += money;
                if (ptr->next == NULL) {
                    struct node *add = newNode(money);
                    ptr->next = add;
                }else {
                    struct node *add = newNode(money);
                    while (ptr->next != NULL)
                        ptr = ptr->next;
                    ptr->next = add;
                }
                break;
            case 2:
                ptr = menu_A[menu];
                money_1_to_7[menu] += money;
                if (ptr->next == NULL) {
                    struct node *add = newNode(money);
                    ptr->next = add;
                }else {
                    struct node *add = newNode(money);
                    while (ptr->next != NULL)
                        ptr = ptr->next;
                    ptr->next = add;
                }
                break;
            case 3:
                ptr = menu_A[menu];
                money_1_to_7[menu] += money;
                if (ptr->next == NULL) {
                    struct node *add = newNode(money);
                    ptr->next = add;
                }else {
                    struct node *add = newNode(money);
                    while (ptr->next != NULL)
                        ptr = ptr->next;
                    ptr->next = add;
                }
                break;
            case 4:
                ptr = menu_A[menu];
                money_1_to_7[menu] += money;
                if (ptr->next == NULL) {
                    struct node *add = newNode(money);
                    ptr->next = add;
                }else {
                    struct node *add = newNode(money);
                    while (ptr->next != NULL)
                        ptr = ptr->next;
                    ptr->next = add;
                }
                break;
            case 5:
                ptr = menu_A[menu];
                money_1_to_7[menu] += money;
                if (ptr->next == NULL) {
                    struct node *add = newNode(money);
                    ptr->next = add;
                }else {
                    struct node *add = newNode(money);
                    while (ptr->next != NULL)
                        ptr = ptr->next;
                    ptr->next = add;
                }
                break;
            case 6:
                ptr = menu_A[menu];
                money_1_to_7[menu] += money;
                if (ptr->next == NULL) {
                    struct node *add = newNode(money);
                    ptr->next = add;
                }else {
                    struct node *add = newNode(money);
                    while (ptr->next != NULL)
                        ptr = ptr->next;
                    ptr->next = add;
                }
                break;
            case 7:
                ptr = menu_A[menu];
                money_1_to_7[menu] += money;
                if (ptr->next == NULL) {
                    struct node *add = newNode(money);
                    ptr->next = add;
                }else {
                    struct node *add = newNode(money);
                    while (ptr->next != NULL)
                        ptr = ptr->next;
                    ptr->next = add;
                }
                break;
        }
    }
    printf("\n����O�G\n");
    printf("[1]�����G $%d\n", money_1_to_7[1]);
    printf("[2]��q�G $%d\n", money_1_to_7[2]);
    printf("[3]�T�֡G $%d\n", money_1_to_7[3]);
    printf("[4]�ʪ��G $%d\n", money_1_to_7[4]);
    printf("[5]�����G $%d\n", money_1_to_7[5]);
    printf("[6]�ͬ��G $%d\n", money_1_to_7[6]);
    printf("[7]��L�G $%d\n", money_1_to_7[7]);
    printf("����`��O�G $%d\n\n", dayMoney);
    while (1) {
        printf("\n�O�_��X���ֿn��O: ");
        scanf("%s",output);
        if(strcmp(output,"�O") == 0){
        	printf("���ֿn��O�G $%d\n", totalMoney);
        	printf("\n---------���������\��--------\n\n");
            printf("��^�ؿ����\n\n");
            return;
		}
		else if(strcmp(output,"�_") == 0){
			printf("\n---------���������\��--------\n\n");
            printf("��^�ؿ����\n\n");
            return;
        } 
    	else
    		printf("�Э��s��J���\n");
    }
}


	//�n�u-�j�M�\�� 
int serch()
{
	char pro_name[50];								//���~�W�� 
	char input[50];									//Ū�ɸ�� 
	char serch[10];									//�~��j�M�P�w
	printf("--------�w�i�J�j�M�\��--------\n\n");
	while(1)
	{
		FILE *pro_r = fopen("product.txt","r");		//Ū�� 
		int temp = 0;	
		if(pro_r == NULL) 
		{
			printf("�}�ɥ���\n");
			return -1;
		}					 
		printf("�п�J���~�W��: ");
		scanf("%s",pro_name);
		while(fscanf(pro_r,"%s",input) != EOF)		//Ū�J���~��� 
		{
			if(strcmp(pro_name,input) == 0)			//�M��Ӳ��~�O�_�b��Ʈw�� 
			{
				temp = 1;
				fscanf(pro_r,"%s",input);
				printf("%s	  ��ĳ���: %s��\n\n",pro_name,input);	//��X���~�W�ٻP���� 
				break;
			}
		}
		if(temp != 1)
			printf("�����Ӳ��~\n\n");
		while(1)
		{
			printf("�O�_�~��j�M: ");
			scanf("%s",serch);
			if(strcmp(serch,"�O") == 0 || strcmp(serch,"�_") == 0)
				break;
			else if(strcmp(serch,"yes") == 0|| strcmp(serch,"no") == 0)
				break;
			else
				printf("�п�J(�O/�_) (yes/no)\n");
		}	
		if(!strcmp(serch,"�_") || !strcmp(serch,"no"))
		{
			printf("\n---------�����j�M�\��--------\n\n");
			printf("��^�ؿ����\n\n");
			break;
		}
		fclose(pro_r);
	}
}


	//�n�u-����\��
void compare()
{
	char data_name[50],word[1000],countinue[10];		//���~�W�� //�~��j�M�P�w
	printf("--------�w�i�J����\��--------\n\n");
	while(1)
	{
		FILE *data;
		int t = 0;										//�O�_�n�~��j�M 
		if ((data = fopen("data.txt", "r")) == NULL) {
        printf("Error! opening file");					//Ū�ɥ���
        exit(1);
    }
		printf("�п�J���~�W��: ");
		scanf("%s",data_name);
		while(fscanf(data,"%s",word) != EOF)			//�M��Ʈw�s�u 
		{
			if(strcmp(data_name,word) == 0)				//�P�_�ϧ_���Ӳ��~����� 
			{
				t = 1;
				fscanf(data,"%[^#]s",word);
				printf("found\n");
				printf("%s	  ��ĳ���:%s\n",data_name,word);	//��X���~�W�� ���� ���� ���t�P�������� 
				break;
			}	
		}
		if(t != 1)
			printf("not exit\n\n");
		while(1)
		{
			printf("�O�_�~��j�M: ");
			scanf("%s",countinue);
			if(strcmp(countinue,"�O") == 0)
				break;
			else if(strcmp(countinue,"�_") == 0)
				break;
			else
				printf("�п�J(�O/�_)\n");
		}	
		if(!strcmp(countinue,"�_"))
		{
			printf("\n---------��������\��--------\n\n");
			printf("��^�ؿ����\n\n");
			break;
		}
		fclose(data);
	}
}
