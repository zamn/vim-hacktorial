#include <stdio.h>
#include <string.h>

/*
 * Author: Adam Hamot
 * References: http://yanpritzker.com/2011/12/16/learn-to-speak-vim-verbs-nouns-and-modifiers/
 */

/*
 * You've stumbled into vim! Right now you are in normal mode (by default), try using hjkl to move around. 
 * Make sure caps lock is off before trying it otherwise you may get hurt!
 *
 * NOTE: If at any time you accidentally bork the system you can quit without saving doing :q!
 *
 * Help! How do I leave this stupid editor?!
 * - In normal mode (hit enter after typing these):
 *   - :wq (write and quit)
 *   - :q! (quit without saving)
 * - In insert mode:
 *   - Hit escape to get into normal mode, then goto: normal mode instructions.
 *
 * Misc Tips:
 * - While in normal mode try:
 *   - :line_number, i.e. :23 (enter after)
 *   - ctrl+g
 *   - %, moves your cursor to a closing bracket (works for parens, { }, [ ], and most others)
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
 * Try out I or i (insert) in the printf below (remember: you can hit escape to go back into normal mode).
 * Try out A and a (append) in the printf below as well.
 * These two keys will allow you to insert text after hitting them (all keys will act normal when in insert mode)
 */
void insertion1() {
    printf("Here is a sentence that should have stuff inserted into it");
}

/*
 * So..now that we can insert..how do we delete?!
 * Well, we will start out with the basics. Hit x to delete a character. Since you may want to undo that
 * you can hit u to undo; if you'd like to re-do use ctrl+r.
 *
 * NOTE: If at any time you screw up this document you can leave it (without saving) by doing :q! (while in normal mode)
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
 * Want vim to automagically format for you? == on the current line saves you tons of trouble.
 * Want to format the whole document?! You crazy <gender>! Try doing =G (take a look at shortcuts() after)
 * Later we will see more magic we can do with formatting!
 */
void insertion4() {
    /* At the top of the program a is declared to 0 */
    /* We need to redefine a to be 5 */
    printf("this integer has the value of 5: %d\n", a);

printf("ew, we have really bad formatting. we should fix this.");
printf("arg, we have really bad habits");
                    printf("yeah, physics");
    printf("hi");
}

/*
 * So now we have the *basics* down, we can get to the more fun stuff. 
 * When using the more advanced features of vim you will see many people refer
 * to some actions as 'talking to vim'. Some commands we enter will be in the format
 * of 'verb [modifier] object' (this means three 2-3 key presses in a row). 
 * Yes, it seems weird how a text editors commands can be thought of as 'verbs', 
 * 'modifiers', and 'objects' but once you understand this you can unlock the power of vim.
 *
 * We'll start off with the verbs. These are the verbs we'll talk about:
 * - c (means change)
 * - d (means delete)
 * - y (means yank or copy, touched on later)
 * - v (means visual, which we will touch on later in the visual mode section)
 *
 * We will focus primarily on 'c' and 'd' for this exercise until we learn modifiers.
 * When typing a verb twice (excluding v) it will perform that verb on the whole line
 * your cursor is on.
 *
 * Try typing: dd on the printf() below. Additionally, try out doing cc and observe
 * their differences.
 *
 * Want a taste of modifiers?
 * Try typing: d$ on the longer printf(). Additionally, try doing c$ and observe.
 *
 */
void verbs() {
    /* This printf should be deleted.. but we want to delete the whole line at once */
    printf("Delete me!");
    printf("Here is a sentence that is moderately long but should be deleted halfway through");
}

/*
 * So now that we've seen the verbs we will talk about the modifiers we can use in conjunction
 * with these verbs.
 *
 * These modifiers include: 
 * - i (means inside)
 * - t (means till)
 * - f (means find)
 *
 * Modifiers are sort of useless without our text objects at this point so lets introduce
 * what we will be using:
 * - w (means word)
 * - ", ', (, ), [, ], {, }, <space>, $, any single chars you can think of
 *
 * As you can see we aren't going over very many modifiers as we only need a couple to
 * show the power of vim. Additionally you should know there are other modifiers that
 * you can find in the references section.
 *
 */
void power1() {
    /* Try using dw (delete word) on one of the words below. */
    printf("Here is a printf where we have a bunch of words and little time!");
    /* 
     * Hm, there is too much friction with dw! I want something fast.
     * Try using cw (change word) then! 
     */
    printf("Here is a printf where we have a bunch of words and little time!");
    /* 
     * I want to modify part of this sentence so that I can change the second
     * half of it and keep on working.
     * Try doing ct" (change till we hit a ") when your cursor is on 'b' of 'bunch'
     * Alternatively we can do dt" which will do the same thing except keep you
     * in Normal mode.
     */
    printf("Here is a printf where we have a bunch of words and little time!");
    /*
     * I really want to change what is inside of this stupid printf but my
     * restless hand syndrome won't let me highlight the words! What will I do?!
     * Try doing: ci" (change inside ") anywhere inside of the ""
     * Alternatively, you can navigate to the 'H' in 'Here' and type ct"
     */
    printf("Here is a printf where we have a bunch of words and little time!");
    /*
     * Extra printf()'s to have fun with.
     */
    printf("Here is a printf where we have a bunch of words and little time!");
    printf("Here is a printf where we have a bunch of words and little time!");
    printf("Here is a printf where we have a bunch of words and little time!");
    printf("Here is a printf where we have a bunch of words and little time!");
    printf("Here is a printf where we have a bunch of words and little time!");
    printf("Here is a printf where we have a bunch of words and little time!");
    printf("Here is a printf where we have a bunch of words and little time!");
    printf("Here is a printf where we have a bunch of words and little time!");
}

/*
 * Now that we've seen the verbs 'delete' and 'change' we can take a look at
 * visual. Notice how each of the different combinations we make can all be used
 * with various different verbs. For example, dt" can also be done with ct" or
 * now, vt"
 * Another one is simply, vi"
 * Or another one: vw
 *
 * ------------------------------------------------------------------------------
 * Why can't we do vv? This is because when we hit v we are actually going into
 * 'Visual Mode' which allows us to visually select certain things. So by hitting
 * v and then hitting it again you are simply toggling between visual mode being
 * on and off.
 * ------------------------------------------------------------------------------
 *
 * You'll notice after running these commands that text is highlighted rather than
 * instantly deleted. This is great if you want to copy and paste (or yank and paste
 * as vim calls it, we will cover this next). Another use case is simply *seeing* 
 * what you delete or change before you actually do it. If you try one of the commands 
 * above and then hit d (delete) or c (change), those respective commands will take place. 
 * Additionally you can even type x (delete char) which will act as 'delete selection'.
 */
void visual() {
    printf("Here is a printf where we have a bunch of words and little time!");
    printf("Here is a printf where we have a bunch of words and little time!");
    printf("Here is a printf where we have a bunch of words and little time!");
    printf("Here is a printf where we have a bunch of words and little time!");
}

/*
 * Now that we've seen all of the various verbs we can *finally* talk about copy and pasting!
 * VIM calls these yank and paste (not sure where yank comes from).
 * You yank something by typing y and either a text object w (word) or $ (end of line).
 * Additionally, like with the other verbs you can type yy to copy the whole line.
 *
 * We can combine this functionality with the visual mode to copy blocks of things
 * quickly and efficiently. Pro tip: hitting shift+V does some cool things, check it out!
 *
 * But how do we paste? We can paste by typing:
 * P - paste before cursor
 * p - paste after cursor
 *
 * If we're dealing with lines ((Shift + V) + y):
 * P - paste above cursor
 * p - paste below cursor
 *
 * So lets try to copy and paste something
 *
 */
void copypasta() {
    /* comments here blah */
    /* Can you make a box?! */
    /* How long can you make the box? */
    printf(" ------------------------------ ");
    printf("|                              |");

    /* Copy the word blah from this printf */
    printf("Here is the word i want to copy: blah");
    printf("The word I copied was: ");
}

int main(void) {
    /* This name isn't in the same case. My OCD is kicking in, what do?! */
    /* Luckily, we have the ~ key! Move your cursor over the name and hit ~ */
    char* my_name = "ArIStotLe";
    name(my_name);
    shortcuts();
    return 0;
}
