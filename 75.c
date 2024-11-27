#include<stdio.h>
int main(){int sum,count=0,max=-9999;
	int a[4][3];
	//reading data
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	//total marks and highest total
	for(int i=0;i<4;i++){
		sum=0;
		for(int j=0;j<3;j++){
			sum+=a[i][j];
			}
		if(sum>max){
		max=sum;
		count=i+1;}
		
		printf("%d marks is %d\n",i+1,sum);	
	}
	printf("highest marks is %d and obtained by %d\n",max,count);	
	
	//highest marks subject wise
	for(int i=0;i<3;i++){
		int max=-9999;
		for(int j=0;j<4;j++){
		if(a[j][i]>max){
		max=a[j][i];
		count=j;}
		}
		printf("highest marks in subject%d is %d and obtained by %d\n",i+1,max,count+1);
		}
}