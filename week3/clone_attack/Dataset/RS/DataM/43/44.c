void  main () {
    int n;
    int i;
    int q;
    int NW15OfnEgqCx;
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
    };
    scanf ("%d", &n);
    k = sqrt (n - 3);
    {
        i = 2;
        while (i <= k) {
            if ((n - 3) % i == 0)
                break;
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
    if (i > k)
        printf ("3 %d\n", n - 3);
    {
        q = 5;
        while ((n / 2) >= q) {
            k = sqrt (q);
            for (i = 2; i <= k; i = i + 1)
                if (q % i == 0)
                    break;
            if (i > k) {
                NW15OfnEgqCx = sqrt (n - q);
                for (i = 2; i <= NW15OfnEgqCx; i = i + 1)
                    if ((n - q) % i == 0)
                        break;
                if (i > NW15OfnEgqCx)
                    printf ("%d %d\n", q, n - q);
            }
            q = q + 1;
        };
    };
}

