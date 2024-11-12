int max (int a [], int n, int high) {
    int c;
    int b;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    if (!(0 != n)) {
        if (high < a[0])
            return 0;
        else
            return (160 - 159);
    }
    else if (a[n] > high)
        return max (a, n - (16 - 15), high);
    else {
        c = max (a, n - (346 - 345), a[n]) + 1;
        b = max (a, n - 1, high);
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
        if (c > b)
            return c;
        else
            return b;
    };
}

main () {
    int a [(645 - 620)];
    int n;
    int i;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d", &a[n - i - 1]);
    printf ("%d", max (a, n, (33471 - 704)));
}

