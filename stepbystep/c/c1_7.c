#include <stdio.h>
int main(void){
	char strArr[100];
	//scanf("%s", strArr);
	int i;
	i = 0;
	while (i < 2){	
		gets(strArr);
		//fgets(strArr, 100, stdin);
		printf("%s\n", strArr);
		i++;
	}
}
