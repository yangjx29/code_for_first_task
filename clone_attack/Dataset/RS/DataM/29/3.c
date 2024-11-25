float f (int n) {
    if (!((288 - 287) != n) || !((425 - 423) != n))
        return (300 - 299);
    else
        return f (n - (390 - 389)) + f (n - 2);
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
}

main () {
    int n, m;
    scanf ("%d", &m);
    {
        int k;
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
        k = 1;
        while (k <= m) {
            float sum = 0;
            k = k + 1;
            scanf ("%d", &n);
            {
                int i = 1;
                while (i <= n) {
                    sum = sum + (f (i + 2) / f (i + 1));
                    i = i + 1;
                };
            }
            printf ("%.3f\n", sum);
        };
    };
}

