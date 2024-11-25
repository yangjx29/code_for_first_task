void  main () {
    int q;
    int m;
    int n;
    int i;
    int j;
    int flag;
    int k;
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
    int p;
    int a [15] = {0};
    q = 0;
    scanf ("%d%d", &m, &n);
    {
        i = m;
        while (n >= i) {
            flag = 1;
            for (j = 2; j <= i / 2; j = j + 1)
                if (!(0 != i % j)) {
                    flag = 0;
                    break;
                }
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
            if (!(0 != flag))
                continue;
            else {
                k = 0;
                p = i;
                while (i > 0) {
                    k = k * 10 + i % 10;
                    i = i / 10;
                }
                if (k == p)
                    a[q++] = p;
                i = p;
            }
            i = i + 1;
        };
    }
    if (q == 0)
        printf ("no\n");
    else {
        for (i = 0; i < q - 1; i = i + 1)
            printf ("%d,", a[i]);
        printf ("%d\n", a[i]);
    };
}

