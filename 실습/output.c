#include "Header.h"

void print_sum_of_page(int *p,int page){
	int i;
	printf("%d's sum'\n",page);
	for(i=0;i<10;i++){
		printf("%d  ",p[i]);
	}
	printf("\n");
}
