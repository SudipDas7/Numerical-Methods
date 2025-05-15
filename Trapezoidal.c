#include<stdio.h>
#include<math.h>

float f(float x){
	return pow(log(x),2);
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
	
	for(i=1; i<n; i++){
		sum += f(a+i*h);
	}
	t = (h/2)*(f(a)+f(b)+2*sum);
	printf("\nThe ans is: %.5f", t);
	
}
