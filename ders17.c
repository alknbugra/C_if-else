#include<stdio.h>

void main(){
	
	int gun;
	printf("Haftanin kacinci gunundeyiz ? \n");
	scanf("%d",&gun);
	
	if(gun == 1){
		printf("Bugun Pazartesi (Todas is Monday)");
	}
	if(gun == 2){
		printf("Bugun Sali (Today is Tuesday)");
	}
	if(gun == 3){
		printf("Bugun Carsamba (Today is Wednesday)");
	}
	if(gun == 4){
		printf("Bugun Persembe Thursday");
	}
	if(gun == 5){
		printf("Bugun Cuma (Today is Friday)");
	}
	if(gun == 6){
		printf("Bugun Cumartesi (Today is Saturday)");
	}
	if(gun == 7){
		printf("Bugun Pazar (Today is Sunday)");
	}
}
