#include <stdio.h>

int idol_id;
char name[256];

void sc_title(void);
void sc_name(void);
void sc_select(void);
void sc_clear(void);

void save();
void load_savefile(void);

int main(void) {
  int menu;

  menu == sc_title();

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
