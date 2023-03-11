#include<stdio.h>
int sum (int);
int main(){
	int number;
	scanf("%d",&number);
	printf("%d",sum(number));
}
int sum(int n){
	if(n>0){
	if (n==1)
	return 1;
	else 
	return (n+sum(n-1));

	}
}