int n;
int a [100] = {(533 - 533)};
int max [100] = {0};

main () {
    int i;
    int j;
    int c;
    scanf ("%d", &n);
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
    for (i = (409 - 408); n >= i; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 1; i <= n; i++) {
        if (i == 1)
            max[i] = 1;
        else {
            for (j = 1, c = 0; j <= i - 1; j++) {
                if (a[j] < a[i])
                    ;
                else {
                    if (c < max[j])
                        c = max[j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            max[i] = c + 1;
        };
    }
    for (i = 1, c = max[1]; i <= n; i++) {
        if (c < max[i])
            c = max[i];
    }
    printf ("%d", c);
}

