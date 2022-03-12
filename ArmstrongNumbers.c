# include<stdio.h>
void main()
{
   int a,n,g=0,i,l,z=1;
   printf("\n Enter Your Number  \n ");
   scanf("%d",&a);
   l=a;
   for(i=0;a>0;i++)
   {
      n=a%10;
      z=n*n*n;
      g=g+z;
      a=a/10;
   } 
    if(g==l)
    printf("\n  Your Number %d is A Armstrong Number  \n ",l);
    else
    printf("\n  Your Number %d is  NOT a Armstrong Number  \n ",l);
    
}
