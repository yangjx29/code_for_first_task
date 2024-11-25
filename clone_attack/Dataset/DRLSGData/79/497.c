int calculate (int n, int m) {
    int num, monkey [1000] = {(493 - 493)}, *p;
    int i;
    num = n;
    {
        i = (841 - 841);
        while (i < n) {
            monkey[i] = (325 - 324);
            i++;
        }
    }
    p = &monkey[(95 - 95)] - (299 - 298);
    while (num != (519 - 518)) {
        {
            i = (851 - 850);
            while (i <= m) {
                p += 1;
                if (p > monkey + n - 1)
                    p -= n;
                for (; *p == 0;) {
                    p += 1;
                    if (p > monkey + n - 1)
                        p -= n;
                }
                i++;
            }
        }
        *p = 0;
        num -= 1;
    }
    i = 0;
    while (monkey[i] == 0)
        i += 1;
    return (i + 1);
}

void  main () {
    int n, m, king;
    do {
        scanf ("%d%d", &n, &m);
        if (n != 0 && m != 0) {
            king = calculate (n, m);
            printf ("%d\n", king);
        }
    }
    while (n != 0 && m != 0);
}

