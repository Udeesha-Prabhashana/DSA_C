#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<limits.h>
#include<stdbool.h>
#define max 10

char a[10][10];                                           //creat a char array to input expression.
char b[10][10];                                           //creat b char array to input expression.
int top=-1;                                               // Declaring the top of the stack.
int i, j;                                                 //Declaring the temporary number.

void pop()                                                //pop function
{
    if(top==-1){                                          //Checking Array is empty or not.
    	printf("Underflow\n");                            //if array is empty print the underflow.
	}	
    else{                                                 //if array is not ampty.
  	    strcpy(b,a[top]);                                 //pop the top element value in the 'a' array and it value assign 'b' array.
  	    top--;                                            // The top is reduced by one
    }	
}

void push(char x[10])                                     //push function
{
	if(top==max-1){                                       // Checking Array is full or not. 
		printf("overflow\n");	                          //if array is full print the overflow.
	}
	else{                                                //if array is not full.
		top++;                                           // The top value is increased by one
		strcpy(a[top],x);                                //the character is inserted into the top of the stack. 
	}
}

void expression(char x)                                  //the exprerssion 
{
	if((x >= 'a' && x <='z')||(x >= 'A' && x <= 'Z')){   //check the if condition and see if the characetr is a capital or simple letter
		char c[2]={x,'\0'};                              //recieved char value convert to string value.
		push(c);                                         //call the push function and pass the c variable as a argivment
	}
	else if(x == '+' || x == '-' ||x == '/' ||x == '*')  // If a character in the expression is one of the operations +,-,*,/ the program will execute this 'if'.
	{
		char d[10];                                      //creat a char array to input expression.
		pop();                                           //call the pop function.
		strcpy(d,b);                                     //the 'd' character value is inserted into the d variable.
		pop();                                           //call the pop function.
		printf("LD \t%s\n",b);                           //print the lD & b value.
	
	    switch(x){                                       //use the switch function.
	    	
	    	case '*':                                    // Checks if the character sent is equal to *
	    		printf("ML \t%s\n",d);                   // Copies the string "ML" to the op array (operator)
	    		break;                                   // Breaks the switch.
	    	case '+':                                    // Checks if the character sent is equal to +
	    		printf("AD \t%s\n",d);                   // Copies the string "AD" to the op array (operator)
	    		break;                                   // Breaks the switch.
			case '-':                                    // Checks if the character sent is equal to -
	    		printf("SB \t%s\n",d);                   // Copies the string "SB" to the op array (operator)
				break;	                                 // Breaks the switch.
			case '/':                                    // Checks if the character sent is equal to /
	    		printf("DV \t%s\n",d);                   // Copies the string "DV" to the op array (operator)
	    		break;                                    // Breaks the switch.
			default:	                                  //when default.
			    break;			                          // Breaks the switch.
		}
	
	    char e[10]="TEMP";                              //creat a char array to and insert 'TEMP' in to e character variable.
	    char f[5];                                      //creat a char array to input expression.
	    sprintf(f, "%d", ++i);                          //integer value convert to string value.
	    strcat(e,f);                                    //'e'  values add to'f' value.
	    push(e);                                        //call the push function and pass the 'e' variable as a argivment.
	    printf("ST \t%s\n",e);                          // Copies the string "ST" to the op array (operator)
	}
}

int main()                                            //main function
{
	char str[50];                                     //creat a char array to input expression.
	printf("Enter your expression\t");                // Prints out "Enter the expression: " for the user.
	scanf(" %s",str);                                 // The string entered by the user is stored in the char array mentioned before.
	             
	for(j=0;str[j]!= '\0';j++){                       // The user input expression is traversed using a for loop
		expression(str[j]);                           //call the expression function and pass the 'str[j]' variable as a argivment.
	} 
	return 0;                                         // Returns 0 for the main function.
}