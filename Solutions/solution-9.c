/*write a program to perfrom the bubble short on array of 10 numeric value*/
#include<stdio.h>
#include<conio.h>
void main()
{	
        int a[10],i,n,j,temp;	
        clrscr();	
        printf("\n Enter the value:");	
        scanf("%d",&n);
        	printf("\n Enter %d number:",n);
        for(i=0;i<n;i++)	
        {		
            scanf("%d",&a[i]);	
        }	
        for(i=0;i<n-1;i++)	
        {		
            for(j=0;j<n-i-1;j++)		
            {			
                if(a[j]>a[j+1])			
                    {				
                        temp=a[j];				
                        a[j]=a[j+1];				
                        a[j+1]=temp;			
                    }		
            }	
        }	
        printf("\n Sorted array:");	
        for(i=0;i<n;i++)	
           printf(" %d ",a[i]);
        getch();
}





    


    