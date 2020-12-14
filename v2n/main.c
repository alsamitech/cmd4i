#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#define ever (;;)

//typedef char int8_t;

int args[4];

char* to_interpret;

int8_t Setup(int argc, char** argv);
char* ytb(int n);
int8_t Work();
int8_t Finish();
void interrupt_handler(int);

char* read_from_file(const char*);

int8_t color_opt;

int main(int argc, char** argv){
	signal(SIGINT, interrupt_handler);
	Setup(argc, argv);
	char* token=strtok(to_interpret, "\n");
	Work(token);
	while(token!=NULL){
		token=strtok(NULL, "\n");
		Work(token);
	}
	Finish();

	return 0;
}

int8_t Setup(int argc, char** argv){
	to_interpret=read_from_file(argv[1]);
	/*for(int i=0;i<argc;i++){
		if(strcmp(argv[i],"-b")==0){
			printf("\033[1;37");
			color_opt=0x01;
		} if(strcmp(argv[i],"-v")==0){
			printf("\033[1;34cmd4i: The 4 Ineger command line\033[0m\nDeveloped At Alsami Technologies (2020)\n");
		}
	}*/

	return 0;
}

int8_t Finish(){

	if(color_opt&0x01)
		printf("\033[0m");
	


	return 0;
}


int8_t Work(char* parseme){
		//printf("\033[1;31m> \033[0m");
		if(sscanf(parseme,"%d %d %d %d", &args[0], &args[1], &args[2], &args[3])==EOF){
			fprintf(stderr,"\033[1;31mscanf() error\033[0m\n");
			return 1;
		} else{
			//printf("Debug (%d) (%d) (%d) (%d)\n", args[0], args[1], args[2], args[3]);
			// parse here
			if(args[0]==1&&args[1]==0&&args[2]==0&&args[3]==0){
				printf("%s\n",read_from_file("docs/Help.txt"));
				//continue;

			} else if(args[0]==1&&args[1]==0&&args[2]==69){
				for(int i=args[3];i>0;i--){
					printf("\033[0;41m \033[0m");
					printf("\033[0;42m \033[0m");
					printf("\033[0;43m \033[0m");
					printf("\033[0;44m \033[0m");
					
				}
				puts("\n");
				//continue;
			
			}else if(args[0]==2020){
				printf("1:[%p] >> %s\n", &args[1], ytb(args[1]));
				printf("2:[%p] >> %s\n", &args[2], ytb(args[2]));
				printf("3:[%p] >> %s\n", &args[3], ytb(args[3]));
				
			
			} else if(args[0]==1&&args[1]==1&&args[2]==1&&args[3]==1){
				Finish();
				exit(1);
			
			}else{
				printf("\033[1;31mCommad (%d) (%d) (%d) (%d) does not exist\033[0m\n",args[0], args[1], args[2], args[3]);
			}
		}
		// trash the memory here
		args[0]==0;args[1]==0;args[2]==0;args[3]==0;



	return 0;
}

char* read_from_file(const char* filename){
	char* buffer=0;
	long length;
	FILE* f=fopen(filename, "rb");
	if(f){
		fseek(f,0,SEEK_END);
		length=ftell(f);
		fseek(f,0,SEEK_SET);
		buffer=calloc(length, length);
		if(buffer)
			fread(buffer, 1, length, f);

		fclose(f);
	}

	return buffer;
}

char* ytb(int n){
	static char bin[32];
	int x;
	for(x=0;x<31;x++){
		bin[x]=n&0x80?'1':'0';
		n<<=1;
	}

	return(bin);
}

void interrupt_handler(int num){
	printf("Interrupt. Closing (%d)\n", num);
	Finish();
	exit(1);
}
