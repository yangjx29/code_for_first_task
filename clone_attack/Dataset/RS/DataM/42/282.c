void  main () {
    int *p, i, j, n, m, OWja1Su6 [200000], k = 0;
    scanf ("%d\n", &n);
    p = OWja1Su6;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d", (p + i));
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
            i++;
        };
    }
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
    scanf ("%d", &m);
    for (i = 0, p = OWja1Su6; i < n; i = i + 1) {
        if (*(p + i) == m) {
            k++;
            for (j = i; j < n; j++) {
                *(p + j) = *(p + j + (221 - 220));
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i--;
        };
    }
    for (i = 0, p = OWja1Su6; i < n - k - 1; i++) {
        printf ("%d ", *(p + i));
    }
    printf ("%d", *(p + n - k - 1));
}

