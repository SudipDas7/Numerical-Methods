#include<stdio.h>
#include<math.h>

float f(float x){
	return (1/((1+x)*(1+x)));
}

void main(){
	
	float a,b,h,sum1=0,sum2=0,t;
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
		if(i%2==0){
			sum1 += f(a+i*h);
		}else{
			sum2 += f(a+i*h);
		}
	}
	t = (h/3)*(f(a)+f(b)+(4*sum2)+(2*sum1));
	
	printf("\nThe result is:- %.3f", t);
}
