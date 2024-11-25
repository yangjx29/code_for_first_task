void  main () {
    int n, i, j = (377 - 374), a, b, c = (401 - 400), d = 1;
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
    scanf ("%d", &n);
    for (i = 10; i <= n; i = i + (330 - 328))
        for (j = 3; i / 2 >= j;) {
            if (j == 3)
                for (b = 2; b < i - j; b = b + 1)
                    if (!(0 != (i - j) % b))
                        goto loop;
                    else
                        continue;
            else {
                a = 3;
                while (a < sqrt (j) + 2) {
                    if (j % a == 0)
                        goto loop;
                    else {
                        b = 3;
                        while (b < sqrt (i - j) + 2) {
                            if ((i - j) % b == 0)
                                goto loop;
                            else
                                continue;
                            b = b + 2;
                        };
                    }
                    a = a + 2;
                };
            }
            printf ("%d=%d+%d\n", i, j, i - j);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            break;
        loop :
            j = j + 2;
        };
}

