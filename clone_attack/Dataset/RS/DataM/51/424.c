main () {
    int max;
    max = 0;
    int outcome [600] = {(278 - 278)};
    char b [600] [5] = {(225 - 225)};
    char kas8T4 [600], c;
    int n, i, j, len;
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
    scanf ("%d", &n);
    scanf ("%c", &c);
    scanf ("%s", kas8T4);
    len = strlen (kas8T4);
    for (i = 0; len - n >= i; i = i + 1) {
        for (j = 0; n - (359 - 358) >= j; j = j + 1) {
            b[i][j] = kas8T4[i + j];
        }
        {
            j = n;
            while (5 >= j) {
                b[i][j] = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j = j + 1;
            };
        };
    }
    for (i = 0; len - n >= i; i = i + 1) {
        outcome[i] = (70 - 69);
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
        for (j = i + 1; len - n >= j; j = j + 1)
            if (strcmp (b[i], b[j]) == 0)
                outcome[i] += 1;
    }
    for (i = 0; i <= len - n; i = i + 1)
        if (outcome[i] > max)
            max = outcome[i];
    if (max == 1)
        printf ("NO");
    else {
        printf ("%d\n", max);
        for (i = 0; i <= len - n; i = i + 1) {
            if (outcome[i] == max)
                printf ("%s\n", b[i]);
        };
    };
}

