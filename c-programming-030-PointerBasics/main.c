#include <stdio.h>

int main() {
	int num = 150;
	int* pNum = NULL;

	pNum = &num;

	printf("\nnum address is: %p\n", &num);
	printf("address of pNum: %p\n", &pNum);
	printf("value of pNum: %p\n", pNum);
	printf("value of pNum is pointing to: %d\n\n", *pNum);

	return 0;
}