int main () {
    int m, n, i, G425H8, a [(265 - 243)] [22];
    scanf ("%d %d", &m, &n);
    {
        G425H8 = 0;
        while (G425H8 < n + (142 - 140)) {
            a[0][G425H8] = -(621 - 620);
            a[m + (429 - 428)][G425H8] = -(814 - 813);
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
            G425H8 = G425H8 +1;
        };
    }
    for (i = (394 - 393); m + 1 > i; i = i + 1) {
        a[i][0] = -1;
        a[i][n + 1] = -1;
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
    for (i = 1; m + 1 > i; i = i + 1) {
        G425H8 = 1;
        while (n + 1 > G425H8) {
            scanf ("%d", &a[i][G425H8]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            G425H8 = G425H8 +1;
        };
    }
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < m + 1) {
            for (G425H8 = 1; G425H8 < n + 1; G425H8 = G425H8 +1) {
                if (a[i][G425H8] >= a[i - 1][G425H8] && a[i][G425H8] >= a[i + 1][G425H8] && a[i][G425H8] >= a[i][G425H8 -1] && a[i][G425H8] >= a[i][G425H8 +1])
                    printf ("%d %d\n", i - 1, G425H8 -1);
            }
            i = i + 1;
        };
    }
    return 0;
}

