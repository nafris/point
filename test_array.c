#include <stdio.h>
void main(){
	int values[10];
	int *ptr;
	for (int i=0;i<10;i++){
		values[i] =i*10;
		printf("i is %d \n",values[i]);
	} 
	ptr = values;
	ptr++;
	printf("Value of second i is %d \n",*ptr);

}
