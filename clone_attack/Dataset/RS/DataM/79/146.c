int main () {
    int kImVxA1NwRE = (414 - 413), nEOaprbU = 1, bCPMlh8pE [(1255 - 954)], vTWDLBv1bG [301], zuXVIj63GHol, s5aPyfejV, sL5bTMi, e [301], f = (953 - 953);
    for (; kImVxA1NwRE != (523 - 523) && !(0 == nEOaprbU);) {
        scanf ("%d%d", &kImVxA1NwRE, &nEOaprbU);
        if ((!(0 != kImVxA1NwRE)) && (nEOaprbU == 0)) {
            break;
        }
        {
            zuXVIj63GHol = 0;
            while (zuXVIj63GHol < kImVxA1NwRE) {
                bCPMlh8pE[zuXVIj63GHol + 1] = zuXVIj63GHol + 1;
                zuXVIj63GHol = zuXVIj63GHol + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        f++;
        {
            zuXVIj63GHol = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (zuXVIj63GHol < kImVxA1NwRE) {
                s5aPyfejV = nEOaprbU % (kImVxA1NwRE - zuXVIj63GHol + 1);
                {
                    sL5bTMi = 1;
                    while (sL5bTMi <= (kImVxA1NwRE - zuXVIj63GHol + 1 - s5aPyfejV)) {
                        vTWDLBv1bG[sL5bTMi] = bCPMlh8pE[s5aPyfejV + sL5bTMi];
                        sL5bTMi = sL5bTMi + 1;
                    };
                }
                {
                    sL5bTMi = 1;
                    while (sL5bTMi < s5aPyfejV) {
                        vTWDLBv1bG[kImVxA1NwRE - zuXVIj63GHol + 1 - s5aPyfejV + sL5bTMi] = bCPMlh8pE[sL5bTMi];
                        sL5bTMi = sL5bTMi + 1;
                    };
                }
                {
                    sL5bTMi = 0;
                    while (sL5bTMi < (kImVxA1NwRE - zuXVIj63GHol)) {
                        bCPMlh8pE[sL5bTMi + 1] = vTWDLBv1bG[sL5bTMi + 1];
                        sL5bTMi = sL5bTMi + 1;
                    };
                }
                zuXVIj63GHol = zuXVIj63GHol + 1;
            };
        }
        e[f] = bCPMlh8pE[1];
    }
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
        sL5bTMi = 1;
        while (sL5bTMi <= f) {
            printf ("%d\n", e[sL5bTMi]);
            sL5bTMi++;
        };
    }
    return 0;
}

