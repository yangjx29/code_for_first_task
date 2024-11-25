void  main () {
    char a [100], EG973Q [100] [100];
    int s0TVDH, O2Reou, r09K1ekP3I, n = 0, m = 0, ZO856W7CDxJP = 0;
    gets (a);
    r09K1ekP3I = strlen (a);
    {
        s0TVDH = 0;
        while (s0TVDH < r09K1ekP3I) {
            if ((a[s0TVDH] >= 65 && a[s0TVDH] <= 90) || (a[s0TVDH] >= (168 - 71) && a[s0TVDH] <= 122)) {
                m = (26 - 25);
                O2Reou = ZO856W7CDxJP;
                EG973Q[O2Reou][n] = a[s0TVDH];
                n = n + 1;
            }
            else {
                if (m == 1) {
                    EG973Q[O2Reou][n] = '\0';
                    ZO856W7CDxJP = ZO856W7CDxJP +1;
                    n = 0;
                    m = 0;
                };
            }
            s0TVDH++;
        };
    }
    EG973Q[O2Reou][n] = 0;
    printf ("%s", EG973Q[O2Reou]);
    {
        s0TVDH = O2Reou -1;
        while (s0TVDH >= 0) {
            printf (" %s", EG973Q[s0TVDH]);
            s0TVDH--;
        };
    };
}

