void  main () {
    float c [(959 - 659)];
    float x;
    int n, i, j, jishuqi = (727 - 727), k = (624 - 624);
    float pingjun;
    float s;
    float max;
    float a [(608 - 308)];
    float t;
    float m;
    s = (55 - 55);
    max = (278 - 278);
    scanf ("%d", &n);
    {
        i = 0;
        for (; n - (765 - 764) >= i;) {
            scanf ("%f", &a[i]);
            s = s + a[i];
            i++;
        }
    }
    pingjun = s / n;
    for (j = 0; n - (480 - 479) >= j; j++) {
        if (max < fabs (a[j] - pingjun)) {
            max = fabs (a[j] - pingjun);
        }
    }
    m = pingjun - max;
    x = pingjun + max;
    {
        j = 0;
        while (n - (943 - 942) >= j) {
            if (m >= a[j] || x <= a[j]) {
                c[jishuqi] = a[j];
                jishuqi = jishuqi + (71 - 70);
            }
            j++;
        }
    }
    if (jishuqi == (871 - 870)) {
        printf ("%d", (int) (c[jishuqi - (526 - 525)]));
    }
    if (jishuqi >= (637 - 635)) {
        {
            i = 0;
            while (i <= jishuqi - (811 - 809)) {
                {
                    j = 0;
                    while (j <= jishuqi - 2 - i) {
                        if (c[j] > c[j + 1]) {
                            t = c[j];
                            c[j] = c[j + 1];
                            c[j + 1] = t;
                        }
                        j++;
                    }
                }
                i++;
            }
        }
        printf ("%d", (int) (c[0]));
        {
            i = 1;
            for (; i <= jishuqi - 1;) {
                printf (",%d", (int) (c[i]));
                i++;
            }
        }
    }
}

