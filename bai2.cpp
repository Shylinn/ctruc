#include <stdio.h>
	void nhapmang(int arr[],int *n){
		for(int i=0;i<*n;i++){
			printf("Ban hay nhap phan tu thu %d:",i+1);
			scanf("%d",&arr[i]);
		}
		
	}
	void xuatmang(int arr[],int *n){
		printf("\n\n");
		printf("Xuat mang: \n");
		for(int i=0;i<*n;i++){
			printf("Gia tri cua phan tu thu %d: %d\n",i+1,arr[i]);
		}
	}
	int sum(int arr[],int *n){
		int sum=0;
		for(int i=0;i<*n;i++){
			sum+=arr[i];
		}
		return sum;
		
	}
	
	int kiemtra_doixung(int arr[],int *n){
		int result=0;
		for(int i=0;i<*n/2;i++){
			if(arr[i]!=arr[*n-1-i]){
				result=1;
			}
		}
		return result;
		
	}
	int kiemtra_phantu(int arr[],int *n,int k){
		int kq=0;
		for(int i=0;i<*n;i++){
			if(arr[i]==k){
				kq=1;
			}
		
		}
		return kq;
	}



int main(){
	int n;
	int arr[n];
	int k;
	int chan=0;
	int le=0;
	
	printf("Ban hay nhap so phan tu cua mang: ");
	scanf("%d",&n);
	printf("Ban hay nhap so k: ");
	scanf("%d",&k);
	nhapmang(arr,&n);
	xuatmang(arr,&n);
	printf("Tong la %d",sum(arr,&n));
	if(kiemtra_doixung(arr,&n)==0){
		printf("Array doi xung\n");
		
	}
	else{
		printf("Array khong doi xung\n");
	}


	if(kiemtra_phantu(arr,&n,k)==1){
		printf("Co phan tu\n");
		
	}
	else{
		printf("khong co phan tu\n");
	}
	
	return 0;
}
