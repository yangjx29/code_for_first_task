int main () {
    char ZULGJ0heDzrx [100];
    gets (ZULGJ0heDzrx);
    char wi8nPA2 [100];
    int bg0pPAxCVqR5;
    char jdwXB6tCJ7mv [30];
    int DPR2S7U4g;
    int wcd9sMy;
    int CQekrbavW;
    int U58LpmUnQs;
    char AbgKANZ1Pma6 [100];
    char qoOMVb18z9jT [30];
    scanf ("%s", jdwXB6tCJ7mv);
    CQekrbavW = strlen (jdwXB6tCJ7mv);
    bg0pPAxCVqR5 = strlen (ZULGJ0heDzrx);
    DPR2S7U4g = 1;
    U58LpmUnQs = 1;
    scanf ("%s", qoOMVb18z9jT);
    {
        wcd9sMy = 0;
        for (; wcd9sMy <= bg0pPAxCVqR5 - CQekrbavW;) {
            strcpy (AbgKANZ1Pma6, ZULGJ0heDzrx);
            AbgKANZ1Pma6[wcd9sMy + CQekrbavW] = 0;
            if (wcd9sMy != 0) {
                AbgKANZ1Pma6[wcd9sMy - 1] = 0;
            }
            if (!(0 != strcmp (&AbgKANZ1Pma6[wcd9sMy], jdwXB6tCJ7mv))) {
                if (wcd9sMy != 0) {
                    DPR2S7U4g = 0;
                    strcpy (wi8nPA2, ZULGJ0heDzrx);
                    wi8nPA2[wcd9sMy] = 0;
                    wi8nPA2[wcd9sMy + CQekrbavW -1] = 0;
                    wi8nPA2[bg0pPAxCVqR5] = 0;
                    printf ("%s%s%s", &wi8nPA2[0], qoOMVb18z9jT, &wi8nPA2[wcd9sMy + CQekrbavW]);
                    break;
                }
                else {
                    DPR2S7U4g = 0;
                    printf ("%s%c%s", qoOMVb18z9jT, ZULGJ0heDzrx[wcd9sMy + CQekrbavW], &AbgKANZ1Pma6[wcd9sMy + CQekrbavW +1]);
                    break;
                }
            }
            wcd9sMy = wcd9sMy + 1;
        }
    }
    if (DPR2S7U4g)
        printf ("%s", ZULGJ0heDzrx);
    return 0;
}

