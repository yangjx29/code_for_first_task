int main () {
    int l;
    char c [2000];
    gets (c);
    char *p2;
    char *p1 = c;
    char *pointer = c;
    int n;
    l = strlen (c);
    c[l] = ' ';
    for (p2 = c; p2 <= &c[l]; p2++) {
        if (*p2 == 32)
            break;
    }
    for (p2 = (p2 + 1); p2 <= &c[l]; p2++) {
        if (*p2 == 32) {
            if (p2 - pointer > 80) {
                pointer = (p1 + 1);
                p1 = (p1 + 1);
            }
            {
                p1 = p1;
                for (; p1 < p2;) {
                    printf ("%c", *p1);
                    p1++;
                };
            };
        };
    }
    scanf ("%d\n", &n);
    return 0;
}

