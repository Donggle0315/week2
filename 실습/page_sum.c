#include "Header.h"

void page_sum(int *p, int page){
	int i,j;
	for(i=1;i<=page;i++){
		j=i;
		while(j>0){
			p[(j%10)]+=1;
			j/=10;
		}
	}
}
