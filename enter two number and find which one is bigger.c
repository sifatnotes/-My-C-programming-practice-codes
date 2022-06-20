#include<stdio.h>
int main()
{

	int a,b;

	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);

	if(a>b){


		printf("a is bigger");
	}
	else{

		printf("b is bigger");

	}


	return 0;


}#include <stdio.h>
int main() {

   int year;
   printf("Enter a year: ");
   scanf("%d", &year);


   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }

   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }

   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }

   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}
