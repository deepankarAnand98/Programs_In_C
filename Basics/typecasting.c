#include<stdio.h>

int main(){
	// Store Float in Int
	
	int i = 80.56;

	printf("Integer: i=%d\n",i);
	//This line will result in a error:  printf("Flaot: i=%f\n",i);
	
	char c = i;
	printf("Character: %c\n",c);
	printf("Integer: %d\n",c);



	return 0;
}

