void  main () {
    char a [100];
    char max [100];
    char min [100];
    int n;
    int i;
    int j;
    int l;
    int minl;
    int maxl;
    minl = strlen (a);
    maxl = strlen (a);
    scanf ("%d", &n);
    scanf ("%s", a);
    l = strlen (a);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l > i) {
            max[i] = a[i];
            min[i] = a[i];
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
    {
        i = 1;
        while (n > i) {
            i++;
            scanf ("%s", a);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            l = strlen (a);
            if (maxl < l) {
                {
                    j = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (l > j) {
                        max[j] = a[j];
                        j = j + 1;
                    };
                }
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
                maxl = l;
            }
            if (minl > l) {
                {
                    j = 0;
                    while (j < l) {
                        min[j] = a[j];
                        j = j + 1;
                    };
                }
                minl = l;
            };
        };
    }
    max[maxl] = '\0';
    {
        i = 0;
        while (maxl > i) {
            printf ("%c", max[i]);
            i++;
        };
    }
    min[minl] = '\0';
    {
        i = 0;
        while (i < minl) {
            printf ("%c", min[i]);
            i++;
        };
    };
}

