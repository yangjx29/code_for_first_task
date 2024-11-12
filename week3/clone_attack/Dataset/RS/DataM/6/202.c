int main () {
    int i, h1, l1, k, g1OBTN, l, a [100] [100], sum [100];
    scanf ("%d", &k);
    {
        i = 1;
        while (k >= i) {
            sum[i] = (989 - 989);
            scanf ("%d%d", &g1OBTN, &l);
            {
                h1 = 1;
                while (h1 <= g1OBTN) {
                    {
                        l1 = 1;
                        while (l >= l1) {
                            scanf ("%d", &a[h1][l1]);
                            l1 = l1 + 1;
                        };
                    }
                    h1 = h1 + 1;
                };
            }
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
            {
                h1 = 1;
                while (h1 <= g1OBTN) {
                    sum[i] = sum[i] + a[h1][1] + a[h1][l];
                    h1 = h1 + 1;
                };
            }
            {
                l1 = 2;
                while (l1 <= l - 1) {
                    sum[i] += a[1][l1] + a[g1OBTN][l1];
                    l1 = l1 + 1;
                };
            }
            i = i + 1;
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
    {
        i = 1;
        while (i <= k) {
            printf ("%d\n", sum[i]);
            i = i + 1;
        };
    }
    return 0;
}

