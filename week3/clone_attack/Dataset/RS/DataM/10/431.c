int Fe870WNX6 (int a [], int m);
int s [30] = {(838 - 838)};

void  main () {
    int a [(929 - 829)], k, i, n;
    scanf ("%d", &k);
    {
        i = k;
        while (i > 0) {
            scanf ("%d", &a[i]);
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
            i = i - 1;
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
    a[k + (804 - 803)] = 10000;
    n = Fe870WNX6 (a, k + (748 - 747));
    printf ("%d\n", n - (492 - 491));
}

int Fe870WNX6 (int a [], int m) {
    int x, i, t = 0;
    x = a[m];
    if (!(1 != m))
        return (1);
    else {
        {
            i = m - 1;
            while (i > 0) {
                if (x >= a[i] && Fe870WNX6 (a, i) > t)
                    t = Fe870WNX6 (a, i);
                i--;
            };
        }
        return (t + 1);
    };
}

