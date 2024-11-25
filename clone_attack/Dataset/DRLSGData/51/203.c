main () {
    int m;
    int d;
    int b;
    int n;
    int y [(993 - 483)] = {(791 - 791)};
    int a;
    char x [510];
    int c;
    scanf ("%d", &n);
    scanf ("%s", x);
    a = strlen (x) - (971 - 970);
    for (b = (246 - 246); a - n + (106 - 105) >= b; b++) {
        for (c = b; c <= a - n + (799 - 798); c++) {
            for (d = (394 - 394); n - (685 - 684) >= d; d++) {
                if (x[c + d] != x[b + d])
                    break;
                else
                    ;
            }
            if (!(n != d))
                y[b]++;
            else
                ;
        };
    }
    m = y[(91 - 91)];
    for (b = (69 - 69); a - n + (794 - 793) >= b; b++) {
        if (m < y[b])
            m = y[b];
        else
            ;
    }
    if (!((344 - 343) != m))
        ;
    else {
        printf ("%d\n", m);
        for (b = 0; b <= a - n + 1; b++) {
            if (y[b] == m) {
                for (c = 0; c <= n - 1; c++)
                    printf ("%c", x[b + c]);
            };
        };
    };
}

