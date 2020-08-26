#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Macros
#define vop (void)
#define print printf
#define prc process();
#define and &&
#define strspam strspam();
#define eif else if
#define cnli nli();

int areSwitch = 1;

// Basic System Functions
void cls();

// System Functions
void wes();
void process();
void strsp();
void nli();
void scall();

int main vop {
  printf("ReplIt\n");
  printf("-----------------\n-----------------\n");
  print("Type (1 0 0 0) for help or if you don't know what to do.\n");
  while (areSwitch == 1){
    cnli
    prc
  }
}

// Command Processor
void process() {
  print("client@repl.it> ");
  int arg1;
  int arg2;
  int arg3;
  int arg4;
  scanf("%d %d %d %d", &arg1, &arg2, &arg3, &arg4);
  if (arg1 == 1) {
    if (arg2 == 1) {
      //print("test");
    } else if ((arg2 == 0) and (arg3 == 0) and (arg4 == 0)) {
      print("How to use:\nThis command processor can only accept integers as input. You have to wrtie \"0\" if you want to specify no argument.\nA possible example of this is if you want to get command help. The standard help command is set at 1 - - - (- will be used to reperesent 0 as it is easier to understand.\nThe command list is available at 1 1 - -\n The command processor takes 4 args as of now an \"arg\" means command argument.");
    } else if ((arg2 == 2) and (arg3 == 0) and arg4 ==0) {
      printf("Hello World Program in C\n#include <stdio.h>\nint main(void) {\n\tprintf(\"Hello World!\")\n}");
    } if (arg2 == 1) {
      printf("ReplIt Shell Commands:\nNumber Spammer: 2 1 1 2\nClear Screen: 2 1 4 -\n");
    } else if ((arg2 == 1) and (arg3 == 1) and (arg4 == 0)){
      sycal();
    }
  } else if (arg1 == 2) {
    if (arg2 == 1) {
      if (arg3 == 1) {
        if (arg4 == 1) {
          printf("2.1.1.1 Rocks!");
        } else if (arg4 == 2) {
          wes();
        }
      } else if ((arg3 == 3) and (arg4 == 0)) {
        strsp();
      } else if (arg3 == 4) {
        cls();
      } else if (arg3 == 5) {
      }

    }

  } else if (arg1 == 3) {

  } else if (arg1 == 4) {

  } else if (arg1 == 5) {

  } else if (arg1 == 6) {
    if (arg2 == 1) {
      
    } else if (arg2 == 2) {

    } eif (arg2 == 3) {

    }

  } else if (arg1 == 7) {

  } else if (arg1 == 8) {

  } else if (arg1 == 9) {

  } else if (arg1 == 10) {

  } else if (arg1 == 11) {

  } else if (arg1 == 12) {

  } else if (arg1 == 13) {
    
  }
}

// Functions

void wes() {
  printf("C Number Spammer, written in pure C.\n");
  printf("Enter Number to spam: ");
  int bloatbois;
  scanf("%d", &bloatbois);
  int keepalive = 1;
  while (keepalive == 1) {
    printf("%d", bloatbois);
  }
}

void strsp () {
  printf("C String Spammer\nEnter String to spam: ");
  char spam[100];
  scanf(" %[^\n]", spam);
  int keepalive = 1;
  while (keepalive == 1) {printf("%s\n", spam);}
}

void nli() {
  printf("\n");
}

void cls() {
  system("clear");
}

void scall() {
  printf("Enter Function to escalate to System: ");
  char sys[70];
  
}