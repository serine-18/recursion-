#include<stdio.h>
bool odd (int);
int main(){
	int number;
	scanf("%d",&number);
	if (odd(number))
	printf ("true");
	else 
	 printf ("false");
}
bool odd(int n){
	if(n>0){
	if (n<10)
	return (n%2!=0);
	else
	 return ((n%10)%2!=0&&odd(n/10));
	}
}