#include <stdio.h>
#include <stdlib.h>

int idol_id;
char name[256];

void sc_title(void);
void sc_name(void);
void sc_select(void);
void sc_clear(void);
void load_savedata(void);
void save(void);

int main(void) {
  puts("Welcome to PriPara RPG!!");

  return 0;
}

void load_savedata(void) {
  FILE *fp;
  fp = fopen("save.dat", "r");
  if (fp == NULL) {
    puts("You are fired!");
    exit(-1);
  }
  else {
    fscanf(fp, "%d", &idol_id);
    fscanf(fp, "%s", name);
  }
  fclose(fp);
}

void save(void) {
  FILE *fp;
  fp = fopen("save.dat", "w");
  fprintf(fp, "%d\n", idol_id);
  fprintf(fp, "%s\n", name);
  fclose(fp);
}
  

