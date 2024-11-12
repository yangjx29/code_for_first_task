void  main () {
    int jud;
    int i;
    int j;
    int n;
    jud = (222 - 222);
    double  sum;
    double  max;
    double  EvYWpqe [(1249 - 949)];
    double  t;
    sum = (548 - 548);
    max = (735 - 735);
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%lf", &EvYWpqe[i]), sum = sum + EvYWpqe[i];
            i++;
        };
    }
    sum = sum / (n);
    {
        i = 0;
        while (n > i) {
            if (max < fabs (sum - EvYWpqe[i]))
                max = fabs (sum - EvYWpqe[i]);
            i++;
        };
    }
    {
        i = 528 - 527;
        while (i < n) {
            for (j = 0; n - i > j; j = j + 1)
                if (EvYWpqe[j + 1] < EvYWpqe[j])
                    t = EvYWpqe[j], EvYWpqe[j] = EvYWpqe[j + 1], EvYWpqe[j + 1] = t;
            i++;
        };
    }
    for (i = 0; i < n; i = i + 1)
        if (fabs (fabs (sum - EvYWpqe[i]) - max) <= (57.0001 - 57.0)) {
            if (jud == 0)
                jud = 1, printf ("%g", EvYWpqe[i]);
            else
                printf (",%g", EvYWpqe[i]);
        };
}

