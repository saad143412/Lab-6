#include<stdio.h>
void main()
{
	/*Programmer Name:Muhammad Saad
	  Reg.No:20MDELE163           || */
  	 
	printf("Programmer Name:Muhammad Saad\nReg.No:20MDELE163 \n\n");
	
	int N,fact,i = 1;                                      //Declare N and fact and asign i=1
	
	printf("plz enter a number for factorial Calculation:");
	scanf("%d",&N);                                          //Read N 
	
	fact = N;                                                
	
	while(i<N)                         //using While Loop
	{
		fact = fact*i;                 //factorial formula
		i++;                           //inccreamentation of integer i
	}                           //End of while loop
	
	printf("The Factorial of %d is = %d",N,fact);   //Display the calculated value of factorial
	
}                               //End of main


