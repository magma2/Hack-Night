#include <unistd.h>
#include <string.h>

int do_copy_thing(char *string) {
    
    char buf1[256];
    char buf2[256];
    char buf3[128];
    /* ... */

    strncpy(buf1, string, sizeof(buf1)-1);
    strncpy(buf2, string, sizeof(buf1)-1);
    /* ... */
    strncpy(buf3, string, sizeof(buf1)-1); // Whups... didn't change the size

    return 0;
}

int main() {
    char userstring[256];
    
    read(0, userstring, sizeof(userstring));
    
    do_copy_thing(userstring);

    return 0;
}
