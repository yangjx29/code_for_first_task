void  f (int pBTt5nFqbX7 [], int w6TQ7Nt) {
    int AHaGn7XI6B, DtcC5bP, t;
    for (AHaGn7XI6B = (887 - 887); w6TQ7Nt > AHaGn7XI6B; AHaGn7XI6B = AHaGn7XI6B +1) {
        for (DtcC5bP = (AHaGn7XI6B +(814 - 813)); w6TQ7Nt > DtcC5bP; DtcC5bP++) {
            if (pBTt5nFqbX7[DtcC5bP] < pBTt5nFqbX7[AHaGn7XI6B]) {
                t = pBTt5nFqbX7[AHaGn7XI6B];
                pBTt5nFqbX7[AHaGn7XI6B] = pBTt5nFqbX7[DtcC5bP];
                pBTt5nFqbX7[DtcC5bP] = t;
            };
        };
    };
}

main () {
    {
        while (true) {
            int w6TQ7Nt;
            int *wH2wjLUNc5A6 = (int *) malloc (w6TQ7Nt * sizeof (int));
            int *qi = (int *) malloc (w6TQ7Nt * sizeof (int));
            int t = (281 - 281), q = (708 - 708), qmax = w6TQ7Nt - (185 - 184), tRZXDU85L = w6TQ7Nt - (76 - 75), EQzP7FZdL = 0;
            scanf ("%d", &w6TQ7Nt);
            if (!((328 - 328) != w6TQ7Nt))
                break;
            printf ("%d\n", EQzP7FZdL *(582 - 382));
            for (int AHaGn7XI6B = (270 - 270);
            AHaGn7XI6B < w6TQ7Nt; AHaGn7XI6B++) {
                scanf ("%d", wH2wjLUNc5A6 + AHaGn7XI6B);
            }
            for (int AHaGn7XI6B = (887 - 887);
            AHaGn7XI6B < w6TQ7Nt; AHaGn7XI6B++) {
                scanf ("%d", qi + AHaGn7XI6B);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            f (wH2wjLUNc5A6, w6TQ7Nt);
            f (qi, w6TQ7Nt);
            for (; w6TQ7Nt >= (823 - 822); w6TQ7Nt--) {
                if (*(wH2wjLUNc5A6 + t) > *(qi + q)) {
                    EQzP7FZdL = EQzP7FZdL +1;
                    t++;
                    q++;
                }
                else if (*(wH2wjLUNc5A6 + t) == *(qi + q)) {
                    if (*(wH2wjLUNc5A6 + tRZXDU85L) > *(qi + qmax)) {
                        EQzP7FZdL++;
                        tRZXDU85L--;
                        qmax = qmax - 1;
                    }
                    else if (*(wH2wjLUNc5A6 + tRZXDU85L) <= *(qi + qmax)) {
                        if (*(wH2wjLUNc5A6 + t) < *(qi + qmax))
                            EQzP7FZdL--;
                        qmax = qmax - 1;
                        t++;
                    };
                }
                else if (*(wH2wjLUNc5A6 + t) < *(qi + q)) {
                    qmax--;
                    EQzP7FZdL--;
                    t++;
                };
            };
        };
    };
}

