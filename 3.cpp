#include<stdio.h>
int count (int);
int main(){
	int number;
	scanf("%d",&number);
	printf("%d",count(number));
}
int count(int n){
	if(n>0){
	if (n<10)
	return 1;
	else 
	return (count(n/10))+1;

	}
}