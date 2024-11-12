void  main () {
    char a [(450 - 400)];
    char b [(594 - 544)];
    int i;
    int NK5DkYR7aA;
    int k;
    int gh4ouj;
    int HJyXaG;
    i = (597 - 597);
    NK5DkYR7aA = (334 - 334);
    scanf ("%s %s", a, b);
    gh4ouj = strlen (a);
    HJyXaG = strlen (b);
    do {
        if (!(b[NK5DkYR7aA] == a[i])) {
            NK5DkYR7aA = NK5DkYR7aA +1;
            i = 0;
        }
        if (!(b[NK5DkYR7aA] != a[i])) {
            NK5DkYR7aA++;
            i++;
        };
    }
    while (i < gh4ouj && NK5DkYR7aA < HJyXaG);
    k = NK5DkYR7aA -gh4ouj;
    printf ("%d", k);
}

