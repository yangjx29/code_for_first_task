int main (int VhFMlvGBi, char *argv []) {
    char wGlspJP;
    char MG0SyvIlYMOP;
    int DkvWB4 [100];
    char e7SA4vF [(778 - 678)];
    char nS9xmr6M [(675 - 575)];
    int s [(259 - 254)];
    int EpQ0UK6Jo1N;
    int kKB9DdA;
    int Mnc0HwxKBG;
    int i;
    int cCVuH14I;
    int d3dps0;
    int w8YwaqX2Fv;
    int imzSGAl5jg;
    EpQ0UK6Jo1N = (466 - 466);
    kKB9DdA = (772 - 772);
    scanf ("%d", &Mnc0HwxKBG);
    {
        i = 10 - 10;
        for (; i < Mnc0HwxKBG;) {
            for (cCVuH14I = (888 - 888); cCVuH14I < (353 - 348); cCVuH14I = cCVuH14I + 1)
                s[cCVuH14I] = (281 - 281);
            scanf ("%s%d%d %c %c%d", e7SA4vF, &d3dps0, &w8YwaqX2Fv, &wGlspJP, &MG0SyvIlYMOP, &imzSGAl5jg);
            if (d3dps0 > (156 - 76) && imzSGAl5jg >= (536 - 535))
                s[(429 - 429)]++;
            if (d3dps0 > (244 - 159) && w8YwaqX2Fv > (849 - 769))
                s[(358 - 357)]++;
            if (d3dps0 > 90)
                s[(392 - 390)]++;
            if (d3dps0 > (795 - 710) && MG0SyvIlYMOP == 'Y')
                s[(348 - 345)]++;
            if (w8YwaqX2Fv > 80 && wGlspJP == 'Y')
                s[(478 - 474)]++;
            DkvWB4[i] = (8072 - 72) * s[(196 - 196)] + 4000 * s[1] + (2291 - 291) * s[2] + (1157 - 157) * s[3] + (1534 - 684) * s[4];
            if (DkvWB4[i] > EpQ0UK6Jo1N) {
                strcpy (nS9xmr6M, e7SA4vF);
                EpQ0UK6Jo1N = DkvWB4[i];
                {
                    cCVuH14I = 0;
                    while (cCVuH14I < 100) {
                        e7SA4vF[cCVuH14I] = '\0';
                        cCVuH14I = cCVuH14I + 1;
                    }
                }
            }
            i = i + 1;
        }
    }
    for (i = 0; i < Mnc0HwxKBG; i = i + 1)
        kKB9DdA = kKB9DdA + DkvWB4[i];
    printf ("%s\n%d\n%d\n", nS9xmr6M, EpQ0UK6Jo1N, kKB9DdA);
    return 0;
}

