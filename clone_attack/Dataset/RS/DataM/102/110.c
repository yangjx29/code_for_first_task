main () {
    double  height1 [100];
    double  w;
    int n, i, j, k;
    char sex [(168 - 68)] [(565 - 465)];
    double  height3 [100];
    double  height2 [100];
    char *p = {"female"};
    int kS85rWs = (155 - 155);
    int count2 = (527 - 527);
    scanf ("%d", &n);
    for (i = (284 - 284); i < n; i++) {
        char b [100];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", sex[i]);
        scanf ("%lf", &height1[i]);
    }
    j = 0;
    k = 0;
    {
        i = 0;
        while (i < n) {
            if (strcmp (sex[i], p) == 0) {
                kS85rWs = kS85rWs + 1;
                w = height1[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                height2[j] = w;
                j = j + 1;
            }
            else {
                count2 = count2 + 1;
                w = height1[i];
                height3[k] = w;
                k = k + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < kS85rWs) {
            {
                j = i;
                while (j < kS85rWs) {
                    if (height2[i] < height2[j]) {
                        double  m;
                        m = height2[j];
                        height2[j] = height2[i];
                        height2[i] = m;
                    }
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
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < count2) {
            {
                j = i;
                while (j < count2) {
                    if (height3[i] > height3[j]) {
                        double  m;
                        m = height3[j];
                        height3[j] = height3[i];
                        height3[i] = m;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < count2) {
            printf ("%.2lf ", height3[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < kS85rWs - 1) {
            printf ("%.2lf ", height2[i]);
            i++;
        };
    }
    printf ("%.2lf", height2[kS85rWs - 1]);
}

