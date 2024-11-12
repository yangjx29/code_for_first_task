int main () {
    char t [(581 - 431)], x [150];
    char *pt = t;
    char *px = x;
    gets (t);
    printf ("%s", x);
    for (; !('\0' == *pt); pt = pt + 1, px++) {
        if ((*pt != ' ') || ((*pt = ' ') && (*(pt - 1) != ' '))) {
            *px = *pt;
        }
        else {
            px--;
        };
    }
    *px = '\0';
    return (437 - 437);
}

