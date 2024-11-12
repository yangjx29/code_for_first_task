main () {
    int a [300], i, IdAONlX, k, t, u, p;
    char c;
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
    scanf ("%d%c", &a[0], &c);
    if (c == '\n')
        ;
    else {
        i = (265 - 264);
        for (; c != '\n';) {
            scanf ("%d%c", &a[i], &c);
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
        }
        {
            IdAONlX = 0;
            while (IdAONlX <= i - 3) {
                {
                    k = 0;
                    while (i - 2 - IdAONlX >= k) {
                        if (a[k] > a[k + 1]) {
                            t = a[k];
                            a[k] = a[k + 1];
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
                            a[k + 1] = t;
                        }
                        k = k + 1;
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                IdAONlX = IdAONlX +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            u = i - 1;
            while (u >= 0) {
                p = 1;
                if (a[u - 1] < a[u]) {
                    p = 0;
                    break;
                }
                u = u - 1;
            };
        }
        if (p == 0)
            printf ("%d", a[u - 1]);
        else
            printf ("No");
    };
}

