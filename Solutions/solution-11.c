/* wap to enter any string and find and print the total numberDate:24/01/22*/
#include<stdio.h>
#include<conio.h>
void main()
{	
    char k[10];	
    int i,j=0;
    	clrscr();
    	printf("\n Enter any string:");	
    gets(k);
    	printf("\n Vowels in the string:");	
    for(i=0;i<strlen(k);i++)	
    {		
       if(k[i]=='a'|| k[i]=='e'|| k[i]=='i'|| k[i]=='0'|| k[i]=='u'||k[i]=='A'|| k[i]=='E'|| k[i]=='I'|| k[i]=='O'|| k[i]=='U')
       {			
            j++;			
            printf("%c",k[i]);		
       }	
    }	
    printf("\n number of vowels in the string: %d",j);	
    getch();
}


    


    