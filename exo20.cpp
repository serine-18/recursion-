#include<stdio.h>
#include<math.h>
#include<string.h>
int zero (int);
int main(){
	int number;
	scanf("%d",&number);
	printf("%d",zero(number));
}

int zero(int num){
	if (num%10!=0)
	return 0;
	else
	 return zero(num/10)+1;
	}
