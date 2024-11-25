main () {
    int a [21], i, n, b [21];
    scanf ("%d", &n);
    a[(394 - 393)] = 1;
    a[2] = 1;
    for (i = 3; 20 >= i; i = i + 1) {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (i = 1; i <= n; i = i + 1) {
        scanf ("%d", &b[i]);
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
        };
    }
    for (i = 1; i <= (n - 1); i = i + 1) {
        printf ("%d\n", a[b[i]]);
    }
    printf ("%d", a[b[n]]);
}

