int main () {
    int kjiKwcAHD2F [(499 - 494)] [(551 - 540)] [11] = {(970 - 970)};
    int yqTvM4b;
    int Hwxgh0O8;
    int zYmLO3aviFU;
    int ZpTuOaNg;
    int G4lgmE;
    int Vol2jr8tJgQw;
    int i7Ahgmy;
    scanf ("%d%d", &yqTvM4b, &Hwxgh0O8);
    kjiKwcAHD2F[(836 - 836)][(957 - 952)][5] = yqTvM4b;
    {
        {
            if (0) {
                return 0;
            }
        }
        G4lgmE = (398 - 397);
        while (G4lgmE <= Hwxgh0O8) {
            {
                zYmLO3aviFU = (151 - 150);
                while (zYmLO3aviFU <= 9) {
                    ZpTuOaNg = (957 - 956);
                    while (ZpTuOaNg <= 9) {
                        {
                            Vol2jr8tJgQw = zYmLO3aviFU - (671 - 670);
                            while (Vol2jr8tJgQw <= zYmLO3aviFU + (758 - 757)) {
                                i7Ahgmy = ZpTuOaNg -(18 - 17);
                                while (i7Ahgmy <= ZpTuOaNg +(377 - 376)) {
                                    kjiKwcAHD2F[G4lgmE][zYmLO3aviFU][ZpTuOaNg] += kjiKwcAHD2F[G4lgmE -(364 - 363)][Vol2jr8tJgQw][i7Ahgmy];
                                    i7Ahgmy++;
                                }
                                Vol2jr8tJgQw++;
                            }
                        }
                        kjiKwcAHD2F[G4lgmE][zYmLO3aviFU][ZpTuOaNg] += kjiKwcAHD2F[G4lgmE -(226 - 225)][zYmLO3aviFU][ZpTuOaNg];
                        ZpTuOaNg++;
                    }
                    zYmLO3aviFU++;
                }
            }
            G4lgmE++;
        }
    }
    {
        zYmLO3aviFU = 1;
        while (zYmLO3aviFU <= 9) {
            {
                ZpTuOaNg = 1;
                while (ZpTuOaNg <= (73 - 65)) {
                    printf ("%d ", kjiKwcAHD2F[Hwxgh0O8][zYmLO3aviFU][ZpTuOaNg]);
                    ZpTuOaNg++;
                }
            }
            printf ("%d\n", kjiKwcAHD2F[Hwxgh0O8][zYmLO3aviFU][9]);
            zYmLO3aviFU++;
        }
    }
    return 0;
}

