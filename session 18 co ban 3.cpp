#include<stdio.h>

int main(){
	struct student{
		char name[50];
		int age;
		char phone[50];
	};
	struct student use[5];
		//Nhap thong tin
		for(int i=0; i<5; i++){
			printf("Nhap thong tin sinh vien thu %d:\n",i+1);
			printf("Nhap ten: ");
			fgets(use[i].name,sizeof(use[i].name),stdin);
			printf("Nhap tuoi: ");
			scanf("%d",&use[i].age);
			fflush(stdin);
			printf("Nhap sdt: ");
			fgets(use[i].phone,sizeof(use[i].phone),stdin);
		}
		printf("\n");
		//In thong tin
		for(int i=0; i<5; i++){
			printf("Thong tin sinh vien thu %d:\n",i+1);
			printf("Ten la: %s",use[i].name);
			printf("Tuoi: %d\n",use[i].age);
			printf("Sdt: %s\n",use[i].phone);
		}
	return 0;
}