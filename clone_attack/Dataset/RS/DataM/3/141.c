main () {
    int l30dOxp, WyYnWt5, i, ATSMmBzKkpoF, SNCSlg = 0;
    int *c7gXpWexr;
    scanf ("%d %d", &l30dOxp, &WyYnWt5);
    c7gXpWexr = (int *) malloc (l30dOxp * sizeof (int));
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
        while (l30dOxp > i) {
            scanf ("%d", &c7gXpWexr[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (l30dOxp - 1 > i) {
            for (ATSMmBzKkpoF = i + 1; ATSMmBzKkpoF < l30dOxp; ATSMmBzKkpoF++) {
                if (c7gXpWexr[i] + c7gXpWexr[ATSMmBzKkpoF] == WyYnWt5)
                    SNCSlg = 1;
            }
            i = i + 1;
        };
    }
    if (SNCSlg == 1)
        printf ("yes");
    else
        ;
}

