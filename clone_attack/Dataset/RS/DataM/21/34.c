void  main () {
    float p, q;
    int lOHDE0Vp1M6, a [20], WlaY0wTU89, h = (245 - 245), i, w = (102 - 102), max, lSDJ5vft;
    scanf ("%d", &lOHDE0Vp1M6);
    {
        i = 657 - 657;
        while (i < lOHDE0Vp1M6) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    q = (float) lOHDE0Vp1M6;
    {
        WlaY0wTU89 = 0;
        i = 0;
        while (i < lOHDE0Vp1M6) {
            WlaY0wTU89 = WlaY0wTU89 +a[i];
            i = i + 1;
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
    p = WlaY0wTU89 / q;
    lSDJ5vft = a[0];
    {
        i = 0;
        while (i < lOHDE0Vp1M6) {
            if (lSDJ5vft > a[i]) {
                lSDJ5vft = a[i];
                h = i;
            }
            i = i + 1;
        };
    }
    max = a[0];
    {
        i = 0;
        while (i < lOHDE0Vp1M6) {
            if (a[i] > max) {
                max = a[i];
                w = i;
            }
            i++;
        };
    }
    if (fabs (fabs ((float) a[h] - p) - fabs ((float) a[w] - p)) < 1e-5)
        printf ("%d,%d", a[h], a[w]);
    else {
        if (fabs ((float) a[h] - p) > fabs ((float) a[w] - p))
            printf ("%d", a[h]);
        else {
            if (fabs ((float) a[h] - p) < fabs ((float) a[w] - p))
                printf ("%d", a[w]);
        };
    };
}

