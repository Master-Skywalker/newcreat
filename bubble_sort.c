//����һ��ð��������㷨 
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
	printf("�����������ǣ�\n");
	for(i=0;i<n;i++)
		printf("%-3d",*(p+i));
	printf("\n");
	return; 
}
  
  
int main(){
	int i,j,n,a[20];
	int*p;
	p=a;
	printf("�������������n:\n");
	scanf("%d",&n);
	printf("����������Ԫ��:\n");
	for(i=0;i<n;i++)
		scanf("%3d",&a[i]);
	sort(p,n);
	return 0;
}
