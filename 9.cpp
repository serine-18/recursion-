#include<stdio.h>
int prod (int);
int main(){
	int number;
	scanf("%d",&number);
	
	printf("%d",prod(number));
}
int prod(int n){
	if(n>0){
	if (n<10)
	return n;
	else
	 return ((n%10)*prod(n/10));
	}
}