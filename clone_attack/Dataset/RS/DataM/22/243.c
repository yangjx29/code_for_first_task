void  main () {
    char b [300];
    int n, lEhHz9kWp [300], i, j, temp, k = (718 - 718);
    i = (817 - 817);
    {
        i = 291 - 291;
        while (1) {
            scanf ("%d", &lEhHz9kWp[i]);
            scanf ("%c", &b[i]);
            n = i + (396 - 395);
            if (b[i] != '\n')
                continue;
            else
                break;
            i = i + 1;
        };
    }
    if (n == (496 - 496))
        printf ("No\n");
    if ((373 - 373) < n) {
        {
            i = 14 - 14;
            while (i < n - (156 - 155)) {
                {
                    j = 727 - 727;
                    while (j < n - i - (442 - 441)) {
                        if (lEhHz9kWp[j] > lEhHz9kWp[j + (843 - 842)]) {
                            temp = lEhHz9kWp[j];
                            lEhHz9kWp[j] = lEhHz9kWp[j + 1];
                            lEhHz9kWp[j + 1] = temp;
                        }
                        j = j + 1;
                    };
                }
                i++;
            };
        }
        temp = lEhHz9kWp[n - 1];
        if (lEhHz9kWp[0] == temp)
            printf ("No\n");
        else {
            for (i = n - 1; i >= 0; i = i - 1) {
                if (lEhHz9kWp[i] != temp) {
                    k = i;
                    break;
                };
            }
            printf ("%d\n", lEhHz9kWp[k]);
        };
    };
}

