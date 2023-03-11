#include<stdio.h>
#include<math.h>
#include<string.h>
int armstrong (int,int);
void is_armstrong(int);
int count(int );
int main(){
	int number;
	scanf("%d",&number);
	is_armstrong (number);
}
int count(int n){
	
	if (n<10)
	return 1;
	else 
	return (count(n/10))+1;

	}

int armstrong(int num,int n){
	if (num<10)
	return pow(num,n);
	else
	 return pow(num%10,n)+armstrong ((num/10),n);
	}
	
void is_armstrong(int n){
	if (armstrong(n,count(n))==n)
	printf("this number is armstrong");
	else
	printf("this number isnt armstrong");
}

