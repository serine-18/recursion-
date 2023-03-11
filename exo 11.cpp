#include<stdio.h>
int DecToBin (int);
int main(){
	int number;
	scanf("%d",&number);
	printf("%d",DecToBin(number));
}
int DecToBin(int n){
	
	if (n==1)
	return 1;
	else
	 return (n%2)+DecToBin(n/2)*10;
	}
	