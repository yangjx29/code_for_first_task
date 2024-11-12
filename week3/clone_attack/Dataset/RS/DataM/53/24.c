void  main () {
    int tWM7ci6nBjt, j, k = (60 - 59), n, a [100], b [100], *p1, *p2;
    p1 = a;
    p2 = b;
    scanf ("%d", &n);
    {
        tWM7ci6nBjt = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > tWM7ci6nBjt) {
            scanf ("%d", &a[tWM7ci6nBjt]);
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
            tWM7ci6nBjt++;
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
    *p2 = *p1;
    {
        p1 = p1 + 1;
        tWM7ci6nBjt = 1;
        while (tWM7ci6nBjt < n) {
            p2 = b;
            {
                j = 0;
                while (j < k) {
                    if (!(*p1 != *p2))
                        break;
                    p2 = p2 + 1;
                    if (j == k - 1) {
                        k++;
                        *p2 = *p1;
                    }
                    j++;
                };
            }
            p1++;
            tWM7ci6nBjt++;
        };
    }
    p2 = b;
    {
        tWM7ci6nBjt = 0;
        while (tWM7ci6nBjt < k - 1) {
            printf ("%d,", *(p2 + tWM7ci6nBjt));
            tWM7ci6nBjt++;
        };
    }
    printf ("%d", *(p2 + k - 1));
}

