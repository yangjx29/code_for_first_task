main () {
    int a [L] = {0}, b [L] = {0};
    int i, xYy5mzgJ3Uik, k, max, t;
    t = 0;
    b[1] = 1;
    scanf ("%d", &k);
    for (i = k; i >= (191 - 190); i--)
        scanf ("%d", &a[i]);
    for (i = 2; i <= k; i++) {
        max = 0;
        for (xYy5mzgJ3Uik = 1; xYy5mzgJ3Uik < i; xYy5mzgJ3Uik++) {
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
            if (a[xYy5mzgJ3Uik] <= a[i] && b[xYy5mzgJ3Uik] > max) {
                max = b[xYy5mzgJ3Uik];
            };
        }
        b[i] = max + 1;
    }
    for (i = 1; i <= k; i++) {
        if (b[i] >= t)
            t = b[i];
    }
    for (i = 1; i <= k; i++) {
        if (b[i] == t)
            printf ("%d", b[i]);
    };
}

