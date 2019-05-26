#include<stdio.h>

int main(){
	int n;
	printf("\nyasiniz kac ?  : ");
	scanf("%d",&n);
	if(n >= 18){
		printf("\ntebrikler siz bir secmensiniz.");
	}
	else{
		printf("\n18 yasina gelince sizde birer secmen olacaksiniz..");
	}
	return 0;
}

