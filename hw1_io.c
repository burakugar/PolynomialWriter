/*
** hw1_io.c:
**
** The source file implementing output functions.
**
** Author: Yakup Genc. (c) 2018-2021
**
** Revision: 2021.03.03.20.16
** 
*/


#include <stdio.h>
#include "hw1_io.h"


void write_polynomial3(double a0, double a1, double a2, double a3)
{
    double coeffs[4]; /* coefficient array */
	int i,count=0; /* counter for counting the terms with 0 coefficient */
	int flag; /* flag value indicates first non zero element */
	coeffs[3]= a0; coeffs[2]= a1; coeffs[1]= a2; coeffs[0]= a3; /* assigning coefficients to inside of the array manually */
	for(i=3;i>-1;i--){
		if (coeffs[i]!=0.0){
			flag= i; /* loop that finds the non zero element of the array */
			goto z; /* if we will found the first nonzero element there is no need to iterate the for loop  */
				    }
	  		}
	z: /* continue from there */
	for(i=3;i>-1;i--){ 	/* indexes of the coefficient array start from 3 and goes to 0 */
		h:
		while(i==flag && coeffs[i]!= 0.0){
			if(coeffs[i]==1){	/*we have to check whether the first element 1 or -1, if 1 we dont need to add 1 in front of it same thing is valid for -1  */
					if(i==1){	
					printf("x"); /* if the first element's degree is 1 and its coeffs is also 1 print it as x not 1.00x*/
							}
						else{
						printf("x^%d",i); /* if the first element's degree is not 1 but its coeffs is 1 print it as x^2 not 1.00x^2 */
					}
				}
			else if(coeffs[i]==-1){
						if(i==1){
						printf("-x");	/* if the first element's degree is 1 and its coeffs is also -1 print it as -x not -1.00x*/
								}
						else {
						printf("-x^%d",i); /* if the first element's degree is not 1 but its coeffs is -1 print it as -x^2 not -1.00x^2 */
					}
				}
			
			else{/* if the first non zero element's coefficient is different from -1 and 1 then print it with that coefficient such as 2x^2 */
				printf("%.2fx^%d",coeffs[i],i);
						}
					i--;	/* if the nonzero element has index 2 then we know we have to start from next index which is 1 so i have decreased the for loop's index  */
			goto h; /* when we print the first element and decrease it's index then we have to start from beginning that's why i use goto, it will go to h and it wont enter inside the 					while loop and continue from the rest */
			}
		
		while(i==0 && coeffs[i]!= 0.0){  /* this while is for the last element of the polynomial which is a constant value */
			if(coeffs[i]==1){
			printf("+1");	/*  if it's coefficient is 1 then print 1 if -1 then -1 */
			    }	
				else if(coeffs[i]== -1){
				printf("-1");
				}
				   else{
				      if(coeffs[i]<0){
					printf("%.2f",coeffs[i]);	/* if it is different from 1 or -1 like -2.4 then we have to printf it as coefficient */
					   }
				      else{
			              printf("+%.2f",coeffs[i]);
			                        }
			               }
			goto t; /* lastly for the last element we have to check if all terms is 0 or not. for that purpose we did use the counter there. in t row it is controlling for that purpose */
		                              }
		
		/*********** starting from this row we are checking for the middle elements(not first and last elements) ************/
		if(coeffs[i]==0.0){
			count++;	/* if any element has 0 coefficient, increase the counter */
			}
		/*********** we are checking from now on if any coefficient is negative ************/
		else if(coeffs[i]<0.0){ 
		        if(coeffs[i]==-1 && i==1){ /*if any element has a -1 coeff and its degree is 1 then print is as -x */
			    printf("-x");
			   }
				else if(coeffs[i]!=-1 && i==1){ /*if any element does not have -1 as a coeff and its degree is 1 then print it as -2x */
			    printf("%2.fx",coeffs[i]);
			   }
				else if(coeffs[i]==-1 && i!=1){
				printf("-x^%d",i); /*if any element does have -1 as a coeff and its degree is not 1 then print it as -x^2 */
				}
				else{ 	
				printf("%.2fx^%d",coeffs[i],i); /* other than above will be printed as -2x^2*/       
			   }
		}
		/*********** we are checking from now on if any coefficient is positive ************/
		else if(coeffs[i]>0.0){
			if(coeffs[i]==1 && i==1){ /*if any element has a +1 coeff and its degree is 1 then print is as +x */
			    printf("+x");
			   }
				else if(coeffs[i]!=1 && i==1){ /*if any element does not have 1 as a coeff and its degree is 1 then print it as 2x */
			    printf("+%2.fx",coeffs[i]);
			   }
				else if(coeffs[i]==1 && i!=1){
				printf("+x^%d",i); /*if any element does have 1 as a coeff and its degree is not 1 then print it as x^2 */
				}
				else{ 	
				printf("+%.2fx^%d",coeffs[i],i); /* other than above will be printed as +2x^2*/     
			   }
		        }
		    }
		t:
		if(count==4){
		printf("0.0"); /* we did count all the elements 1 by 1 if all of them is zero then print 0.0 */
			}
}


void write_polynomial4(double a0, double a1, double a2, double a3, double a4)
{
    double coeffs[5];
	int i,count=0;
	int flag;
	coeffs[4]= a0; coeffs[3]= a1; coeffs[2]= a2; coeffs[1]= a3; coeffs[0]= a4;
	for(i=4;i>-1;i--){
	if (coeffs[i]!=0.0){
			flag= i; /* loop that finds the non zero element of the array */
			goto z; /* if we will found the first nonzero element there is no need to iterate the for loop  */
				    }
	  		}
	z: /* continue from there */
	for(i=4;i>-1;i--){ 	/* indexes of the coefficient array start from 3 and goes to 0 */
		h:
		while(i==flag && coeffs[i]!= 0.0){
			if(coeffs[i]==1){	/*we have to check whether the first element 1 or -1, if 1 we dont need to add 1 in front of it same thing is valid for -1  */
					if(i==1){	
					printf("x"); /* if the first element's degree is 1 and its coeffs is also 1 print it as x not 1.00x*/
							}
						else{
						printf("x^%d",i); /* if the first element's degree is not 1 but its coeffs is 1 print it as x^2 not 1.00x^2 */
					}
				}
			else if(coeffs[i]==-1){
						if(i==1){
						printf("-x");	/* if the first element's degree is 1 and its coeffs is also -1 print it as -x not -1.00x*/
								}
						else {
						printf("-x^%d",i); /* if the first element's degree is not 1 but its coeffs is -1 print it as -x^2 not -1.00x^2 */
					}
				}
			
			else{/* if the first non zero element's coefficient is different from -1 and 1 then print it with that coefficient such as 2x^2 */
				printf("%.2fx^%d",coeffs[i],i);
						}
					i--;	/* if the nonzero element has index 2 then we know we have to start from next index which is 1 so i have decreased the for loop's index  */
			goto h; /* when we print the first element and decrease it's index then we have to start from beginning that's why i use goto, it will go to h and it wont enter inside the 					while loop and continue from the rest */
			}
		
		while(i==0 && coeffs[i]!= 0.0){  /* this while is for the last element of the polynomial which is a constant value */
			if(coeffs[i]==1){
			printf("+1");	/*  if it's coefficient is 1 then print 1 if -1 then -1 */
			    }	
				else if(coeffs[i]== -1){
				printf("-1");
				}
				   else{
				      if(coeffs[i]<0){
					printf("%.2f",coeffs[i]);	/* if it is different from 1 or -1 like -2.4 then we have to printf it as coefficient */
					   }
				      else{
			              printf("+%.2f",coeffs[i]);
			                        }
			               }
			goto t; /* lastly for the last element we have to check if all terms is 0 or not. for that purpose we did use the counter there. in t row it is controlling for that purpose */
		                              }
		
		/*********** starting from this row we are checking for the middle elements(not first and last elements) ************/
		if(coeffs[i]==0.0){
			count++;	/* if any element has 0 coefficient, increase the counter */
			}
		/*********** we are checking from now on if any coefficient is negative ************/
		else if(coeffs[i]<0.0){ 
		        if(coeffs[i]==-1 && i==1){ /*if any element has a -1 coeff and its degree is 1 then print is as -x */
			    printf("-x");
			   }
				else if(coeffs[i]!=-1 && i==1){ /*if any element does not have -1 as a coeff and its degree is 1 then print it as -2x */
			    printf("%2.fx",coeffs[i]);
			   }
				else if(coeffs[i]==-1 && i!=1){
				printf("-x^%d",i); /*if any element does have -1 as a coeff and its degree is not 1 then print it as -x^2 */
				}
				else{ 	
				printf("%.2fx^%d",coeffs[i],i); /* other than above will be printed as -2x^2*/       
			   }
		}
		/*********** we are checking from now on if any coefficient is positive ************/
		else if(coeffs[i]>0.0){
			if(coeffs[i]==1 && i==1){ /*if any element has a +1 coeff and its degree is 1 then print is as +x */
			    printf("+x");
			   }
				else if(coeffs[i]!=1 && i==1){ /*if any element does not have 1 as a coeff and its degree is 1 then print it as 2x */
			    printf("+%2.fx",coeffs[i]);
			   }
				else if(coeffs[i]==1 && i!=1){
				printf("+x^%d",i); /*if any element does have 1 as a coeff and its degree is not 1 then print it as x^2 */
				}
				else{ 	
				printf("+%.2fx^%d",coeffs[i],i); /* other than above will be printed as +2x^2*/     
			   }
		        }
		    }
		t:
		if(count==5){
		printf("0.0"); /* we did count all the elements 1 by 1 if all of them is zero then print 0.0 */
	}
}
