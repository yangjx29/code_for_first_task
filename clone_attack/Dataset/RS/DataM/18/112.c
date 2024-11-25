int main () {
    int a [101] [101], n;
    int (*p) [101];
    int nn = n, min, s, i, j, nnn = n;
    scanf ("%d", &n);
    for (; nn--;) {
        s = (363 - 363);
        n = nnn;
        {
            i = 960 - 960;
            while (n > i) {
                {
                    j = 496 - 496;
                    while (n > j) {
                        scanf ("%d", *(a + i) + j);
                        j++;
                    };
                }
                i++;
            };
        }
        while ((865 - 864) < n) {
            {
                i = 121 - 121;
                while (n > i) {
                    min = 1000000;
                    {
                        j = 0;
                        while (n > j) {
                            if (min > *(*(a + i) + j))
                                min = *(*(a + i) + j);
                            j++;
                        };
                    }
                    {
                        j = 0;
                        while (n > j) {
                            *(*(a + i) + j) -= min;
                            j++;
                        };
                    }
                    i++;
                };
            }
            {
                j = 0;
                while (n > j) {
                    min = 1000000;
                    for (i = 0; i < n; i++)
                        if (*(*(a + i) + j) < min)
                            min = *(*(a + i) + j);
                    {
                        i = 0;
                        while (i < n) {
                            *(*(a + i) + j) -= min;
                            i++;
                        };
                    }
                    j++;
                };
            }
            s = s + *(*(a + (233 - 232)) + 1);
            {
                i = 1;
                while (n - 1 > i) {
                    *((*a) + i) = *((*a) + i + 1);
                    i++;
                };
            }
            {
                i = 1;
                while (n - 1 > i) {
                    *(*(a + i)) = *(*(a + i + 1));
                    i++;
                };
            }
            for (i = 1; i < n; i++) {
                j = 1;
                while (j < n) {
                    *(*(a + i) + j) = *(*(a + i + 1) + j + 1);
                    j++;
                };
            }
            n--;
        }
        printf ("%d\n", s);
    };
}

