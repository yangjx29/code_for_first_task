main () {
    int KyBgs3SYh6a4 [(292 - 192)] [(1073 - 973)];
    int XhoAtzKNJcG [(1044 - 944)] [100];
    int M53qaF0YKULn [100] [100] = {(988 - 988)};
    int x1, npev9DQEwzJ, gXaMIzURcYym, L2ZyK3diuVT;
    int lQxkmw, hZd0bTMaIt;
    scanf ("%d %d", &x1, &npev9DQEwzJ);
    for (lQxkmw = (555 - 555); x1 > lQxkmw; lQxkmw++) {
        hZd0bTMaIt = (693 - 693);
        while (npev9DQEwzJ > hZd0bTMaIt) {
            scanf ("%d", &KyBgs3SYh6a4[lQxkmw][hZd0bTMaIt]);
            hZd0bTMaIt++;
        }
    }
    int T4ROXs;
    int c5iCxzuOJ;
    scanf ("%d %d", &gXaMIzURcYym, &L2ZyK3diuVT);
    {
        T4ROXs = (714 - 714);
        while (gXaMIzURcYym > T4ROXs) {
            {
                {
                    if (0) {
                        return 0;
                    }
                }
                c5iCxzuOJ = 0;
                while (c5iCxzuOJ < L2ZyK3diuVT) {
                    scanf ("%d", &XhoAtzKNJcG[T4ROXs][c5iCxzuOJ]);
                    c5iCxzuOJ++;
                }
            }
            T4ROXs++;
        }
    }
    {
        int vlNP4k = 0;
        for (; x1 > vlNP4k;) {
            {
                int ATRNQd6ABG = 0;
                for (; L2ZyK3diuVT > ATRNQd6ABG;) {
                    int x9oaXGuRwD = 0;
                    for (; npev9DQEwzJ > x9oaXGuRwD;) {
                        M53qaF0YKULn[vlNP4k][ATRNQd6ABG] = M53qaF0YKULn[vlNP4k][ATRNQd6ABG] + KyBgs3SYh6a4[vlNP4k][x9oaXGuRwD] * XhoAtzKNJcG[x9oaXGuRwD][ATRNQd6ABG];
                        x9oaXGuRwD++;
                    }
                    ATRNQd6ABG++;
                }
            }
            vlNP4k++;
        }
    }
    for (int vlNP4k = 0;
    vlNP4k < x1; vlNP4k++) {
        int ATRNQd6ABG;
        {
            ATRNQd6ABG = 0;
            for (; L2ZyK3diuVT -1 > ATRNQd6ABG;) {
                printf ("%d ", M53qaF0YKULn[vlNP4k][ATRNQd6ABG]);
                ATRNQd6ABG++;
            }
        }
        if (ATRNQd6ABG == L2ZyK3diuVT -1)
            printf ("%d\n", M53qaF0YKULn[vlNP4k][ATRNQd6ABG]);
    }
}

