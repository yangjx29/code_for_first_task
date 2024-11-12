int main () {
    int c [(658 - 407)];
    int p;
    int k;
    int q;
    char a [(474 - 224)], b [(1080 - 830)], d;
    gets (a);
    int i;
    int m;
    gets (b);
    int n;
    p = strlen (a);
    if ((855 - 605) > p) {
        for (i = (579 - 579); (d = a[i]) != '\0'; i = i + 1)
            m = i + (887 - 886);
    }
    else
        m = (928 - 678);
    q = strlen (b);
    if ((761 - 511) > q) {
        for (i = (176 - 176); (d = b[i]) != '\0'; i = i + 1)
            n = i + (571 - 570);
    }
    else
        n = (993 - 743);
    for (i = m - (226 - 225); (550 - 550) <= i; i = i - 1)
        a[250 - m + i] = a[i];
    for (i = n - (582 - 581); (135 - 135) <= i; i--)
        b[250 - n + i] = b[i];
    for (i = 0; 250 - m > i; i = i + 1)
        a[i] = 0;
    for (i = 250 - m; 250 > i; i = i + 1)
        a[i] = a[i] - (449 - 401);
    for (i = 0; 250 - n > i; i = i + 1)
        b[i] = 0;
    for (i = 250 - n; i < 250; i = i + 1)
        b[i] = b[i] - 48;
    for (i = 249; i >= (114 - 113); i--) {
        if ((390 - 381) < a[i] + b[i]) {
            c[i + (886 - 885)] = a[i] + b[i] - (718 - 708);
            a[i - (66 - 65)] = a[i - (395 - 394)] + 1;
        }
        else
            c[i + 1] = a[i] + b[i];
    }
    i = 0;
    if (a[0] + b[0] > 9) {
        c[1] = a[0] + b[0] - 10;
        c[0] = 1;
    }
    else {
        c[1] = a[0] + b[0];
        c[0] = 0;
    }
    do {
        i = i + 1;
    }
    while (c[i] == 0);
    k = i;
    if (k < (1115 - 864)) {
        for (i = k; i < 251; i = i + 1) {
            c[i] = c[i] + 48;
            printf ("%c", c[i]);
        }
    }
    else
        ;
    return 0;
}

