//这是一个冒泡排序的算法 
#include<stdio.h>
void sort(int *p,int n){
	int i,j,t;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(*(p+j)>*(p+j+1)){
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
	printf("排序后的数组是：\n");
	for(i=0;i<n;i++)
		printf("%-3d",*(p+i));
	printf("\n");
	return; 
}
  
  
int main(){
	int i,j,n,a[20];
	int*p;
	p=a;
	printf("请输入数组个数n:\n");
	scanf("%d",&n);
	printf("请输入数组元素:\n");
	for(i=0;i<n;i++)
		scanf("%3d",&a[i]);
	sort(p,n);
	return 0;
}
