#include<stdio.h>
 
 int main () {
	
	int i , j , n , m , sum=0;
	
	printf("Enter Size of Row :");
	scanf("%d",&m);
	
	printf("Enter Size of Col :");
	scanf("%d",&n);
	
	int arr [m] [n];
	
	for (i=0;i<m;i++){
		
		for (j=0;j<n;j++){
			 
			 printf ("Enter Elements [%d][%d] :",i,j);
			 scanf("%d",&arr[i][j]);
		}
	}
	   for (i=0;i<m;i++){
	   	
	   	for (j=0;j<n;j++){
	   		
	   		printf ("%d",arr [i][j]);
		   }
		   
		   printf ("\n");
	   }
	   
	     for (i=0;i<n;i++){
	     	
	     	sum=0;
	     	
	     for (j=0;j<m;j++){
	     	
	     	sum+=arr[j][i];
		 }	
		  printf ("Sum of col Wise :%d",sum);
		  
		  printf ("\n");
		 }
		 
		 return 0;
	}
