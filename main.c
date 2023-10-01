#include <stdio.h>
void function1(int *a){
	printf("This function knows the value of var and can change it \n");
	printf("Value before changing: %d: \n",*a);
	*a = 111;
	printf("Value set by function1 printed from function1: %d \n",*a);

}
//void function2()
int main(){
	int *ptr = NULL;
	int var = 10;
	//ptr = &var;
	printf("Variable from main function is : %d\n",var);
	function1(&var);
	printf("Variable after function1 but from main is : %d \n", var);
	return 0;

}
