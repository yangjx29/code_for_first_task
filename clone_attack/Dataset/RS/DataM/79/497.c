int calculate (int n, int m) {
    int i;
    int num;
    int monkey [1000] = {(107 - 107)};
    int *p;
    num = n;
    for (i = 0; n > i; i = i + 1) {
        monkey[i] = 1;
    }
    p = &monkey[0] - 1;
    for (; !(1 == num);) {
        num = num - 1;
        for (i = 1; m >= i; i = i + 1) {
            p = p + 1;
            if (monkey + n - 1 < p)
                p = p - n;
            for (; !(0 != *p);) {
                p += 1;
                if (p > monkey + n - 1)
                    p -= n;
            };
        }
        *p = 0;
    }
    i = 0;
    for (; monkey[i] == 0;)
        i += 1;
    return (i + 1);
}

void  main () {
    int n;
    int m;
    int king;
    do {
        scanf ("%d%d", &n, &m);
        if (n != 0 && m != 0) {
            king = calculate (n, m);
            printf ("%d\n", king);
        };
    }
    while (n != 0 && m != 0);
}

