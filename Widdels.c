#include<stdio.h>
#include<math.h>

float f(float x){
	return pow(x,0.5);
}

void main(){
	
	float a,b,h,sum=0,t;
	int n,i;
	
	printf("\t\tOutput\n");
	printf("\t**********************");
	
	printf("\nEnter the Lower limit:- ");
	printf("\n a = ");
	scanf("%f", &a);
	
	printf("Enter the Upper limit:- ");
	printf("\n b = ");
	scanf("%f", &b);
	
	printf("Enter the Interval:- ");
	printf("\n n = ");
	scanf("%d", &n);
	
	h = (b-a)/n;
	printf("The value of h is:- %f",h);
	
	for(i=1; i<=(n/6); i++){
		sum += (f(a)+5*f(a+h)+f(a+2*h)+6*f(a+3*h)+f(a+4*h)+5*f(a+5*h)+f(a+6*h));
		a = a+6*h;
	}
	
	t = ((3*h)/10)*sum;
	
	printf("\nThe answer is:- %f", t);
}
