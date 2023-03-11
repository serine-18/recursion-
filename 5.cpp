#include<stdio.h>
int count (int);
int main(){
	int number;
	scanf("%d",&number);
	printf("%d",count(number));
}
int count(int n){
	if(n>0){
	if (n<10&&n%2!=0)
	return n;
	else
	 if (n%10%2!=0)
	 return ((n%10)+count(n/10));
	 else if (n%2==0)
	 return (count(n/10));
	}
}