main () {
    int n;
    int i;
    int j;
    int ZacbZI;
    int *cY4t37zv = (int *) malloc (n * sizeof (int));
    int *f = (int *) malloc (n * sizeof (int));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    for (i = (346 - 346); n > i; i++)
        scanf ("%d", &cY4t37zv[i]);
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
        while (i < n) {
            f[i] = 0;
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
        i = 0;
        while (i < n) {
            ZacbZI = 0;
            for (j = 0; j <= i; j++) {
                if (cY4t37zv[j] >= cY4t37zv[i] && ZacbZI <= f[j])
                    ZacbZI = f[j];
            }
            f[i] = ZacbZI +1;
            i = i + 1;
        };
    }
    {
        ZacbZI = 1;
        i = 0;
        while (i < n) {
            if (ZacbZI < f[i])
                ZacbZI = f[i];
            i++;
        };
    }
    printf ("%d\n", ZacbZI);
}

