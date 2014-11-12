#include <stdio.h>
#include <string.h>

main(){
	char setPrompt[]= "Jimbo's Shell";
	char input[]= "";
	int i = 0;
	int j = 0;

	while(1){
	printf("%s$ ", setPrompt);
	scanf("%s", input);

	if(input[i] == 'S'){
	memset(&setPrompt[0], 0, sizeof(setPrompt)); 
	setPrompt[j] = input[j];	
	
	j=0;
	i=0;
	}	
		
	else if(input[i] == 'Q'){
		return 0;
		}
/* 	ELSE PUT INPUT INTO COMMAND LINE & DISPLAY THE OUTPUT      */ 
	}
}
