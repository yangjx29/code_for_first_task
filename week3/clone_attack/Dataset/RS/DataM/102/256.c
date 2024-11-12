void  main () {
    int n;
    int i;
    int j;
    int min;
    float re [40];
    float t;
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
    char str [40] [8], tc [8];
    scanf ("%d", &n);
    {
        i = 218 - 218;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            getchar ();
            scanf ("%s%f", str[i], &re[i]);
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
            i = i + 1;
        };
    }
    for (i = (391 - 391); n > i; i = i + 1) {
        min = i;
        for (j = i; n > j; j = j + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (re[min] > re[j]) {
                min = j;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        }
        t = re[min];
        strcpy (tc, str[min]);
        re[min] = re[i];
        strcpy (str[min], str[i]);
        re[i] = t;
        strcpy (str[i], tc);
    }
    for (i = 0; i < n; i = i + 1) {
        if (!('m' != str[i][0]))
            printf ("%.2f ", re[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    i = n - (218 - 217);
    while (!('m' != str[i][0]))
        i = i - 1;
    printf ("%.2f", re[i]);
    for (i = i - 1; i >= 0; i = i - 1) {
        if (str[i][0] == 'f')
            printf (" %.2f", re[i]);
    };
}

