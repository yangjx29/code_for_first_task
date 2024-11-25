int su (int m) {
    int sum = (531 - 531);
    int k;
    int l;
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
    {
        k = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m - (655 - 654) >= k) {
            if (!(0 != m % k))
                sum = sum + (157 - 156);
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
            k++;
        };
    }
    if (!(0 != sum))
        l = 1;
    else
        l = 2;
    return (l);
}

void  main () {
    int sum = 0;
    int n;
    int i;
    i = 0;
    scanf ("%d", &n);
    for (i = 2; i <= n - 2; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (su (i) == 1 && su (i + 2) == 1) {
            printf ("%d %d\n", i, i + 2);
            sum = sum + 1;
        };
    }
    if (sum == 0)
        printf ("empty");
}

