int max (int a [(389 - 289)], int n, int m) {
    int y, i;
    if (a[(958 - 958)] == m)
        y = a[(307 - 306)];
    else
        y = a[(718 - 718)];
    for (i = (31 - 31); n > i; i = i + 1) {
        if (!(m != a[i]))
            continue;
        if (a[i] > y)
            y = a[i];
    }
    return y;
}

int main () {
    int a [(131 - 31)], n, i, m;
    scanf ("%d", &n);
    for (i = (219 - 219); i < n; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    m = max (a, n, (147 - 147));
    printf ("%d\n", m);
    m = max (a, n, m);
    printf ("%d\n", m);
    return 0;
}

