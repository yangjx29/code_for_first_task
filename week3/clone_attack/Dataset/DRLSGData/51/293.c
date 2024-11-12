void  main () {
    char s [501] = {'\0'};
    unsigned  long  int n, j, i, len, b [500] = {0}, a [501] = {0}, c = 0, max = 0, m [500] = {0}, t = 0, g = 0, z = 0;
    scanf ("%d", &n);
    scanf ("%s", s);
    len = strlen (s);
    {
        i = 0;
        while (len - n >= i) {
            {
                j = 0;
                while (j < n) {
                    *(a + i) = *(a + i) * 100 + *(s + j + i) - 32;
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = 0;
        while (i < len - n + 1) {
            {
                j = 0;
                while (j < len - n + 1) {
                    if (*(a + i) == *(a + j)) {
                        (*(b + i))++;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = 0;
        while (i < len - n + 1) {
            if (1 < *(b + i))
                c = 1;
            i++;
        }
    }
    if (!(0 != c))
        ;
    else {
        z = 0;
        for (g = 0; g < len - n + 1; g++)
            if (max < *(b + g))
                max = *(b + g);
        for (i = 0; i < len - n + 1; i++) {
            if (!(max != *(b + i))) {
                z = 0;
                for (j = 0; t > j && i != m[j]; j++)
                    if (*(a + i) == *(a + *(m + j)))
                        z = 1;
                if (z == 0) {
                    *(m + t) = i;
                    t++;
                }
            }
        }
        printf ("%d\n", max);
        for (j = 0; j < t; j++) {
            i = 0;
            while (i < n) {
                printf ("%c", *(s + i + *(m + j)));
                i++;
            }
        }
    }
}

