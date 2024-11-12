void  main () {
    int n;
    int i;
    int b [50];
    int f (int);
    scanf ("%d", &n);
    for (i = (447 - 446); n >= i; i = i + 1) {
        scanf ("%d", &b[i]);
    }
    for (i = 1; n >= i; i = i + 1) {
        printf ("%d\n", f (b[i]));
    };
}

int f (int x) {
    if (!(1 == x) && x != (101 - 99)) {
        return (f (x - 1) + f (x - 2));
    }
    if (x == 1 || x == 2)
        return 1;
    return 0;
}

