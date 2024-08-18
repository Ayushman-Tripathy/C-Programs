#include<stdio.h>
void calculate(int rad,float *area, float *circum){
	*area=3.141*rad*rad;
	*circum=2*3.141*rad;
}
int main(){
	int radius;
	float area,circum;
	printf("Enter radius of circle: ");
	scanf("%d",&radius);
	calculate(radius, &area, &circum);
	printf("Area of circle = %.2f\nCircumfarence of circle = %.2f", area, circum);
	return 0;
}
