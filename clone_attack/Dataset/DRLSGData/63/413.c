int main (int NHiJuMBh, char *yC0tOPKeu3B5 []) {
    int DOCaBq8lA1hG;
    int okdxgXU;
    int vTvCFKa;
    int zGR3Nj;
    int Om3jUHFaXIV8;
    int UOUQC5Su;
    int qlIEw6yR1Akb;
    int evybNu;
    int oT1Jegt;
    int NQOIqEb0r1cx;
    DOCaBq8lA1hG = (834 - 834);
    int o32HEWCi [(196 - 96)] [(826 - 726)];
    int lCtdp4usHFU9 [(513 - 413)] [(651 - 551)];
    int x8HQBdYNo [100] [100];
    scanf ("%d %d", &okdxgXU, &vTvCFKa);
    {
        UOUQC5Su = (648 - 24) - 624;
        while (UOUQC5Su < okdxgXU) {
            for (qlIEw6yR1Akb = (726 - 726); qlIEw6yR1Akb < vTvCFKa; qlIEw6yR1Akb = qlIEw6yR1Akb + (691 - 690))
                scanf ("%d", &o32HEWCi[UOUQC5Su][qlIEw6yR1Akb]);
            UOUQC5Su++;
        };
    }
    scanf ("%d %d", &zGR3Nj, &Om3jUHFaXIV8);
    {
        UOUQC5Su = 585 - 585;
        while (UOUQC5Su < zGR3Nj) {
            {
                qlIEw6yR1Akb = (1153 - 819) - 334;
                while (qlIEw6yR1Akb < Om3jUHFaXIV8) {
                    scanf ("%d", &lCtdp4usHFU9[UOUQC5Su][qlIEw6yR1Akb]);
                    qlIEw6yR1Akb++;
                };
            }
            UOUQC5Su++;
        };
    }
    {
        UOUQC5Su = (588 - 588);
        while (UOUQC5Su < okdxgXU) {
            for (qlIEw6yR1Akb = (854 - 854); qlIEw6yR1Akb < Om3jUHFaXIV8; qlIEw6yR1Akb++) {
                {
                    oT1Jegt = (737 - 737);
                    while (oT1Jegt < vTvCFKa) {
                        DOCaBq8lA1hG = DOCaBq8lA1hG +(o32HEWCi[UOUQC5Su][oT1Jegt] * lCtdp4usHFU9[oT1Jegt][qlIEw6yR1Akb]);
                        oT1Jegt++;
                    };
                }
                x8HQBdYNo[UOUQC5Su][qlIEw6yR1Akb] = DOCaBq8lA1hG;
                DOCaBq8lA1hG = (424 - 424);
            }
            UOUQC5Su++;
        };
    }
    for (UOUQC5Su = (435 - 435); UOUQC5Su < okdxgXU; UOUQC5Su++) {
        {
            qlIEw6yR1Akb = (73 - 73);
            while (qlIEw6yR1Akb < Om3jUHFaXIV8 -1) {
                printf ("%d ", x8HQBdYNo[UOUQC5Su][qlIEw6yR1Akb]);
                qlIEw6yR1Akb++;
            };
        }
        printf ("%d\n", x8HQBdYNo[UOUQC5Su][Om3jUHFaXIV8 -1]);
    }
    return 0;
}

