int main () {
    int Y9thBMpw;
    int u280ZLu;
    int kE8HvM4Th7;
    char ia8kON [5000] = {'\0'};
    gets (ia8kON);
    int TEvFYKtQ;
    int NQcqGuWDiX;
    int PlTSI7g2Djhr;
    kE8HvM4Th7 = 100;
    u280ZLu = 0;
    NQcqGuWDiX = 0;
    ia8kON[strlen (ia8kON)] = ' ';
    for (PlTSI7g2Djhr = 0; PlTSI7g2Djhr < strlen (ia8kON); PlTSI7g2Djhr = PlTSI7g2Djhr +1) {
        if (ia8kON[PlTSI7g2Djhr] != ' ')
            NQcqGuWDiX = NQcqGuWDiX +1;
        else {
            if (u280ZLu < NQcqGuWDiX) {
                u280ZLu = NQcqGuWDiX;
                TEvFYKtQ = PlTSI7g2Djhr -NQcqGuWDiX;
            }
            if (kE8HvM4Th7 > NQcqGuWDiX) {
                kE8HvM4Th7 = NQcqGuWDiX;
                Y9thBMpw = PlTSI7g2Djhr -NQcqGuWDiX;
            }
            NQcqGuWDiX = 0;
        }
    }
    {
        PlTSI7g2Djhr = TEvFYKtQ;
        for (; TEvFYKtQ +u280ZLu > PlTSI7g2Djhr;) {
            printf ("%c", ia8kON[PlTSI7g2Djhr]);
            PlTSI7g2Djhr = PlTSI7g2Djhr +1;
        }
    }
    for (PlTSI7g2Djhr = Y9thBMpw; Y9thBMpw +kE8HvM4Th7 > PlTSI7g2Djhr; PlTSI7g2Djhr = PlTSI7g2Djhr +1)
        printf ("%c", ia8kON[PlTSI7g2Djhr]);
    return 0;
}

