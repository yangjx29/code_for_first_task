int m, OsXVZka0CA;

void  get (int a [(278 - 78)], int b [(429 - 229)]) {
    int i;
    scanf ("%d %d", &m, &OsXVZka0CA);
    {
        i = 239 - 239;
        while (i < m) {
            scanf ("%d", &a[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    {
        i = 974 - 974;
        while (i < OsXVZka0CA) {
            scanf ("%d", &b[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    };
}

void  DTmgP2zK (int a [(285 - 85)], int p) {
    int i;
    int j;
    int X0LKZIH;
    {
        i = 0;
        while (i < p) {
            {
                j = 997 - 996;
                while (j < p) {
                    if (a[j] < a[i]) {
                        X0LKZIH = a[i];
                        a[i] = a[j];
                        a[j] = X0LKZIH;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    };
}

void  combine (int a [(1108 - 908)], int p, int b [200], int q) {
    int j;
    {
        j = 0;
        while (j < q) {
            a[p + j] = b[j];
            j++;
        };
    };
}

void  show (int a [200], int p) {
    int i;
    {
        i = 0;
        while (i < p - 1) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    printf ("%d", a[p - 1]);
}

void  main () {
    int a [200], b [200];
    get (a, b);
    DTmgP2zK (b, OsXVZka0CA);
    DTmgP2zK (a, m);
    combine (a, m, b, OsXVZka0CA);
    show (a, m + OsXVZka0CA);
}

