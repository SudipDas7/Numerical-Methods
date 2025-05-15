#include<stdio.h>
#include<math.h>

float f1(float x){
	return exp(x)-(2*x)-1;
}
float f2(float x){
	return exp(x)-2;
}

float newtonRaphson(float xn, float tol){
	if(f2(xn) == 0){
		printf("Derivative is zero. Choose a different initial guess.\n");
		return xn;
	}
	if(fabs(f1(xn)) <= tol){
		return xn;
	}
	
	xn = (xn - f1(xn)/f2(xn));
	return newtonRaphson(xn, tol);
}

int main(){
	float tol, x0, ans;
	printf("\t\tOutput\n");
	printf("\t********************\n");
	
	printf("Enter the tolarence:- ");
	scanf("%f", &tol);
	
	printf("\nChoose an initial guess of x0:- ");
	scanf("%f", &x0);
	
	ans = newtonRaphson(x0, tol);
	
	printf("\nRequired root is:- %.4f", ans);
	return 0;
}
