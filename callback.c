#include <stdio.h>

void populate_array(int *array,size_t arraySize, int(*getValue)(void)){
	for (size_t i=0; i<arraySize;i++){
		array[i] = getValue();
	}
}
int getValueA(void){
	return 5;
}
int getValueB(void){
	return 8;
}
void main(){
	int myarray[10];
	populate_array(myarray,10,getValueA);
	for (int i=0;i<10;i++){
		printf("i is %d \n",myarray[i]);
	}
	populate_array(myarray,10,getValueB);
	for (int i=0;i<10;i++){
		printf("i is %d \n",myarray[i]);
	}
}
