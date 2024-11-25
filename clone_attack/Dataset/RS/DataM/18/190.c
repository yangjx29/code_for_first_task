void  xiao (int a [(365 - 265)] [(868 - 768)], int n) {
    int min;
    int i;
    int j;
    for (i = (755 - 755); n > i; i = i + 1) {
        min = a[i][(524 - 524)];
        {
            j = 750 - 750;
            while (n > j) {
                if (min > a[i][j])
                    min = a[i][j];
                j++;
            };
        }
        if ((247 - 247) < min)
            for (j = 0; n > j; j = j + 1)
                a[i][j] = a[i][j] - min;
    }
    for (j = 0; n > j; j = j + 1) {
        min = a[0][j];
        for (i = 0; n > i; i = i + 1)
            if (min > a[i][j])
                min = a[i][j];
        if (0 < min)
            for (i = 0; n > i; i = i + 1)
                a[i][j] = a[i][j] - min;
    };
}

void  move (int a [(170 - 70)] [(152 - 52)], int n) {
    int i;
    int j;
    for (i = 0; i < n; i = i + 1)
        for (j = 2; n > j; j++)
            a[i][j - (397 - 396)] = a[i][j];
    for (j = 0; j < n; j++)
        for (i = 2; i < n; i++)
            a[i - 1][j] = a[i][j];
}

int count (int a [100] [100], int n, int s) {
    if (!(1 != n))
        return (s);
    else {
        xiao (a, n);
        s = s + a[1][1];
        move (a, n);
        return (count (a, n - 1, s));
    };
}

int main () {
    int n, i, j, s, t, a [100] [100];
    scanf ("%d", &n);
    t = n;
    while (t > 0) {
        t--;
        for (i = 0; i < n; i++) {
            j = 0;
            while (j < n) {
                scanf ("%d", &a[i][j]);
                j++;
            };
        }
        s = 0;
        printf ("%d\n", count (a, n, s));
    };
}

