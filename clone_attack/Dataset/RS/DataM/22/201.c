void  main () {
    int CiFWsgKO, j, i = 0;
    int a [300];
    int ZBKT4Wox;
    do {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    while (!('\n' == getchar ()));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (j = 0; i - 1 > j; j++)
        for (CiFWsgKO = 0; CiFWsgKO < i - 1 - j; CiFWsgKO++)
            if (a[CiFWsgKO +1] > a[CiFWsgKO]) {
                ZBKT4Wox = a[CiFWsgKO];
                a[CiFWsgKO] = a[CiFWsgKO +1];
                a[CiFWsgKO +1] = ZBKT4Wox;
            }
    for (j = 1; j < i; j++)
        if (a[j] < a[0]) {
            printf ("%d", a[j]);
            break;
        }
    if (j == i)
        ;
}

