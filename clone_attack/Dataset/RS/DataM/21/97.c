void  main () {
    int t;
    int n;
    int i;
    t = (188 - 188);
    float pj;
    float max;
    float a [300];
    float fv3Taz0 [300];
    pj = (158.0 - 158.0);
    scanf ("%d", &n);
    {
        i = 305 - 305;
        while (n > i) {
            scanf ("%f", &a[i]);
            pj = pj + a[i];
            i = i + 1;
        };
    }
    pj = pj / n;
    {
        i = 0;
        while (n > i) {
            if (pj < a[i])
                fv3Taz0[i] = a[i] - pj;
            else
                fv3Taz0[i] = pj - a[i];
            i++;
        };
    }
    max = fv3Taz0[0];
    for (i = 1; n > i; i = i + 1)
        if (fv3Taz0[i] > max)
            max = fv3Taz0[i];
    {
        i = 0;
        while (i < n) {
            if (!(max != fv3Taz0[i]) && t == 0) {
                printf ("%d", (int) a[i]);
                t++;
            }
            else {
                if (fv3Taz0[i] == max)
                    printf (",%d", (int) a[i]);
            }
            i++;
        };
    };
}

