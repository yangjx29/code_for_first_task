char max (char a [], char i) {
    char j, m = a[0];
    {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i > j) {
            if (a[j] > m)
                m = a[j];
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
            j++;
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
    return (m);
}

void  main () {
    char n, i, j;
    int h [N] = {0};
    char mis [N] = {0};
    char temp [N] = {0};
    scanf ("%d", &n);
    {
        i = n;
        while (i >= 1) {
            scanf ("%d", &h[i]);
            i--;
        };
    }
    mis[0] = 0;
    {
        i = 1;
        while (n >= i) {
            for (j = 0; j <= i - 1; j++) {
                if (h[i] >= h[j])
                    temp[j] = mis[j] + 1;
                else
                    temp[j] = 0;
            }
            mis[i] = max (temp, i);
            i++;
        };
    }
    for (i = 0; i <= n; i++)
        printf ("%d ", mis[i]);
    printf ("%d", max (mis, n + 1));
}

