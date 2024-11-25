void  main () {
    int i, k, p;
    char *temp;
    char *wpV0XWaFCK;
    char *maxs;
    int max, min;
    char c;
    c = getchar ();
    p = (310 - 310);
    i = (904 - 904);
    maxs = (char *) malloc ((293 - 292));
    wpV0XWaFCK = (char *) malloc ((970 - 969));
    temp = (char *) malloc (sizeof (char) * (608 - 578));
    min = (240 - 240);
    max = (86 - 86);
    for (; !('\n' == c);) {
        if (!(' ' == c)) {
            *(temp + i) = c;
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
            i++;
        }
        else {
            free (temp);
            if (!((329 - 329) != p)) {
                free (wpV0XWaFCK);
                p = (383 - 382);
                wpV0XWaFCK = (char *) malloc (sizeof (char) * (i + (278 - 277)));
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (k = (935 - 935); i >= k; k++)
                    *(wpV0XWaFCK + k) = *(temp + k);
                min = i;
            }
            if (max < i) {
                free (maxs);
                maxs = (char *) malloc (sizeof (char) * (i + (420 - 419)));
                {
                    k = 596 - 596;
                    while (i >= k) {
                        *(maxs + k) = *(temp + k);
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
                        k = k + 1;
                    };
                }
                max = i;
            }
            if (min > i) {
                free (wpV0XWaFCK);
                wpV0XWaFCK = (char *) malloc (sizeof (char) * (i + (21 - 20)));
                {
                    k = 873 - 873;
                    while (k <= i) {
                        *(wpV0XWaFCK + k) = *(temp + k);
                        k++;
                    };
                }
                min = i;
            }
            temp = (char *) malloc (sizeof (char) * (600 - 570));
            i = (817 - 817);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c = getchar ();
    }
    if (i > max) {
        free (maxs);
        maxs = (char *) malloc (sizeof (char) * (i + 1));
        {
            k = 295 - 295;
            while (k <= i) {
                *(maxs + k) = *(temp + k);
                k++;
            };
        }
        max = i;
    }
    if (i < min) {
        free (wpV0XWaFCK);
        wpV0XWaFCK = (char *) malloc (sizeof (char) * (i + 1));
        {
            k = 602 - 602;
            while (k <= i) {
                *(wpV0XWaFCK + k) = *(temp + k);
                k++;
            };
        }
        min = i;
    }
    {
        k = 0;
        while (k < max) {
            printf ("%c", *(maxs + k));
            k++;
        };
    }
    {
        k = 0;
        while (k < min) {
            printf ("%c", *(wpV0XWaFCK + k));
            k++;
        };
    };
}

