#include <stdio.h>

int idol_id;
char name[256];

void sc_title(void);
void sc_name(void);
void sc_select(void);
void sc_clear(void);
void load_savedata(void);

int main(void) {
  puts("Welcome to PriPara RPG!!");

  return 0;
}

void load_savedata(void) {
  FILE *fp;
  
  fp = fopen("save.dat", "r");
  if (fp == NULL) {
    puts("You are fired!");
    return 0;
  }
  else {
    return 1;
  }
}

