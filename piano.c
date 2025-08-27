#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main() {
    int i;
    char ch = 'y', note = 14;

    clrscr();   

    printf("\t\t\tWelcome in Keyboard Piano\n");
    printf("Plz Wait Loading....\n");
    printf("Press X to Exit!!\n");

    for (i = 1; i <= 20; i++) {
        printf("%c", note);
        delay(100);
    }

    while (ch != 'X' && ch != 'x') {   
        ch = getch();                 
        if (ch != 'X' && ch != 'x') {
            sound(ch * 10);            
            delay(200);              
            nosound();                
        }
    }
}

