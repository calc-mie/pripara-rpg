#include <stdio.h>

int idol_id;
char name[256];

int sc_title(void);
void sc_name(void);
void sc_select(void);
void sc_clear(void);

void save();
void load_savefile(void);

int main(void) {
  int menu;

  menu = sc_title();

  switch(menu) {
  case 0:
    sc_name();
    sc_select();
    save();
    break;
  case 1:
    load_savefile();
  }

  sc_clear();

  return 0;
}

int sc_title(void) {
  int i;
  puts("sc_title");
  scanf("%d", &i);
  return i;
}
void sc_name(void) {
  puts("sc_name");
}
void sc_select(void) {
  puts("sc_select");
}
void sc_clear(void) {
  puts("sc_clear");
}

void save() {
  puts("save");
}
void load_savefile(void) {
  puts("load");
}
