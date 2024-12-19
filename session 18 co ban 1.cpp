#include<stdio.h>


int main(){
	struct student{
		char name[50];
		int age;
		char phone[50];
	};
	struct student use01={"Ta xuan chien",18,"0564170988"};
	printf("%s\n",use01.name);
	printf("%d\n",use01.age);
	printf("%s\n",use01.phone);
	return 0;
}
