#include <stdio.h>
#include <string.h>

/*
 * You've stumbled into vim! Right now you are in command mode (by default), try using hjkl to move around. 
 * Make sure caps lock is off before trying it otherwise you may get hurt!
 *
 * Help! How do I leave this stupid editor?!
 * - In command mode (hit enter after typing these):
 *   - :wq (write and quit)
 *   - :q! (quit without saving)
 * - In insert mode:
 *   - Hit escape to get into command mode, then goto: command mode instructions.
 *
 * Misc Tips:
 * - While in command mode try (hit enter after typing these):
 *   - :line_number, i.e. :23
 *   - ctrl+g
 *
 */

int a = 0;

/*
 * Line/Character Movement
 * Use hjkl to navigate this function.
 * Got that down? Try using w and b to move through this function.
 */
void name(char* name) {
    printf("Hello there, my name is %s!\n", name);
    printf("I'm currently learning vim, its pretty great!!1!!1!one!\n");
}

/*
 * Hey, what if we wanted to move down 10 lines? Try doing 10j
 * Cool, so we can prepend numbers to commands. What about moving forward 5 words? Try 5w
 * 5 words backwards? (hint: b is to move through words backwards)
 */
void movement1() {
    printf("Don't mind me..just moving");
    printf("I'm currently learning vim, its pretty great!!1!!1!one!\n");
}

/*
 * Line/Character Movement (cont)
 * Now that we have basic movement down, we can utilize some shortcuts.
 * Move your cursor in the middle of the line and hit 0.
 * Now, hit $ to get to the other extreme.
 * Once familiar with those, use ^ to learn the sane way of navigation (better alternative to 0).
 */
void shortcuts() {
printf("Here are some movement shortcuts.\n");
    printf("I'm a properly indented line.\n");
}

/*
 * If you're like me then your OCD may be kicking in and you like having your text center on screen.
 * Lucky for us, vim lets us do that! Try hitting zz (center), zt (cursor top), zb (cursor bottom)
 * But wait! We want to reference something at the top of the screen..how do we do that?
 * You can use ctrl+u/d to move page up/down.
 * Alternatively, you can use :line_number to move around. An example would be doing, :0 or :$
 */
void screen_movement() {
    printf("Don't mind us, we're just moving through the screen");
}

/*
 * Okay, enough with this movement crud, I want to start typing because this is a text editor!
 * Fine! (I'm literally talking to myself right now)
 * Try out I or i (insert) in the printf below (remember: you can hit escape to go back into command mode).
 * Alternatively, try out A and a (append).
 * These two keys will allow you to insert text after hitting them (all keys will act normal when in insert mode)
 */
void insertion1() {
    printf("Here is a sentence that should have stuff inserted into it");
}

/*
 * So..now that we can insert..how do we delete?!
 * Well, we will start out with the basics. Hit x to delete a character. Since you may want to undo that
 * you can hit u to undo.
 *
 * NOTE: If at any time you screw up this document you can leave it (without saving) by doing :q! (while in command mode)
 */
void insertion2() {
    /* Stupid kitty won't be quiet when I talk.. lets just delete his meow ^_^ */
    printf("Here is a *meow* sentence that should have stuff inserted into it");
}

/*
 * Okay, so we know how to move around and insert stuff. So lets see if you can
 * put what we've learned so far into practice. Take the comment below and make
 * it an argument to the name() function.
 */
void insertion3() {
    /* "Here is a string that should be printed, but how will you do it?!" */
}

/*
 * Now we can talk a bit about some misc. insertion commands. Primarily o, O, <<, and >>
 * Try out o and O to create new lines (putting you in insertion mode afterwards)
 * If you'd like to format your lines try using >> and <<
 */
void insertion4() {
    /* At the top of the program a is declared to 0 */
    /* We need to redefine a to be 5 */
    printf("this integer has the value of 5: %d\n", a);
printf("ew, we have really bad formatting. we should fix this.");
}

int main(void) {
    /* This name isn't in the same case. My OCD is kicking in, what do?! */
    /* Luckily, we have the ~ key! Move your cursor over the name and hit ~ */
    char* my_name = "ArIStotLe";
    name(my_name);
    shortcuts();
    return 0;
}
