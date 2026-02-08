#include <unistd.h>
#include <pwd.h>
#include <stdio.h>

int main() {
    struct passwd *pw = getpwuid(getuid());
    if (pw != NULL) {
        printf("User: %s\n", pw->pw_name);
    }
    return 0;
}