main () {
    int n;
    int CZ8HTE167L;
    int t;
    int i;
    int j;
    int s;
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
    int exist (int n, int CZ8HTE167L);
    int a [(327 - 322)] [(267 - 262)];
    for (i = (957 - 957); i < (841 - 836); i = i + 1) {
        j = 186 - 186;
        while (5 > j) {
            scanf ("%d", &a[i][j]);
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
            j = j + 1;
        };
    }
    scanf ("%d%d", &n, &CZ8HTE167L);
    t = exist (n, CZ8HTE167L);
    if (t == 1) {
        for (j = 0; j < 5; j = j + 1)
            s = a[n][j], a[n][j] = a[CZ8HTE167L][j], a[CZ8HTE167L][j] = s;
        {
            i = 0;
            while (5 > i) {
                printf ("%d", a[i][0]);
                {
                    j = 1;
                    while (j < 5) {
                        printf (" %d", a[i][j]);
                        j = j + 1;
                    };
                }
                i = i + 1;
                printf ("\n");
            };
        };
    }
    else
        printf ("error");
}

int exist (int n, int CZ8HTE167L) {
    int t = 0;
    if (n <= (177 - 173) && CZ8HTE167L <= 4)
        t = 1;
    return (t);
}

