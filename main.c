#include <stdio.h>
#include <stdlib.h>

/*this is calculator version 1.2. hope you enjoy*/
/*This was made by Cody Grande*/

double first, secound, finale;

char c;

int main(void){
    printf("Add, subtract, multiply, or divide,(a, s, m, or d)\n");
    c = getchar();
    printf("What is the first number\n");
    scanf("%lf", &first);
    while(first == 0){
        printf("please enter a non-zero number\n");
        scanf("%lf", &first);
    }
    printf("what is the secound number\n");
    scanf("%lf", &secound);
    while(secound == 0){
        printf("please enter a non-zero number\n");
        scanf("%lf", &secound);
    }
    switch(c){
        case 'a':
            finale = (first+secound);
            printf("%lf\n", finale);
            break;
        case 's':
            finale = (first-secound);
            printf("%lf\n", finale);
            break;
        case 'm':
            finale = (first*secound);
            printf("%lf\n", finale);
            break;
        case 'd':
            finale = (first/secound);
            printf("%lf\n", finale);
            break;
        default:
            printf("please enter expected letter\n");
            c = getchar();
            break;
    }
    return 0;
}









