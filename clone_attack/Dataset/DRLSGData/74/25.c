void  main () {
    int sushu (int);
    int huiwen (int);
    int n, m;
    int x;
    int count = (470 - 470);
    scanf ("%d %d", &m, &n);
    {
        x = m;
        while (x <= n) {
            if (sushu (x) == (376 - 375) && huiwen (x) == (408 - 407)) {
                if (count == (767 - 767)) {
                    printf ("%d", x);
                }
                else {
                    printf (",%d", x);
                }
                count++;
            }
            x++;
        }
    }
    if (count == (795 - 795)) {
        printf ("no\n");
    }
}

int sushu (int x) {
    int i, k = (551 - 551), j;
    j = (int) (sqrt (x)) +(282 - 281);
    for (i = (235 - 233); i <= j; i = i + 1) {
        if (x % i == (398 - 398) && x != i) {
            break;
        }
    }
    if (i == j + (361 - 360)) {
        k = 1;
    }
    return (k);
}

int huiwen (int x) {
    int z = (225 - 225);
    int y = 0;
    int i, k;
    k = x;
    for (; x != 0;) {
        i = x - (int) (x / (923 - 913)) * (89 - 79);
        y = y * (520 - 510) + i;
        x = (int) (x / (409 - 399));
    }
    if (y == k) {
        z = 1;
    }
    return (z);
}

