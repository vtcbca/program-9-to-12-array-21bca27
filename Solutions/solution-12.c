/* WAP to enter any string and print the length of the string OR implement strlen() */ 
#include<stdio.h> 
#include<conio.h> 
void main() 
{     
     char a[10],b[10];   
     int len=0,len1=0,j,i;     
     clrscr(); 
     printf("\nEnter any string:");    
     gets(a); 
     for(i=0;a[i]!='\0';i++)        
        len++;     
     printf("\nInputted string is: %s",a);
     printf("\n\nLenth of string is: %d",len);    
     
     printf("\n\nEnter any string:");    
     gets(b); 
     for(j=0;b[j]!='\0';j++)        
        len1++;     
     printf("\nInputted string is: %s",b);
     printf("\n\nLenth of string is: %d",len1);
     if(strcmp(a,b)==0)
     	{		
         printf("\n You entered the same string two time:");	
      }
     	else	
      {		
         printf("\n You Entered string are not same:");
      	}
    getch(); 
    
 } 


    


    