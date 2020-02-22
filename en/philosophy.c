#include <stdio.h>
#include <string.h>

int main () {
    char question[] = "What is ";
    char idea[]     = "philosophy";
    char prefix[]   = "philosophy of ";
    char symbol[]   = "?";

    char iteration[42] = ""; // assume 42 is infinite ∞

    while(1) {
        printf("%s%s%s%s\n", question, iteration, idea, symbol);
        strcat(iteration, prefix); // a logical bug it is
    }
}
