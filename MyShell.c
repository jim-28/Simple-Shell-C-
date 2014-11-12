#include <stdio.h>
#include <string.h>

main(){
	char prompt[100]= "Jimbo's Shell";
	char input[100];
	char compareSP[100];
	char compareQ[100];
	char setPrompt[100]= "set prompt";
	char quit[100]= "quit";
	int i = 0;
	int j = 0;

	while(1){
	printf("%s$ ", prompt);
	fgets(input, 99, stdin);

	for(i=0; i<10; i++){
		compareSP[i]=input[i];
		}
	i=0;
	for(i=0; i<4; i++){
       		compareQ[i]=input[i];
       		}
        i=0;
	

	/*IF INPUT BEGINS WITH 'SET PROMPT'*/
	if(strcasecmp(compareSP,setPrompt) == 0){
		memset(&prompt[0], 0, sizeof(prompt)); 
	
		if((strlen(input)-11)>0){
			for(j=0;j<(strlen(input)-12);j++){
				prompt[j] = input[j+11];	
				}
			}
		j=0;
		i=0;
		memset(&input[0], 0, sizeof(input));
		}	
	/* ELSE IF INPUT BEGINS WITH 'QUIT' RETURN 0 */
	else if(strcasecmp(compareQ,quit) == 0){
		return 0;
		}
/* 	ELSE PUT INPUT INTO COMMAND LINE & DISPLAY THE OUTPUT      */
	else{
		system(input);
		memset(&input[0], 0, sizeof(input));
		} 
	}
}
