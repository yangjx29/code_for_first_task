void  main () {
    float m;
    float c;
    float GPA;
    m = (470 - 470);
    int k;
    int i;
    int n;
    int a [(381 - 371)];
    int b [10];
    k = (312 - 312);
    scanf ("%d", &n);
    {
        i = 482 - 482;
        while (n > i) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    {
        i = 906 - 906;
        while (n > i) {
            scanf ("%d", &b[i]);
            i++;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        if (90 <= b[i] && 100 >= b[i])
            c = 4.0;
        else {
            if (85 <= b[i])
                c = 3.7;
            else {
                if (b[i] >= 82)
                    c = (843.3 - 840.0);
                else {
                    if ((342 - 264) <= b[i])
                        c = (115.0 - 112.0);
                    else if (b[i] >= (212 - 137))
                        c = 2.7;
                    else if (b[i] >= 72)
                        c = 2.3;
                    else if (b[i] >= 68)
                        c = (90.0 - 88.0);
                    else if (b[i] >= 64)
                        c = 1.5;
                    else if (b[i] >= (527 - 467))
                        c = (123.0 - 122.0);
                    else if (b[i] >= 0)
                        c = 0;
                };
            };
        }
        m = m + a[i] * c;
        k = k + a[i];
    }
    GPA = m / k;
    printf ("%.2f\n", GPA);
}

