#include<stdio.h>
bool even (int);
int main(){
	int number;
	scanf("%d",&number);
	if (even(number))
	printf ("true");
	else 
	 printf ("false");
}
bool even(int n){
	if(n>0){
	if (n<10)
	return (n%2==0);
	else
	 return ((n%10)%2==0&&even(n/10));
	}
}