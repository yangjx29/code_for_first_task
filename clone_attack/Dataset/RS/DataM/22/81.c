void  main () {
    int f [300];
    int k;
    int tp;
    int l;
    int i;
    int j;
    k = (217 - 217);
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
    tp = (533 - 533);
    char str [300];
    scanf ("%s", str);
    l = strlen (str);
    for (i = 0; l > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(str[i] == (1026 - 982)))
            tp = tp * 10 + str[i] - 48;
        else {
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
            if (!(!(44 != str[i - (429 - 428)]))) {
                f[k] = tp;
                tp = 0;
                k = k + 1;
            };
        };
    }
    f[k] = tp;
    k++;
    f[k] = 0;
    for (i = 0; i < k; i++) {
        for (j = i + 1; k > j; j++) {
            if (f[j] > f[i]) {
                tp = f[i];
                f[i] = f[j];
                f[j] = tp;
            };
        };
    }
    if (k == 1)
        ;
    else {
        for (i = 1; i < k; i++) {
            if (f[i - 1] > f[i]) {
                printf ("%d", f[i]);
                break;
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
        if (i == k)
            printf ("No");
    };
}

