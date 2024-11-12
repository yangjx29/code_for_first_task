int ESFWDfHmtZB [10000] = {0};
char eHBFryQI0h93 [3000];

int main (void ) {
    int YmdNfZbJ;
    int LvfFTcMr;
    int X4nWjkSE;
    int ok;
    char XN1fVsSt0ul;
    scanf ("%s", eHBFryQI0h93);
    X4nWjkSE = 0;
    ok = 0;
    LvfFTcMr = 0;
    for (YmdNfZbJ = 0; YmdNfZbJ < strlen (eHBFryQI0h93); YmdNfZbJ++) {
        if ('0' <= eHBFryQI0h93[YmdNfZbJ] && eHBFryQI0h93[YmdNfZbJ] <= '9')
            LvfFTcMr = LvfFTcMr *10 + eHBFryQI0h93[YmdNfZbJ] - '0';
        else {
            ESFWDfHmtZB[LvfFTcMr]++;
            LvfFTcMr = 0;
        }
        if (!(strlen (eHBFryQI0h93) - 1 != YmdNfZbJ) && LvfFTcMr != 0)
            ESFWDfHmtZB[LvfFTcMr]++;
    }
    for (YmdNfZbJ = 9999; 0 <= YmdNfZbJ; YmdNfZbJ--) {
        if (ESFWDfHmtZB[YmdNfZbJ] > 0 && X4nWjkSE == 0)
            X4nWjkSE = 1;
        else {
            if (ESFWDfHmtZB[YmdNfZbJ] > 0 && X4nWjkSE == 1) {
                printf ("%d", YmdNfZbJ);
                ok = 1;
                break;
            }
        }
    }
    if (ok == 0)
        ;
    return 0;
}

