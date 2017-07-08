#include <stdio.h>
int main(void){
	int each;
	int nkg;
	scanf("%d", &nkg);
	each = 0;
	while (nkg > 0) {
		if (nkg >= 5){
			nkg -= 5;
			each++;
		} else if (nkg >= 3){
			nkg -= 3;
			each++;
		} else {
			break;
		}
	}
	
	if (nkg != 0){
		printf("-1");
	} else {
		printf("%d", each);
	}
}
