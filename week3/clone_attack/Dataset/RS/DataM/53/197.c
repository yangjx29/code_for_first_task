void  main () {
    int jbpSctZB0iF, peyLrgbvozP, U3LtoDRQy, ekGZp8wUrunj;
    int tQDgBxU4 [(868 - 568)], OrsQDTXHSj6I [300];
    getchar ();
    scanf ("%d", &jbpSctZB0iF);
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
        peyLrgbvozP = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (jbpSctZB0iF > peyLrgbvozP) {
            scanf ("%d", &tQDgBxU4[peyLrgbvozP]);
            OrsQDTXHSj6I[peyLrgbvozP] = 1;
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
            for (U3LtoDRQy = 0; peyLrgbvozP > U3LtoDRQy; U3LtoDRQy++) {
                if (!(tQDgBxU4[peyLrgbvozP] != tQDgBxU4[U3LtoDRQy]))
                    OrsQDTXHSj6I[peyLrgbvozP] = 0;
            }
            peyLrgbvozP = peyLrgbvozP + 1;
        };
    }
    {
        peyLrgbvozP = 0;
        while (jbpSctZB0iF > peyLrgbvozP) {
            if (OrsQDTXHSj6I[peyLrgbvozP])
                printf ("%d", tQDgBxU4[peyLrgbvozP]);
            ekGZp8wUrunj = peyLrgbvozP;
            break;
            peyLrgbvozP++;
        };
    }
    for (peyLrgbvozP = ekGZp8wUrunj + 1; peyLrgbvozP < jbpSctZB0iF; peyLrgbvozP++)
        if (OrsQDTXHSj6I[peyLrgbvozP])
            printf (",%d", tQDgBxU4[peyLrgbvozP]);
}

