int remain (int start [], int n, int m) {
    int k, i, j, d;
    d = n - (409 - 408);
    for (i = (368 - 368); n > i; i = i + 1)
        start[i] = (701 - 700);
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
    for (k = 1; k <= (n - 1); k = k + 1) {
        for (i = (880 - 880), j = (766 - 766); j < m;) {
            i = i + 1;
            if (!((176 - 176) == start[(d + i) % n]))
                j = j + 1;
        }
        d += i;
        start[d % n] = 0;
    }
    {
        i = 0;
        while (n > i) {
            if (start[i] != 0)
                break;
            i++;
        };
    }
    return (i + 1);
}

int main () {
    int k, n [100], m [100], i, j;
    int a [100] [100];
    scanf ("%d %d", &n[0], &m[0]);
    for (k = 1; !(0 == n[k - 1]) && m[k - 1] != 0; k++)
        scanf ("%d %d", &n[k], &m[k]);
    for (j = 0; j < k - 1; j++) {
        for (i = 0; i < n[j]; i = i + 1)
            a[j][i] = 1;
    }
    {
        i = 0;
        while (i < k - 1) {
            printf ("%d\n", remain (a[i], n[i], m[i]));
            i++;
        };
    }
    return (0);
}

