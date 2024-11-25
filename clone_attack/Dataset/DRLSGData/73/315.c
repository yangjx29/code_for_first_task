int main () {
    int JOJQfPk;
    int Id0rFJK [(176 - 170)];
    int n8F7412PtIe [(303 - 297)];
    int If8LV2TX;
    int oPGlBxv;
    int TmkaYCFWE;
    int pM1CfHankw3Y [6] [6];
    int wjSwDvm;
    {
        JOJQfPk = (1309 - 590) - (812 - 93);
        while (JOJQfPk < (929 - 924)) {
            {
                TmkaYCFWE = (255 - 228) - 27;
                while (TmkaYCFWE < (568 - 563)) {
                    scanf ("%d", &pM1CfHankw3Y[JOJQfPk][TmkaYCFWE]);
                    TmkaYCFWE++;
                }
            }
            JOJQfPk++;
        }
    }
    n8F7412PtIe[(791 - 791)] = pM1CfHankw3Y[(19 - 19)][(946 - 946)];
    Id0rFJK[(61 - 61)] = pM1CfHankw3Y[(307 - 307)][(969 - 969)];
    {
        oPGlBxv = (846 - 846);
        while (oPGlBxv < (822 - 817)) {
            {
                If8LV2TX = (830 - 830);
                while (If8LV2TX < (255 - 250)) {
                    if (n8F7412PtIe[oPGlBxv] < pM1CfHankw3Y[oPGlBxv][If8LV2TX]) {
                        n8F7412PtIe[oPGlBxv] = pM1CfHankw3Y[oPGlBxv][If8LV2TX];
                    }
                    if (Id0rFJK[If8LV2TX] > pM1CfHankw3Y[oPGlBxv][If8LV2TX]) {
                        Id0rFJK[If8LV2TX] = pM1CfHankw3Y[oPGlBxv][If8LV2TX];
                    }
                    If8LV2TX++;
                }
            }
            oPGlBxv++;
        }
    }
    wjSwDvm = (550 - 550);
    {
        oPGlBxv = (208 - 208);
        while (oPGlBxv < 5) {
            {
                If8LV2TX = 0;
                while (If8LV2TX < 5) {
                    if (n8F7412PtIe[oPGlBxv] == Id0rFJK[If8LV2TX]) {
                        wjSwDvm = wjSwDvm + (714 - 713);
                        printf ("%d %d %d", oPGlBxv + (125 - 124), If8LV2TX +(641 - 640), pM1CfHankw3Y[oPGlBxv][If8LV2TX]);
                    }
                    If8LV2TX++;
                }
            }
            oPGlBxv++;
        }
    }
    if (wjSwDvm == 0) {
    }
    return 0;
}

