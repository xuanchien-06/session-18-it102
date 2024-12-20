#include<stdio.h>
#include<string.h>

int main(){
	int choice,x,vitri,count=5;
	int temp;
	int index=0,n;
	
	//kieu du lieu struct
	struct Dish  {
		int id;
		char name[50];
		int sprice;
	};
	struct Dish menu[100]={
				{1,"thit ga",20},
				{2,"thit vit",15},
				{3,"thit lon",40},
				{4,"thit cho",50},
				{5,"thit meo",35},
			};
	
	//in menu va thuc hien chuc nang
	do{
		printf("Menu\n");
		printf("1.In ra gia tri cac phan tu trong menu mon an theo dang: 1.member:value\n");
		printf("2.Them mot phan tu vao vi tri chi dinh\n");
		printf("3.Sua mot phan tu o vi tri chi dinh\n");
		printf("4.Xoa mot phan tu o vi tri chi dinh\n");
		printf("5.Sap xep cac phan tu(Khi lua chon menu cha thi hien thi menu con)\na.giam dan theo price\nb.tang dan theo price\n");
		printf("6.Tim kiem phan tu theo name nhap vao\na.Tim kiem tuyen tinh\n");
		printf("7.Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1://in
				printf("Gia tri cac phan tu\n");
				for(int i=0;i<count;i++){
					printf("%d . %s : %dvnd \n",menu[i].id,menu[i].name,menu[i].sprice);
				}	
				break;
			case 2://them phan tu
				if(count <=5){
					menu[count].id=count +1;
					printf("Them mon an:");
					fflush(stdin);
					fgets(menu[count].name, sizeof(menu[count].name) , stdin);
					menu[5].name[strcspn(menu[5].name,"\n")]=0; 	
					printf("Nhap gia tien:");
					scanf("%d", &menu[count].sprice);
					count++;
				}
				for(int i=0;i<count;i++){
					printf("%d . %s : %dvnd \n",menu[i].id,menu[i].name,menu[i].sprice);
				}	
				break;
			case 3://sua phan tu tai cuoi mang
				printf("Nhap vi tri can sua: ");
					scanf("%d",&x);
				for(int i=0; i<count; i++){
					if(menu[i].id==x){
						fflush(stdin);
						printf("Nhap ten mon can sua: ");
						fgets(menu[i].name,sizeof(menu[i].name),stdin);
						menu[i].name[strcspn(menu[i].name,"\n")]=0; 
						printf("Nhap gia can sua: ");
						scanf("%d",&menu[i].sprice);
						fflush(stdin);
						
					}
				}
				printf("Menu sau khi sua\n");
				for(int i=0;i<count;i++){
					printf("%d . %s : %dvnd \n",menu[i].id,menu[i].name,menu[i].sprice);
				}	
				break;
			case 4://xoa phan tu
				printf("Nhap vi tri mon xoa: ");
				scanf("%d",&vitri);
				for(int i=vitri;i<count-1;i++){
					menu[i]=menu[i+1];
				}
				count--;
				for(int i=0;i<count;i++){
					printf("%d.%s:%dvnd \n",menu[i].id,menu[i].name,menu[i].sprice);
				}	
				break;
			case 5:	//Sap xep tang dan
				for(int i=0;i<count;i++){
					for(int j=i+1;j<count;j++){
						if(menu[i].sprice>menu[j].sprice){
							Dish temp = menu[i];
							menu[i] = menu[j];
							menu[j]=temp;
						}
					}
				}
				for(int i=0;i<count;i++){
						printf("%d.%s:%dvnd \n",menu[i].id,menu[i].name,menu[i].sprice);
					}	
				break;
			case 6://tim kiem phan tu
				printf("Nhap id mon can tim: ");
				scanf("%d",&n);
				for(int i=0; i<count; i++){
					if(menu[i].id == n){
						printf("%d.%s:%dvnd \n",menu[i].id,menu[i].name,menu[i].sprice);
						index=1;
						break;
					}
				}
				if(index==0){
					printf("Mon khong co trong menu");
				}
				break;
			case 7:/thoat
				printf("Thoat\n");
				break;	
			default:
				printf("Lua chon khong hop le\n");
		}
	}
	while(choice!=7);
	return 0;
}
