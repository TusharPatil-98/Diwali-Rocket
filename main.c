#include <stdio.h>

#include <stdlib.h>

void head(int n)

{

int i,j,k;

   for(i = 0; i <= n ; i++){

       for(j = 0 ; j < n - i; j++){

           printf(" ");

       }

       for(k = 0 ; k < i; k++){

           printf("* ");

       }

       printf("\n");

   }

}

void body(int n)

{

   int i,j;

   for(i = 0; i<n;i++)

   {

       for (j=0;j<n;j++)

       {

           printf("* ");

       }

       printf("\n");

   }

}

void tail(int n)

{

   int i,j,k;

   for(i = 0; i < n ; i++)

   {

       for(j = 0 ; j < n / 2; j++){

           printf(" ");

       }

           printf(" **\n");

   }

}

int main()

{

   int n;

   printf("Enter the value of n: ");

   scanf("%d",&n);

   head(n);

   body(n);

   tail(n);

   return 0;

}

