#include <stdio.h>

int main(){
    int age;
    int is_seito;

    
    printf("年齢を入力してください---");
    scanf("%d", &age);
    printf("「猫でも学園」の\n生徒さんですか(Yes:1, No:0)---");
    scanf("%d", &is_seito);

    if (age < 6 || is_seito == 1){
        printf("入場料は無料です\n");
    } else {
        printf("入場料は1000円です\n");
    }
    printf("--------------------------------\n");
    printf("では、ごゆっくりお楽しみください\n");

    return 0;
}