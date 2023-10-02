#include <stdio.h>

class rectangle {
	public:
		int a,b,area;
		int calcArea(){
			this->area = a * b;
			return a*b;
		}
};
int main(){
	rectangle rect1;
	rect1.a = 5;
	rect1.b = 10;
	printf("Area of rectangle is - %d",rect1.calcArea());
	return 0;

	
}
