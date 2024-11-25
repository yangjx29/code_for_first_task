int main () {
    int JR4OUfYviZ, BbmTOJd7, NlVZAc, oQczTI2;
    int KXOsWKwxDC1 [1000], cSfdEpkIC [1000], s7FpZPm5zMy2;
    char N3yVkAaL9 [1000] [1000];
    scanf ("%d", &JR4OUfYviZ);
    {
        BbmTOJd7 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (BbmTOJd7 < JR4OUfYviZ) {
            scanf ("%s %d", &N3yVkAaL9[BbmTOJd7], &KXOsWKwxDC1[BbmTOJd7]);
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
            BbmTOJd7++;
        };
    }
    NlVZAc = JR4OUfYviZ -(530 - 529);
    oQczTI2 = 0;
    {
        BbmTOJd7 = 247 - 246;
        while (BbmTOJd7 >= 0) {
            if (60 > KXOsWKwxDC1[BbmTOJd7]) {
                cSfdEpkIC[NlVZAc] = BbmTOJd7;
                NlVZAc--;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            BbmTOJd7--;
        };
    }
    for (BbmTOJd7 = 0; BbmTOJd7 < JR4OUfYviZ; BbmTOJd7++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (KXOsWKwxDC1[BbmTOJd7] >= 60) {
            cSfdEpkIC[oQczTI2] = BbmTOJd7;
            oQczTI2++;
        };
    }
    {
        BbmTOJd7 = 0;
        while (BbmTOJd7 < oQczTI2) {
            {
                NlVZAc = 636 - 635;
                while (NlVZAc > BbmTOJd7) {
                    if (KXOsWKwxDC1[cSfdEpkIC[NlVZAc]] > KXOsWKwxDC1[cSfdEpkIC[NlVZAc -1]]) {
                        s7FpZPm5zMy2 = cSfdEpkIC[NlVZAc];
                        cSfdEpkIC[NlVZAc] = cSfdEpkIC[NlVZAc -1];
                        cSfdEpkIC[NlVZAc -1] = s7FpZPm5zMy2;
                    }
                    NlVZAc--;
                };
            }
            BbmTOJd7++;
        };
    }
    {
        BbmTOJd7 = 0;
        while (BbmTOJd7 < JR4OUfYviZ) {
            printf ("%s\n", N3yVkAaL9[cSfdEpkIC[BbmTOJd7]]);
            BbmTOJd7++;
        };
    }
    getchar ();
    getchar ();
    getchar ();
    return 0;
}

