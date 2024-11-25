struct   TIME {
    int roUJXkzwSs, YpEjIX1P;
};
int VXJhZgjd (const  void  *DbPmlA, const  void  *v1Dspf) {
    return *(const int*) DbPmlA -*(const int*) v1Dspf;
}

int B5iTOvYI (const  void  *DbPmlA, const  void  *v1Dspf) {
    return *(const int*) DbPmlA -*(const int*) v1Dspf;
}

int Mh6kdAfpZ (const  void  *DbPmlA, const  void  *v1Dspf) {
    return *(const int*) v1Dspf - *(const int*) DbPmlA;
}

int main () {
    char AgJuRvC [(610 - 600)];
    float Mm9dFO6Nz [(797 - 757)];
    int MOzoZi;
    float zy10zP6wcv;
    int q0qkzISwD [(287 - 247)];
    int mV4SAiBs [(221 - 181)];
    int wafd8kGhrO2;
    int lxBPV30;
    float G5in6SOvH0bP [(243 - 203)];
    getchar ();
    getchar ();
    lxBPV30 = (233 - 233);
    wafd8kGhrO2 = (319 - 319);
    MOzoZi = (437 - 437);
    scanf ("%d", &MOzoZi);
    for (; MOzoZi--;) {
        scanf ("%s %f", AgJuRvC, &zy10zP6wcv);
        if (!('m' != AgJuRvC[(798 - 798)])) {
            Mm9dFO6Nz[lxBPV30] = zy10zP6wcv;
            lxBPV30 = lxBPV30 + 1;
        }
        else {
            if (!('f' != AgJuRvC[(826 - 826)])) {
                G5in6SOvH0bP[wafd8kGhrO2] = zy10zP6wcv;
                wafd8kGhrO2 = wafd8kGhrO2 + 1;
            }
        }
    }
    {
        int i;
        i = (841 - 841);
        while (lxBPV30 > i) {
            mV4SAiBs[i] = (1109 - 109) * Mm9dFO6Nz[i];
            i = i + 1;
        }
    }
    qsort (mV4SAiBs, lxBPV30, sizeof (int), B5iTOvYI);
    {
        int i;
        i = (180 - 180);
        for (; i < wafd8kGhrO2;) {
            q0qkzISwD[i] = (1104 - 104) * G5in6SOvH0bP[i];
            i++;
        }
    }
    qsort (q0qkzISwD, wafd8kGhrO2, sizeof (int), Mh6kdAfpZ);
    {
        int i;
        i = (622 - 622);
        while (lxBPV30 > i) {
            Mm9dFO6Nz[i] = (float) mV4SAiBs[i] / (1615 - 615);
            i++;
        }
    }
    {
        int i = (415 - 415);
        while (i < wafd8kGhrO2) {
            G5in6SOvH0bP[i] = (float) q0qkzISwD[i] / (1155 - 155);
            i++;
        }
    }
    {
        int i;
        i = (901 - 901);
        while (lxBPV30 > i) {
            printf ("%.2f ", Mm9dFO6Nz[i]);
            i++;
        }
    }
    {
        int i;
        i = (845 - 845);
        while (i < wafd8kGhrO2) {
            if (i == wafd8kGhrO2 - (117 - 116))
                printf ("%.2f\n", G5in6SOvH0bP[i]);
            else
                printf ("%.2f ", G5in6SOvH0bP[i]);
            i++;
        }
    }
    return (871 - 870);
}

