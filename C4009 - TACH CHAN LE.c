#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[105];
	for(int i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++) {
		if(a[i]%2==0) printf("%d ", a[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++) {
		if(a[i]%2!=0) printf("%d ", a[i]);
	}
}

