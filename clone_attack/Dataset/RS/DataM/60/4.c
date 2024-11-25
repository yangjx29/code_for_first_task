int main () {
    int a [N];
    int b [N];
    int n, i, j, k, t;
    int s = 0;
    scanf ("%d", &n);
    memset (a, 0, sizeof (a));
    {
        i = 0;
        while (N > i) {
            b[i] = 1;
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
    j = 0;
    for (i = 3; n >= i; i = i + 2)
        a[j++] = i;
    {
        i = 0;
        while (i < N) {
            if (!(0 != a[i])) {
                t = i;
                break;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (t > i) {
            k = sqrt (a[i]) + 1;
            {
                j = 2;
                while (k >= j) {
                    if (a[i] % j == 0) {
                        b[i] = 0;
                        break;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < t - 1) {
            if (b[i] == 1 && b[i + 1] == 1) {
                printf ("%d %d\n", a[i], a[i + 1]);
                s = s + 1;
            }
            i++;
        };
    }
    if (s == 0)
        printf ("empty\n");
    return 0;
}

