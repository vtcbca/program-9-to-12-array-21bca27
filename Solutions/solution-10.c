/*write a program to perfrom the selection short on array of 10 numeric value*/
#include<stdio.h>
#include<conio.h>
void main()
{	
        int a[10],i,n,j,temp,c,indexOfMin;
        clrscr();
        printf("Enter number of element:");	
        scanf("%d",&n);	
        printf("\n Enter %d element:",n);	
        for(c=0;c<n;c++)	
        {		
            scanf("%d",&a[c]);
        }
        for ( i = 0; i < n-1; i++) 
        { 
            indexOfMin = i;
        	    for( j=i+1; j < n; j++)
            {
                if(a[j] < a[indexOfMin])
                { 
                indexOfMin = j;
                }
            }
            temp = a[i]; 
            a[i] = a[indexOfMin]; 
            a[indexOfMin] = temp; 
        }
        printf("\n sort list in ascending order:");
        for(c=0;c<n;c++)	
        {		
            printf(" %d",a[c]);
        	}
           
        getchar();
}
        





    


    