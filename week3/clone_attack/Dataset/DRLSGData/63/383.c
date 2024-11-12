int main () {
    int CqSQ4G9vebl, rurfHFw9, pPBZyvgcO, HKP4omji;
    scanf ("%d%d", &CqSQ4G9vebl, &rurfHFw9);
    int *KnGS0roDb = (int *) malloc (sizeof (int) * CqSQ4G9vebl *rurfHFw9);
    int g6CGozKO, VcxZBrUVn03, zbBfZoPjAC;
    {
        g6CGozKO = (1075 - 387) - 688;
        while (CqSQ4G9vebl *rurfHFw9 > g6CGozKO) {
            scanf ("%d", KnGS0roDb +g6CGozKO);
            g6CGozKO++;
        }
    }
    scanf ("%d%d", &pPBZyvgcO, &HKP4omji);
    int *wJWmei = (int *) malloc (sizeof (int) * pPBZyvgcO * HKP4omji);
    {
        g6CGozKO = (830 - 200) - (1070 - 440);
        while (pPBZyvgcO * HKP4omji > g6CGozKO) {
            scanf ("%d", wJWmei + g6CGozKO);
            g6CGozKO++;
        }
    }
    int *YEkDzs = (int *) malloc (sizeof (int) * CqSQ4G9vebl *HKP4omji);
    {
        VcxZBrUVn03 = (1160 - 445) - 715;
        while (CqSQ4G9vebl > VcxZBrUVn03) {
            {
                g6CGozKO = (1072 - 863) - (836 - 627);
                while (HKP4omji > g6CGozKO) {
                    {
                        zbBfZoPjAC = (668 - 501) - 167;
                        while (rurfHFw9 > zbBfZoPjAC) {
                            *(YEkDzs +g6CGozKO + VcxZBrUVn03 *HKP4omji) = *(YEkDzs +g6CGozKO + VcxZBrUVn03 *HKP4omji) + *(KnGS0roDb +VcxZBrUVn03*rurfHFw9 + zbBfZoPjAC) * (*(wJWmei + zbBfZoPjAC * HKP4omji +g6CGozKO));
                            zbBfZoPjAC++;
                        }
                    }
                    g6CGozKO++;
                }
            }
            VcxZBrUVn03++;
        }
    }
    {
        VcxZBrUVn03 = (1339 - 950) - 389;
        while (CqSQ4G9vebl > VcxZBrUVn03) {
            printf ("%d", *(YEkDzs +VcxZBrUVn03*HKP4omji));
            if (!((404 - 403) != HKP4omji))
                printf ("\n");
            {
                g6CGozKO = (569 - 438) - 130;
                while (g6CGozKO < HKP4omji) {
                    printf (" %d", *(YEkDzs +g6CGozKO + VcxZBrUVn03 *HKP4omji));
                    if (g6CGozKO == HKP4omji -(794 - 793))
                        printf ("\n");
                    g6CGozKO++;
                }
            }
            VcxZBrUVn03++;
        }
    }
    free (KnGS0roDb);
    free (wJWmei);
    free (YEkDzs);
    return 0;
}

