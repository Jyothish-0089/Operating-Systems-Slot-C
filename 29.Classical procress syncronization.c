#include<stdio.h>
int main(){
	int choice,p,c,range=0,i,arr[50];
	while(choice!=4){
		printf("1.Produce   2.Consume   3.Display Buffer    4.Exit\n");
		printf("Choice: ");
		scanf("%d",&choice);
		if(choice==1){
			printf("Produce value: ");
			scanf("%d",&p);
			printf("-->Produced %d\n",p);
			arr[range]=p;
			range++;
		}
		if(choice==2){
			if(range==0){
				printf("Empty Buffer\n");
			}
			else{
				printf("-->Consumed %d\n",p);
				range--;
		    }
		}
		if(choice==3){
			printf("\nBuffer: [");
			for(i=0;i<range;i++){
				printf("%d ",arr[i]);
			}
			printf("]\n");
		}
	}
	
}
