#include "Header.h"

int main(){
	int page,t_c,count=1,*p;
	printf("How many do you want to execute? : ");
	scanf("%d",&t_c);

	while(count++<=t_c){
		printf("input page : ");
		scanf("%d",&page);
		if(page <1 || page>MAX_PAGE){
			printf("the input must %d <= page <= %d",1,MAX_PAGE);
			continue;
		}
		p=(int*)calloc(10,sizeof(int));
		page_sum(p,page);
		print_sum_of_page(p,page);
		free(p);
	}
	return 0;
}
