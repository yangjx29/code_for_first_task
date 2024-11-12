void  main () {
    int FjXcLKnFAD4N;
    FjXcLKnFAD4N = 0;
    int CK8wBcTyQp [26] = {(352 - 352)}, uBjI39Z [26] = {0}, i0Tq2MQoN17 [26] = {0}, UrLVAf6Xv4 [26] = {0};
    char nxkRS5grPhO [(1131 - 131)], crTns7xwSh9 [1000];
    int mtJnGABEjq = strlen (nxkRS5grPhO), l2 = strlen (crTns7xwSh9), DqvzKmlwdy5M;
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
    scanf ("%s %s", nxkRS5grPhO, crTns7xwSh9);
    {
        DqvzKmlwdy5M = 0;
        while (mtJnGABEjq > DqvzKmlwdy5M) {
            if ('a' <= nxkRS5grPhO[DqvzKmlwdy5M] && 'z' >= nxkRS5grPhO[DqvzKmlwdy5M]) {
                int FEj7aq5G1NB = nxkRS5grPhO[DqvzKmlwdy5M] - 'a';
                uBjI39Z[FEj7aq5G1NB]++;
            }
            else if ('A' <= nxkRS5grPhO[DqvzKmlwdy5M] && 'Z' >= nxkRS5grPhO[DqvzKmlwdy5M]) {
                int FEj7aq5G1NB;
                FEj7aq5G1NB = nxkRS5grPhO[DqvzKmlwdy5M] - 'A';
                CK8wBcTyQp[FEj7aq5G1NB]++;
            }
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
            DqvzKmlwdy5M++;
        };
    }
    {
        DqvzKmlwdy5M = 0;
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
        while (l2 > DqvzKmlwdy5M) {
            if ('a' <= crTns7xwSh9[DqvzKmlwdy5M] && crTns7xwSh9[DqvzKmlwdy5M] <= 'z') {
                int FEj7aq5G1NB = crTns7xwSh9[DqvzKmlwdy5M] - 'a';
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
                UrLVAf6Xv4[FEj7aq5G1NB]++;
            }
            else if (crTns7xwSh9[DqvzKmlwdy5M] >= 'A' && crTns7xwSh9[DqvzKmlwdy5M] < 'Z') {
                int FEj7aq5G1NB;
                FEj7aq5G1NB = crTns7xwSh9[DqvzKmlwdy5M] - 'A';
                i0Tq2MQoN17[FEj7aq5G1NB]++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            DqvzKmlwdy5M++;
        };
    }
    {
        DqvzKmlwdy5M = 0;
        while (DqvzKmlwdy5M < 26) {
            if (uBjI39Z[DqvzKmlwdy5M] == UrLVAf6Xv4[DqvzKmlwdy5M])
                FjXcLKnFAD4N++;
            if (CK8wBcTyQp[DqvzKmlwdy5M] == i0Tq2MQoN17[DqvzKmlwdy5M])
                FjXcLKnFAD4N++;
            DqvzKmlwdy5M++;
        };
    }
    if (FjXcLKnFAD4N == 52)
        printf ("YES\n");
    else
        printf ("NO\n");
}

