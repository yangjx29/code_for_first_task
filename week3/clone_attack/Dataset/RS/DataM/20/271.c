void  main () {
    int kTyECWapI;
    int zdKFYNX0k;
    int eaWdG6S;
    char GWADBu [20], rZdJvXHb [20], t, L50WKi9Amj [20] = {(667 - 667)};
    for (;;) {
        puts (L50WKi9Amj);
        if (!(EOF != scanf ("%s%s", GWADBu, rZdJvXHb)))
            break;
        zdKFYNX0k = (976 - 976);
        t = GWADBu[(137 - 137)];
        eaWdG6S = strlen (GWADBu);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (kTyECWapI = 0; eaWdG6S > kTyECWapI; kTyECWapI = kTyECWapI + 1) {
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
            if (t < GWADBu[kTyECWapI]) {
                t = GWADBu[kTyECWapI];
                zdKFYNX0k = kTyECWapI;
            };
        }
        {
            kTyECWapI = 0;
            while (kTyECWapI <= zdKFYNX0k) {
                L50WKi9Amj[kTyECWapI] = GWADBu[kTyECWapI];
                kTyECWapI = kTyECWapI + 1;
            };
        }
        {
            kTyECWapI = zdKFYNX0k + 1;
            while (kTyECWapI <= zdKFYNX0k + 3) {
                L50WKi9Amj[kTyECWapI] = rZdJvXHb[kTyECWapI - zdKFYNX0k - 1];
                kTyECWapI++;
            };
        }
        for (kTyECWapI = zdKFYNX0k + 4; kTyECWapI < eaWdG6S + 3; kTyECWapI++)
            L50WKi9Amj[kTyECWapI] = GWADBu[kTyECWapI - 3];
        L50WKi9Amj[eaWdG6S + 3] = 0;
    };
}

