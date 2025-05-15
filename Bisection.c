#include<stdio.h>
#include<math.h>

float f(float x){
	return pow(x,3)-2*x+3;
}

float bisection(float a, float b, float tolerance){
	if((f(a)*f(b))>=0){
		printf("Bisection method can't be applied in this interval");
		return NAN;
	}
	
	float c;
	while((b-a)>=tolerance){
		c = (a+b)/2;
		if(f(c)==0){
			return c;
		}else if(f(c)*f(a)<0){
			b = c;
		}else{
			a = c;
		}
	}
	return c;
}

int main(){
	float a, b, tolerance;
	printf("\t\tOutput\n");
	printf("\t**********************");
	
    printf("\nEnter the interval of a:- ");
    printf("\n a = ");
	scanf("%f", &a);
	
	printf("\nEnter the interval of b:- ");
    printf("\n b = ");
	scanf("%f", &b);
    
    printf("\nEnter the tolerance:- ");
    scanf("%f", &tolerance);
    
    float ans = bisection(a, b, tolerance);
    printf("\nRequired root is: %.6f", ans);
    return 0;
    
}
