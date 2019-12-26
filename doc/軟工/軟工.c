#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node{                			// 宣告節點
    int data;
    struct node *next;
};
struct node *newNode(int n){            // 新增節點
    struct node *add = (struct node*) malloc(sizeof(struct node));
    add->data = n;
    add->next = NULL;
    return add;
}


void note(void);                 		// 紀錄功能副函式宣告
void compare(void);
int serch();
int totalMoney = 0;             		// 月花費累積

int main()
{
	char menu[50];
	printf("----DAILY COST----\n");
	system("pause");
	printf("\n");
	while(1)
	{
		printf("請選擇功能 ([1]紀錄 [2]搜尋 [3]比較 [0]結束): ");
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
				printf("\n結束 <DAILY COST> \n");
				exit(1);
			}
			default :{
				printf("請輸入正確功能選項!\n");
				break;
			}
		}
	}
	return 0;
}

	// 軟工-紀錄功能
void note(void){
    int menu;                         	// 紀錄項目
    int money;                       	// 輸入金額
    int i;
    int dayMoney = 0;              		// 日花費
    int money_1_to_7[8] = {0};    		// 各項目累積花費
    char output[10];
    
    struct node *menu_A[8];         	// 宣告項目標頭節點
    for (i=0; i<8; i++) {
        menu_A[i] = (struct node* ) malloc(sizeof(struct node));
        menu_A[i]->next = NULL;
    }
    struct node *ptr = NULL;
    
    printf("--------已進入紀錄功能--------\n\n");
    while (1) {
        printf("請輸入欲紀錄的項目[1]飲食 [2]交通 [3]娛樂 [4]購物 [5]醫療 [6]生活 [7]其他 [0]結束: ");
        scanf("%d", &menu);
        if (menu == 0) 
            break;
        if (menu > 7 || menu < 0) {
            printf("輸入錯誤，請重新輸入項目\n");
            continue;
        }
        printf("請輸入金額： ");
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
    printf("\n當日花費：\n");
    printf("[1]飲食： $%d\n", money_1_to_7[1]);
    printf("[2]交通： $%d\n", money_1_to_7[2]);
    printf("[3]娛樂： $%d\n", money_1_to_7[3]);
    printf("[4]購物： $%d\n", money_1_to_7[4]);
    printf("[5]醫療： $%d\n", money_1_to_7[5]);
    printf("[6]生活： $%d\n", money_1_to_7[6]);
    printf("[7]其他： $%d\n", money_1_to_7[7]);
    printf("當日總花費： $%d\n\n", dayMoney);
    while (1) {
        printf("\n是否輸出當月累積花費: ");
        scanf("%s",output);
        if(strcmp(output,"是") == 0){
        	printf("當月累積花費： $%d\n", totalMoney);
        	printf("\n---------結束紀錄功能--------\n\n");
            printf("返回目錄選單\n\n");
            return;
		}
		else if(strcmp(output,"否") == 0){
			printf("\n---------結束紀錄功能--------\n\n");
            printf("返回目錄選單\n\n");
            return;
        } 
    	else
    		printf("請重新輸入選擇\n");
    }
}


	//軟工-搜尋功能 
int serch()
{
	char pro_name[50];								//產品名稱 
	char input[50];									//讀檔資料 
	char serch[10];									//繼續搜尋判定
	printf("--------已進入搜尋功能--------\n\n");
	while(1)
	{
		FILE *pro_r = fopen("product.txt","r");		//讀檔 
		int temp = 0;	
		if(pro_r == NULL) 
		{
			printf("開檔失敗\n");
			return -1;
		}					 
		printf("請輸入產品名稱: ");
		scanf("%s",pro_name);
		while(fscanf(pro_r,"%s",input) != EOF)		//讀入產品資料 
		{
			if(strcmp(pro_name,input) == 0)			//尋找該產品是否在資料庫內 
			{
				temp = 1;
				fscanf(pro_r,"%s",input);
				printf("%s	  建議售價: %s元\n\n",pro_name,input);	//輸出產品名稱與價錢 
				break;
			}
		}
		if(temp != 1)
			printf("未找到該產品\n\n");
		while(1)
		{
			printf("是否繼續搜尋: ");
			scanf("%s",serch);
			if(strcmp(serch,"是") == 0 || strcmp(serch,"否") == 0)
				break;
			else if(strcmp(serch,"yes") == 0|| strcmp(serch,"no") == 0)
				break;
			else
				printf("請輸入(是/否) (yes/no)\n");
		}	
		if(!strcmp(serch,"否") || !strcmp(serch,"no"))
		{
			printf("\n---------結束搜尋功能--------\n\n");
			printf("返回目錄選單\n\n");
			break;
		}
		fclose(pro_r);
	}
}


	//軟工-比較功能
void compare()
{
	char data_name[50],word[1000],countinue[10];		//產品名稱 //繼續搜尋判定
	printf("--------已進入比較功能--------\n\n");
	while(1)
	{
		FILE *data;
		int t = 0;										//是否要繼續搜尋 
		if ((data = fopen("data.txt", "r")) == NULL) {
        printf("Error! opening file");					//讀檔失敗
        exit(1);
    }
		printf("請輸入產品名稱: ");
		scanf("%s",data_name);
		while(fscanf(data,"%s",word) != EOF)			//和資料庫連線 
		{
			if(strcmp(data_name,word) == 0)				//判斷使否有該產品的資料 
			{
				t = 1;
				fscanf(data,"%[^#]s",word);
				printf("found\n");
				printf("%s	  建議售價:%s\n",data_name,word);	//輸出產品名稱 價錢 評價 價差與平均價格 
				break;
			}	
		}
		if(t != 1)
			printf("not exit\n\n");
		while(1)
		{
			printf("是否繼續搜尋: ");
			scanf("%s",countinue);
			if(strcmp(countinue,"是") == 0)
				break;
			else if(strcmp(countinue,"否") == 0)
				break;
			else
				printf("請輸入(是/否)\n");
		}	
		if(!strcmp(countinue,"否"))
		{
			printf("\n---------結束比較功能--------\n\n");
			printf("返回目錄選單\n\n");
			break;
		}
		fclose(data);
	}
}
