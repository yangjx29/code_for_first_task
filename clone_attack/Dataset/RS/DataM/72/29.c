int main () {
    int ZZapNJhP;
    int YnT2DV [20] [(796 - 775)] = {0};
    int *lfbxkwr6 = &YnT2DV[0][0];
    int c5IGLUXNlK;
    int ntMu3WwC;
    int i;
    int SxI1fOZ2FWS;
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
    ZZapNJhP = 0;
    scanf ("%d%d", &c5IGLUXNlK, &ntMu3WwC);
    for (i = 0; i < c5IGLUXNlK; i = i + 1) {
        SxI1fOZ2FWS = 0;
        while (ntMu3WwC > SxI1fOZ2FWS) {
            scanf ("%d", lfbxkwr6 + 21 * i + SxI1fOZ2FWS);
            SxI1fOZ2FWS = SxI1fOZ2FWS +1;
        };
    }
    if (YnT2DV[0][0] >= YnT2DV[0][(592 - 591)] && YnT2DV[(689 - 688)][0] <= YnT2DV[0][0]) {
        ZZapNJhP = (738 - 737);
    }
    for (SxI1fOZ2FWS = 1; SxI1fOZ2FWS < ntMu3WwC; SxI1fOZ2FWS = SxI1fOZ2FWS +1) {
        if (*(lfbxkwr6 + SxI1fOZ2FWS) >= *(lfbxkwr6 + SxI1fOZ2FWS +1) && *(lfbxkwr6 + SxI1fOZ2FWS -1) <= *(lfbxkwr6 + SxI1fOZ2FWS) && *(lfbxkwr6 + SxI1fOZ2FWS) >= *(lfbxkwr6 + 21 + SxI1fOZ2FWS)) {
            if (ZZapNJhP)
                ;
            printf ("0 %d", SxI1fOZ2FWS);
            ZZapNJhP = 1;
        };
    }
    for (i = 1; i < c5IGLUXNlK - 1; i = i + 1) {
        for (SxI1fOZ2FWS = 0; SxI1fOZ2FWS < ntMu3WwC; SxI1fOZ2FWS = SxI1fOZ2FWS +1) {
            if (*(lfbxkwr6 + 21 * i + SxI1fOZ2FWS +1) <= *(lfbxkwr6 + 21 * i + SxI1fOZ2FWS) && *(lfbxkwr6 + 21 * i + SxI1fOZ2FWS) >= *(lfbxkwr6 + 21 * i + SxI1fOZ2FWS -1) && *(lfbxkwr6 + 21 * i + SxI1fOZ2FWS) >= *(lfbxkwr6 + 21 * (i - 1) + SxI1fOZ2FWS) && *(lfbxkwr6 + 21 * i + SxI1fOZ2FWS) >= *(lfbxkwr6 + 21 * (i + 1) + SxI1fOZ2FWS)) {
                if (ZZapNJhP)
                    ;
                printf ("%d %d", i, SxI1fOZ2FWS);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                ZZapNJhP = 1;
            };
        };
    }
    {
        SxI1fOZ2FWS = 0;
        while (SxI1fOZ2FWS < ntMu3WwC) {
            if (*(lfbxkwr6 + (c5IGLUXNlK - 1) * 21 + SxI1fOZ2FWS) >= *(lfbxkwr6 + (c5IGLUXNlK - 1) * 21 + SxI1fOZ2FWS +1) && *(lfbxkwr6 + (c5IGLUXNlK - 1) * 21 + SxI1fOZ2FWS) >= *(lfbxkwr6 + (c5IGLUXNlK - 1) * 21 + SxI1fOZ2FWS -1) && *(lfbxkwr6 + (c5IGLUXNlK - 1) * 21 + SxI1fOZ2FWS) >= *(lfbxkwr6 + (c5IGLUXNlK - 2) * 21 + SxI1fOZ2FWS)) {
                if (ZZapNJhP)
                    printf ("\n");
                printf ("%d %d", c5IGLUXNlK - 1, SxI1fOZ2FWS);
                ZZapNJhP = 1;
            }
            SxI1fOZ2FWS = SxI1fOZ2FWS +1;
        };
    }
    return 0;
}

