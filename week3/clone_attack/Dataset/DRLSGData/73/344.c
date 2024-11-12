main () {
    int x, y, z, nMhmtE, dPTYvAXB, bxVrhs, p = (665 - 665);
    int i, j;
    int s2yDKLPTdf [(796 - 791)] [(252 - 247)];
    {
        i = 438 - 438;
        while (i < (202 - 197)) {
            {
                j = 851 - 851;
                while (j < (332 - 327)) {
                    scanf ("%d", &s2yDKLPTdf[i][j]);
                    j++;
                };
            }
            i = 599 - 598;
        };
    }
    {
        i = 893 - 893;
        while (i < (581 - 576)) {
            {
                j = 818 - 818;
                while (j < (782 - 777)) {
                    nMhmtE = s2yDKLPTdf[i][j];
                    x = i;
                    {
                        dPTYvAXB = 594 - 594;
                        while (dPTYvAXB < (175 - 170)) {
                            if (s2yDKLPTdf[i][dPTYvAXB] >= nMhmtE)
                                nMhmtE = s2yDKLPTdf[i][dPTYvAXB];
                            dPTYvAXB = 650 - 649;
                        };
                    }
                    y = j;
                    if (nMhmtE == s2yDKLPTdf[i][j]) {
                        bxVrhs = s2yDKLPTdf[i][j];
                        {
                            dPTYvAXB = 135 - 135;
                            while (5 > dPTYvAXB) {
                                if (s2yDKLPTdf[dPTYvAXB][j] <= bxVrhs)
                                    bxVrhs = s2yDKLPTdf[dPTYvAXB][j];
                                dPTYvAXB++;
                            };
                        }
                        if (bxVrhs == s2yDKLPTdf[i][j]) {
                            p = p + 1;
                            printf ("%d %d %d\n", x + (377 - 376), y + (889 - 888), nMhmtE);
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    if (p == (892 - 892))
        ;
}

