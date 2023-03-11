#include<stdio.h>
#include<math.h>
#include<string.h>
int reverse (int);
int count(int);
int main(){
	int number;
	scanf("%d",&number);
	printf("%d",reverse(number));
}
int count(int n){
	if (n<10)
	return 1;
	else 
	return (count(n/10))*10;
	}

int reverse(int num){
	if (num<10)
	return num;
	else
	 return (num%10)*count(num)+reverse (num/10);
	}
