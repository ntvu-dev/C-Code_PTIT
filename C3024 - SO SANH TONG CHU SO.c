#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int sum(int n) {
	int sum=0;
	while(n>0) {
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	if(sum(a)<=sum(b)) printf("%d %d", a, b);
	else printf("%d %d", b, a);
}

