#include <stdio.h>

int idol_id;
char name[256];

int is_clamped(int val, int start, int end){
  return start <= val && start <= end;
}

int check_isLoad(int isLoad){
  return is_clamped(isLoad, 0, 1);
}

int check_idol_id(int idol_id){
  return is_clamped(idol_id, 0, 2);
}

int sc_title(void){
  int isLoad = -1;

  while(!check_isLoad(isLoad)){
    puts("=== Pripara RPG?!?! ===");
    puts("ロードするときは0!");
    puts("新しく始めるときは1!");
    puts("を入力してね!");

    scanf("%d", &isLoad);

    if(!check_isLoad(isLoad))
      puts("1か0を入力して！！！！！！");
  }

  return isLoad;
}

void sc_name(void){
  puts("あなた(主人公)の名前は？");
  printf("> "); scanf("%s", name);
}

void sc_select(void){
  int temp_idol_id = -1;

  while(!check_idol_id(temp_idol_id)){
    puts("初期アイドルを選んでね！");
    puts("そふぃ : 0, らぁら : 1, みれぃ : 2");
    scanf("%d", &temp_idol_id);

    if(!check_idol_id(temp_idol_id))
      puts("0 ~ 2を入力して！！！！！！");
  }

  idol_id = temp_idol_id;
}

void sc_clear(void){
  switch(idol_id){
  case 0: puts("そふぃは神アイドルになりました！！れっどふらっしゅ～"); break;
  case 1: puts("らぁらは神アイドルになりました！！やったぁ！！のかしこま！！"); break;
  case 2: puts("みれぃは神アイドルになりました！！やったぷり！！"); break;
  }
}

int main(void) {
  puts("Welcome to PriPara RPG!!");
  
  return 0;
}
