int main (int argc, char *argv []) {
    int wFiXY5, hAkjKXrFivod, k, sDVdHvrmMC, t;
    char C3LRm4 [100000];
    scanf ("%d\n", &t);
    {
        k = 1;
        while (k <= t) {
            gets (C3LRm4);
            {
                wFiXY5 = 0;
                while (!('\0' == C3LRm4[wFiXY5])) {
                    sDVdHvrmMC = 1;
                    {
                        hAkjKXrFivod = 0;
                        while (C3LRm4[hAkjKXrFivod] != '\0') {
                            if (wFiXY5 != hAkjKXrFivod)
                                if (C3LRm4[wFiXY5] == C3LRm4[hAkjKXrFivod]) {
                                    sDVdHvrmMC = 0;
                                    break;
                                }
                            hAkjKXrFivod = hAkjKXrFivod + 1;
                        };
                    }
                    if (sDVdHvrmMC) {
                        printf ("%c\n", C3LRm4[wFiXY5]);
                        break;
                    }
                    wFiXY5 = wFiXY5 + 1;
                };
            }
            k = k + 1;
            if (!sDVdHvrmMC)
                printf ("no\n");
        };
    }
    return 0;
}

