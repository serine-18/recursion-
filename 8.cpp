#include<stdio.h>
int sum (int);
int main(){
	int number;
	scanf("%d",&number);
	
	printf("%d",sum(number));
}
int sum(int n){
	if(n>0){
	if (n<10)
	return n;
	else
	 return ((n%10)+sum(n/10));
	}
}