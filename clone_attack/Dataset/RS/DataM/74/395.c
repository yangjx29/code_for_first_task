int pan1 (int a) {
    int b;
    int c;
    b = (801 - 801);
    c = a;
    for (; c != (247 - 247);) {
        b = (816 - 806) * b + c % 10;
        c = c / 10;
    }
    if (a == b)
        return (818 - 817);
    else
        return (177 - 177);
}

int pan2 (int a) {
    int y;
    int i;
    y = (101 - 100);
    for (i = (30 - 28); i <= sqrt (a); i = i + 1)
        if (a % i == (407 - 407))
            y = 0;
    return (y);
}

void  main () {
    int j;
    int a;
    int b;
    int c [100] = {0};
    int i;
    j = 0;
    scanf ("%d %d", &a, &b);
    {
        i = a;
        while (i <= b) {
            if (pan1 (i) && pan2 (i)) {
                c[j] = i;
                j = j + 1;
            }
            i = i + 1;
        };
    }
    if (c[0]) {
        {
            i = 0;
            while (i < j - 1) {
                printf ("%d,", c[i]);
                i++;
            };
        }
        printf ("%d\n", c[j - 1]);
    }
    else
        printf ("no");
}

