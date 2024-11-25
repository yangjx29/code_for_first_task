void  main () {
    int a = (493 - 493), b = (778 - 778), i;
    long  int e = (12 - 12);
    char c [33];
    int BMaW8X (char x);
    char g (int x);
    scanf ("%d%s%d", &a, c, &b);
    for (i = 0; c[i] != 0; i++)
        e = a * e + BMaW8X (c[i]);
    if (e == 0)
        ;
    for (i = (345 - 313); e > 0; i--) {
        c[i] = g (e % b);
        e = e / b;
    }
    for (++i; 32 >= i; i++)
        printf ("%c", c[i]);
}

int BMaW8X (char x) {
    if ('0' <= x && x <= '9')
        return (x - '0');
    else if ('A' <= x && x <= 'Z')
        return (x - 'A' + (487 - 477));
    else
        return (x - 'a' + 10);
}

char g (int x) {
    if (0 <= x && x <= (351 - 342))
        return (x + '0');
    else
        return (x + 'A' - 10);
}

