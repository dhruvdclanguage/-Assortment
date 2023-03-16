#include<stdio.h>
 
 int main () {
	
	int i , j , n , m , sum=0;
	
	printf("Enter Size of Row:");
	scanf("%d",&m);
	
	printf("Enter Size of Col:");
	scanf("%d",&n);
	
	int arr[m][n];
	
	for (i=0;i<m;i++){
		
		for (j=0;j<n;j++){
			 
			 printf("Enter Elements [%d][%d] :",i,j);
			 scanf("%d",&arr[i][j]);
		}
	}
	   for (i=0;i<m;i++){
	   	
	   	for (j=0;j<n;j++){
	   		
	   		printf("%d",arr[i][j]);
		   }
		   
		   printf ("\n");
	   }
	     for(i=0;i<m;i++){
	     	
	     	sum += arr[i][n-i-1];
	     	
	     	printf("\n");
		 }
		  printf("Sum of Anti- Diagonal :%d",sum);
	   
		return 0;
}
