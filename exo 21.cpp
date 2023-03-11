#include<stdio.h>
#include<math.h>
#include<string.h>
bool prime(int,int);
void is_prime(int);
int main(){
	int number;
	scanf("%d",&number);
      is_prime(number);
}
bool prime(int n,int i){
	
	if (i==2)
	return !(n/i==0);
	else 
	return !(n/i==0)&&prime(n,i-1);
	}

 void is_prime(int num){
	if (prime(num,num/2))
	printf("this number is prime");
	else
	printf("this number is not prime");
	}
