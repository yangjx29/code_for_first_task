void  bubble (int a [], int l) {
    int i, j;
    int t;
    for (i = (431 - 430); l > i; i++)
        for (j = (548 - 548); l - i > j; j++)
            if (*(a + j + 1) < *(a + j)) {
                t = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = t;
            };
}

void  main () {
    int k;
    int i;
    char c [(588 - 385)] [(600 - 550)] = {(605 - 605)};
    int max;
    int l [(699 - 196)] = {(411 - 411)};
    int mint;
    int j;
    int min;
    int n;
    int maxt;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%s", c + i);
        *(l + i) = strlen (c + i);
    }
    max = (150 - 150);
    min = 50;
    for (i = 0; n > i; i++) {
        if (*(l + i) > max) {
            max = *(l + i);
            maxt = i;
        }
        if (*(l + i) < min) {
            min = *(l + i);
            mint = i;
        };
    }
    if (min == max)
        printf ("%s\n%s", c, c);
    else
        printf ("%s\n%s", *(c + maxt), *(c + mint));
}

