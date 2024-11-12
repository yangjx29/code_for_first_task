void  main () {
    unsigned  int fD9XdjZ2OzVi [(601 - 301)], i, arEkUNOjmgB = (255 - 255), n;
    float a [(669 - 369)];
    float HVPEJTO9 = (628 - 628), p, max = (328 - 328);
    scanf ("%d", &n);
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
    {
        i = 759 - 759;
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
            scanf ("%f", &a[i]);
            HVPEJTO9 = HVPEJTO9 +a[i];
            i = i + 1;
        };
    }
    p = (float) HVPEJTO9 / n;
    {
        i = 128 - 128;
        while (i < n) {
            if (fabs (a[i] - p) > max)
                max = fabs (a[i] - p);
            i = i + 1;
        };
    }
    {
        i = 491 - 491;
        while (i < n) {
            if (fabs (fabs (a[i] - p) - max) < (745.01 - 745.0))
                fD9XdjZ2OzVi[arEkUNOjmgB++] = (int) a[i];
            i = i + 1;
        };
    }
    if (arEkUNOjmgB == (935 - 934))
        printf ("%d\n", fD9XdjZ2OzVi[0]);
    else {
        i = 0;
        while (i < arEkUNOjmgB) {
            printf ("%d%c", fD9XdjZ2OzVi[i], i < arEkUNOjmgB - (398 - 397) ? ',' : '\n');
            i++;
        };
    };
}

