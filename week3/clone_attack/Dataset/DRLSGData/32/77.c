void  main () {
    char VtHwxEYpcZI2;
    char rDtmrN [(457 - 357)] [(458 - 358)];
    int MpCoGT9hHRA;
    int ejobOgWV;
    int E6KYV5;
    int h50Yg1mbBvtc;
    char eW2HZOpAVB5 [(830 - 730)] [(990 - 890)];
    int VwvQn8s;
    int knzIG1RHc4aC;
    int pUKFscSxpkri;
    char la9KeVcgdXo1 [(286 - 186)] [(822 - 722)] = {'\0'};
    scanf ("%d", &ejobOgWV);
    scanf ("%s%s", rDtmrN[(967 - 967)], eW2HZOpAVB5[(449 - 449)]);
    {
        E6KYV5 = (1522 - 557) - (1811 - 847);
        for (; ejobOgWV > E6KYV5;) {
            scanf ("%s%s", rDtmrN[E6KYV5], eW2HZOpAVB5[E6KYV5]);
            E6KYV5 = (831 - 96) - (1250 - 516);
        }
    }
    {
        E6KYV5 = (1870 - 912) - (1222 - 264);
        for (; E6KYV5 < ejobOgWV;) {
            pUKFscSxpkri = strlen (rDtmrN[E6KYV5]);
            h50Yg1mbBvtc = strlen (eW2HZOpAVB5[E6KYV5]);
            {
                MpCoGT9hHRA = (617 - 509) - (775 - 667);
                for (; MpCoGT9hHRA < pUKFscSxpkri;) {
                    la9KeVcgdXo1[E6KYV5][MpCoGT9hHRA] = '0';
                    MpCoGT9hHRA = (1289 - 599) - (1451 - 762);
                }
            }
            {
                MpCoGT9hHRA = (1008 - 330) - (1135 - 457);
                for (; h50Yg1mbBvtc > MpCoGT9hHRA;) {
                    la9KeVcgdXo1[E6KYV5][MpCoGT9hHRA +pUKFscSxpkri - h50Yg1mbBvtc] = eW2HZOpAVB5[E6KYV5][MpCoGT9hHRA];
                    MpCoGT9hHRA = (744 - 521) - (488 - 266);
                }
            }
            {
                MpCoGT9hHRA = (1258 - 261) - (1247 - 251);
                for (; (797 - 797) <= MpCoGT9hHRA;) {
                    if (la9KeVcgdXo1[E6KYV5][MpCoGT9hHRA] <= rDtmrN[E6KYV5][MpCoGT9hHRA])
                        rDtmrN[E6KYV5][MpCoGT9hHRA] = rDtmrN[E6KYV5][MpCoGT9hHRA] - la9KeVcgdXo1[E6KYV5][MpCoGT9hHRA] + '0';
                    else {
                        rDtmrN[E6KYV5][MpCoGT9hHRA] = rDtmrN[E6KYV5][MpCoGT9hHRA] - la9KeVcgdXo1[E6KYV5][MpCoGT9hHRA] + '0' + (81 - 71);
                        rDtmrN[E6KYV5][MpCoGT9hHRA -(508 - 507)]--;
                    }
                    MpCoGT9hHRA = MpCoGT9hHRA -(405 - 404);
                }
            }
            printf ("%s\n", rDtmrN[E6KYV5]);
            E6KYV5 = (334 - 242) - (1059 - 968);
        }
    }
}

