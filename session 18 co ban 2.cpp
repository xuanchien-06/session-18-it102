#include<stdio.h>

int main(){
	struct student{
		char name[50];
		int age;
		char phone[50];
	};
	//nhap phan tu
	struct student use02;
	printf("Nhap ten: ");
	fgets(use02.name,sizeof(use02.name),stdin);
	printf("Nhap tuoi: ");
	scanf("%d",&use02.age);
	fflush(stdin);
	printf("Nhap so dien thoat: ");
	fgets(use02.phone,sizeof(use02.phone),stdin);
	//in ra phan tu da nhap
	printf("%s\n",use02.name);
	printf("%d\n",use02.age);
	printf("%s\n",use02.phone);
	return 0;
}
