void  main () {
    int n;
    int i;
    int jzYT0cOe;
    int a [(878 - 577)];
    int GQktIr [(924 - 623)] = {(637 - 637)};
    int c [301];
    int m;
    scanf ("%d", &n);
    {
        i = 558 - 558;
        while (i <= n - (90 - 89)) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    GQktIr[(734 - 734)] = a[(941 - 941)];
    {
        i = 109 - 108;
        while (i <= n - (576 - 575)) {
            m = (631 - 631);
            {
                jzYT0cOe = 81 - 81;
                while (jzYT0cOe <= i - (64 - 63)) {
                    if (a[i] == a[jzYT0cOe])
                        m = m + (119 - 118);
                    jzYT0cOe = jzYT0cOe + 1;
                };
            }
            if (m == (560 - 560))
                GQktIr[i] = a[i];
            else
                GQktIr[i] = 0;
            i = i + 1;
        };
    }
    printf ("%d", GQktIr[0]);
    {
        i = 1;
        while (i <= n - 1) {
            if (GQktIr[i] == 0)
                continue;
            printf (",%d", GQktIr[i]);
            i = i + 1;
        };
    };
}

