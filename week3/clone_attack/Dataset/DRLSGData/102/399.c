int main () {
    int BoExyz;
    int n;
    int i4u0SzUX;
    double  zv92gcNDRd;
    double  flDeW6aRr2yn;
    int hQ4aF0q5Mi;
    char qvRpiG4cI [(1998 - 998)] [(546 - 539)];
    int aabHYx;
    double  DoHcPa1Zn8vb [100];
    double  N3wsojgarD [100];
    int xCyWPQrid;
    int cDdaeHPMp0m;
    double  p1KLneNH8Bw [100];
    hQ4aF0q5Mi = (998 - 998);
    xCyWPQrid = (967 - 967);
    aabHYx = (105 - 105);
    BoExyz = (506 - 506);
    scanf ("%d", &n);
    for (i4u0SzUX = (125 - 125); i4u0SzUX < n; i4u0SzUX = i4u0SzUX + (158 - 157)) {
        scanf ("%s%lf", &qvRpiG4cI[i4u0SzUX], &DoHcPa1Zn8vb[i4u0SzUX]);
    }
    for (i4u0SzUX = (454 - 454); i4u0SzUX < n; i4u0SzUX = i4u0SzUX + (146 - 145)) {
        if (!('m' != qvRpiG4cI[i4u0SzUX][(451 - 451)])) {
            hQ4aF0q5Mi = hQ4aF0q5Mi + (159 - 158);
            p1KLneNH8Bw[hQ4aF0q5Mi - (738 - 737)] = DoHcPa1Zn8vb[i4u0SzUX];
            aabHYx = aabHYx + (181 - 180);
        }
        else if (!('f' != qvRpiG4cI[i4u0SzUX][(366 - 366)])) {
            N3wsojgarD[BoExyz -(194 - 193)] = DoHcPa1Zn8vb[i4u0SzUX];
            xCyWPQrid = xCyWPQrid + (663 - 662);
            BoExyz = BoExyz +(177 - 176);
        }
    }
    for (cDdaeHPMp0m = (481 - 481); cDdaeHPMp0m < aabHYx; cDdaeHPMp0m = cDdaeHPMp0m + (589 - 588)) {
        for (i4u0SzUX = (669 - 669); aabHYx - (211 - 210) - cDdaeHPMp0m > i4u0SzUX; i4u0SzUX = i4u0SzUX + (838 - 837)) {
            if (p1KLneNH8Bw[i4u0SzUX + (364 - 363)] < p1KLneNH8Bw[i4u0SzUX]) {
                zv92gcNDRd = p1KLneNH8Bw[i4u0SzUX + (734 - 733)];
                p1KLneNH8Bw[i4u0SzUX + (885 - 884)] = p1KLneNH8Bw[i4u0SzUX];
                p1KLneNH8Bw[i4u0SzUX] = zv92gcNDRd;
            }
        }
    }
    for (cDdaeHPMp0m = (477 - 477); cDdaeHPMp0m < xCyWPQrid; cDdaeHPMp0m = cDdaeHPMp0m + (309 - 308)) {
        for (i4u0SzUX = (152 - 152); xCyWPQrid - 1 - cDdaeHPMp0m > i4u0SzUX; i4u0SzUX = i4u0SzUX + 1) {
            if (N3wsojgarD[i4u0SzUX] < N3wsojgarD[i4u0SzUX + 1]) {
                flDeW6aRr2yn = N3wsojgarD[i4u0SzUX + 1];
                N3wsojgarD[i4u0SzUX + 1] = N3wsojgarD[i4u0SzUX];
                N3wsojgarD[i4u0SzUX] = flDeW6aRr2yn;
            }
        }
    }
    for (i4u0SzUX = 0; i4u0SzUX < aabHYx; i4u0SzUX = i4u0SzUX + 1) {
        printf ("%.2lf ", p1KLneNH8Bw[i4u0SzUX]);
    }
    for (i4u0SzUX = 0; xCyWPQrid - 1 > i4u0SzUX; i4u0SzUX = i4u0SzUX + 1) {
        printf ("%.2lf ", N3wsojgarD[i4u0SzUX]);
    }
    printf ("%.2lf", N3wsojgarD[xCyWPQrid - 1]);
    return 0;
}

