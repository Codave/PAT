#include<cstdio>
int num[10];

int main(){
	int a,b,sum;
	scanf("%d%d",&a,&b);
	sum=a+b;
	if(sum<0){
		printf("-");
		sum=-sum;
	}
/*	int len=0;
	if(sum==0) num[len++]=0;
	while(sum){
		num[len++]=sum%10;
		sum/=10;
	}
	
	for(int k=len-1;k>=0;k--){
		printf("%d",num[k]);
		if(k>0&&k%3==0)  printf(",");; 
	}
*/	
	if(sum>=1000000) printf("%d,%03d,%03d",sum/1000000,sum%1000000/1000,sum%1000);
	else if(sum>=1000) printf("%d,%03d",sum/1000,sum%1000);
	else printf("%d",sum);
	
	return 0;
}
