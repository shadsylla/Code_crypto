 #include <stdio.h>
#include <ctype.h>







/*Setting up the variables holding the characters */
		
char 	cipher[]		=	"SS`DD`AA\n";  

char	key[]			=	"ABC\n"; 

char	secret_message[]	=	"NOW\n";// to do: assign all of the alphabet.  

int 	cipher_numbers[]	=	{19,19,96,4,4,96,1,1}; 
int	key_numbers[]		=	{5,4,73}; 
int  	message_numbers[]	=	{14,15,23}; 

/*  second message */
char 	secret_message_1[]	=	"BEFORE\n"; 
char	cipher_1[]		=	"AAXZFK\n"; 

int	message_numbers_1[]	=	{2,5,6,15,18,5}; 
int	cipher_numbers_1[]	=	{20,20,24,26,22,28}; 
int	key_numbers_1[]		=	{18,15,18,11,4,23}; 


          /* defining the alphabetic system */

int	const  alphabet_positions[27]	=
	{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26}; 
int	 alphabet_key[]		=	{1,2,3,4,5}; 

char 	user_secret_message[30];


/*second part: assign numbers to every character.*/


int main( int argc, char *argv[]) {


 

 // print the info of every position. From zero to N. 


//printf(" first:%c", cipher[0]); //printf(" first:%c", key[0]);
 printf(" this: %d, the last: %d\n", cipher_numbers[0], cipher_numbers[7]); 

 	int	idx = 0;

	while( secret_message[idx] != EOF) 
	{
	// cipher and nums of it will interact here. 
	// connect the cipher  at pos 0 to number cipher. 
	int  cipher_n	=	0; 
	int key_n	=	0; 
	
        // connect the cipher to adjacent array.
	cipher_n	=	cipher_numbers[idx];

        // connect the keys

	key_n		=	key_numbers[idx]; 
		
	// cipher_n "19" -  number_key[0] 
		
	// The main equation: cipher_numbers[idx]  minus key_numbers[idx] 
	int clear_message_number	=	   cipher_n	-	key_n; 
	/* if the clear_message = message_number at position index, 	
		then print the letter from the secret_message[ idx] 
	*/	 
	 
	if(clear_message_number		==	message_numbers[idx])
		{
			printf("%c.", secret_message[idx]); 
		}
		else { break; }
	idx++; 
	}
		printf("==================== \n\n\n\n\n\n");

	/* test the scope of the variable in a while loop */ 
	int q	=	0; 
	while( secret_message_1[idx] != EOF)
	{
		// set up the new variables 
		int cipher_n	=	0; 
		int key_n 	=	0; 
		
		cipher_n	=	cipher_numbers_1[q]; 
		key_n		=	key_numbers_1[q];
		
		// the main equation: cipher_num - key_num = clear_message.
		int clear_message_number_1	=	cipher_n	-	key_n;

		// if this equivelante to that then print, else break.		
		if(clear_message_number_1	==	message_numbers_1[q])
		{
			printf("%c.", secret_message_1[q]); 
		}
		 else { break; }  	
					
		++q; 
	}






return 0; 

};

 
