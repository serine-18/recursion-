#include<stdio.h>
int fact (int);
int main(){
	int number;
	scanf("%d",&number);
	printf("%d",fact(number));
}
int fact(int n){
	if(n>0){
	if (n==1)
	return 1;
	else 
	return (n*fact(n-1));

	}
}