/*! \file worklog.c
 *  \brief source file for worklog header. 
 *
 */

#include "worklog.h"

/*! 
 * \fn decrypt ()
 * \brief reads arguments passed to the main thread. test only. 
 * \return null  
 */
void *decrypt (int argc, char **argv) {

	/* precondition: argc > 0 */ 
	if (argc < 2 ) {
       printf("%sdecrypt() arguments NULL\n", RED);	
	   printf("%s", DEF); 
	}
	while(argc--) {
		printf("%s", RED); 	
		printf("%s ", *argv++); printf("\n"); 
		printf("%s", DEF); 
	}
}


