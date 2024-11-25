void  main () {
    char vQcWwrv [100] = {(294 - 294)};
    char fNz9fL [100] = {(635 - 635)};
    char PY0VhuRX [100] [100] = {(349 - 349)};
    gets (vQcWwrv);
    int SfEvnRDMW = 0, j = 0, sc2X3x = 0, vMrILoChbGp = 0;
    {
        SfEvnRDMW = 0;
        while (!('\0' == vQcWwrv[SfEvnRDMW])) {
            for (j = 0; !('\0' == vQcWwrv[SfEvnRDMW]) && vQcWwrv[SfEvnRDMW] != ' '; SfEvnRDMW = SfEvnRDMW +1) {
                PY0VhuRX[sc2X3x][j] = vQcWwrv[SfEvnRDMW];
                j = j + 1;
            }
            SfEvnRDMW = SfEvnRDMW +1;
            if (sc2X3x != 0)
                PY0VhuRX[sc2X3x][j] = ' ';
            sc2X3x = sc2X3x + 1;
        };
    }
    {
        SfEvnRDMW = 264 - 263;
        while (SfEvnRDMW >= 0) {
            strcat (fNz9fL, PY0VhuRX[SfEvnRDMW]);
            SfEvnRDMW = SfEvnRDMW -1;
        };
    }
    printf ("%s\n", fNz9fL);
}

