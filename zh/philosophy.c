#include <stdio.h>
#include <string.h>

int main () {
    char question[] = "什么是";
    char idea[]     = "哲学";
    char suffix[]   = "的哲学";
    char symbol[]   = "？";

    char iteration[42] = ""; // assume 42 is infinite ∞

    while(1) {
        printf("%s%s%s%s\n", question, idea, iteration, symbol);
        strcat(iteration, suffix);
    }
}
