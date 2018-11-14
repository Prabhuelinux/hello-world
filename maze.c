#include<stdio.h>
void main()
{
 int r,i,j,m,n;
  printf("Enter a number for matrix formation....\n");
  scanf("%d",&r);
  int a[r][r];

  printf("enter %d number for making matrix \n",r*r);
  for(i=0;i<r;i++)
   for(j=0;j<r;j++)
	   scanf("%d",&a[i][j]);
  a[0][0]=a[r-1][r-1]=1;


  for(i=0;i<r;i++)
  {
    for(j=0;j<r;j++)
	    printf("%d  ",a[i][j]);
            printf("\n");
   }

    m=0,n=1;
	  dom:
            if(a[m][n]==1)
              {
	        n++;
		if(m==r-1 && n>=r-1)
		{
		  printf("yess.....\n");
		  return;
		}
		else
		{
		if(n==r)
		  goto asd;
		else
		goto dom;
		}
	      }
            asd:
	      m++,n--;
	      if(a[m][n]==1)
	       {
	         n++;
		if(m==r-1 && n>=r-1)
		{
		  printf("yess.....\n");
		  return;
		}
		else
		{
	          if(n==r)
		    {n--;m++;
		     goto dom;}	    
	      	else
	        	goto dom;
	 	
		}
	       }
		   printf("Path not done...!\n");
		   return;
		


}
