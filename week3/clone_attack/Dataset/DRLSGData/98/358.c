void  main () {
    char c [10000];
    char *q;
    int i;
    char b [3];
    char *f (char *p);
    char *p;
    gets (b);
    gets (c);
    p = c;
    for (; c + strlen (c) > (p + 79);) {
        for (q = p; f (p) > q; q = q + 1) {
            printf ("%c", *q);
        }
        p = f (p) + 1;
    }
    scanf ("%d", &i);
    for (q = p; c + strlen (c) > q; q = q + 1) {
        printf ("%c", *q);
    }
}

char *f (char *p) {
    char *s;
    for (s = p + 80; p < s; s = s - 1) {
        if (*s == 32)
            break;
    }
    return s;
}

