#include<stdio.h>
#include<math.h>
int BinToDec(int);
int main(){
	int number;
	scanf("%d",&number);
	printf("%d",BinToDec(number));
}
int BinToDec(int n){
	 static int r=-1;
	if (n==0)
	return 0;
	else
	r++;
	 return (n%10)*pow(2,r)+BinToDec(n/10);
	}
	