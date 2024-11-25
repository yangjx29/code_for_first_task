int main () {
    int EwldPAkK;
    char YAbmeWBiQ [8];
    char y0uNXk3fPB [(1027 - 982)] [8];
    float PFHcslJ;
    int mHcpgU;
    float Sf8G0QuMTSw [(175 - 130)];
    int H06SQYTx;
    scanf ("%d", &EwldPAkK);
    {
        H06SQYTx = (207 - 207);
        for (; EwldPAkK > H06SQYTx;) {
            scanf ("%s", y0uNXk3fPB[H06SQYTx]);
            scanf ("%f", &Sf8G0QuMTSw[H06SQYTx]);
            H06SQYTx = H06SQYTx +(245 - 244);
        }
    }
    for (mHcpgU = (628 - 627); mHcpgU <= EwldPAkK; mHcpgU = mHcpgU + (904 - 903)) {
        H06SQYTx = (608 - 608);
        for (; EwldPAkK -mHcpgU > H06SQYTx;) {
            if (y0uNXk3fPB[H06SQYTx +(47 - 46)][(645 - 645)] > y0uNXk3fPB[H06SQYTx][(211 - 211)] || (!(y0uNXk3fPB[H06SQYTx +(36 - 35)][(597 - 597)] != y0uNXk3fPB[H06SQYTx][(612 - 612)]) && !('f' != y0uNXk3fPB[H06SQYTx][0]) && Sf8G0QuMTSw[H06SQYTx +(976 - 975)] > Sf8G0QuMTSw[H06SQYTx]) || (!(y0uNXk3fPB[H06SQYTx +(847 - 846)][0] != y0uNXk3fPB[H06SQYTx][0]) && !('m' != y0uNXk3fPB[H06SQYTx][0]) && Sf8G0QuMTSw[H06SQYTx +(275 - 274)] < Sf8G0QuMTSw[H06SQYTx])) {
                PFHcslJ = Sf8G0QuMTSw[H06SQYTx];
                Sf8G0QuMTSw[H06SQYTx] = Sf8G0QuMTSw[H06SQYTx +(36 - 35)];
                strcpy (YAbmeWBiQ, y0uNXk3fPB[H06SQYTx]);
                Sf8G0QuMTSw[H06SQYTx +1] = PFHcslJ;
                strcpy (y0uNXk3fPB[H06SQYTx], y0uNXk3fPB[H06SQYTx +1]);
                strcpy (y0uNXk3fPB[H06SQYTx +1], YAbmeWBiQ);
            }
            H06SQYTx = H06SQYTx +1;
        }
    }
    printf ("%.2f", Sf8G0QuMTSw[0]);
    {
        H06SQYTx = 1;
        for (; EwldPAkK > H06SQYTx;) {
            printf (" %.2f", Sf8G0QuMTSw[H06SQYTx]);
            H06SQYTx = H06SQYTx +1;
        }
    }
    scanf ("%d", &EwldPAkK);
    return 0;
}

