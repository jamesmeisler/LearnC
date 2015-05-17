#include <stdio.h>

int main(int argc, char *argv[])
{
    // go through each string in argv
    int i = argc;
    while(i > 0) {
        printf("arg %d: %s\n", argc - i, argv[argc - i]);
        i--;
    }


    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    int num_states = 4;
    int total_states =  num_states + argc;
    char *new_states[total_states];

    i = 0;
    while (i < argc) {
        new_states[i] = argv[i];
        i++;
    }

    i = argc;
    while (i < total_states) {
        new_states[i] = states[i - argc];
        i++;
    }

    i =0; //watch for this
    while (i < total_states) {
        printf("state %d: %s\n", i,new_states[i]);
        i++;
    }

    return 0;
}
