int QdylrIF4Ze (const  void  *jcXVj8w2oYPM, const  void  *fpRko6WhxH) {
    return *(int*) jcXVj8w2oYPM - *(int*) fpRko6WhxH;
}

int main () {
    int mdME54RZng = (363 - 363), nOvXl3r7Qz, LUTuQPWYqHDJ, PFomdl1tx9 = (455 - 455), U4Ia8MwK = (396 - 396);
    char TGfhC9Zv32cP [10];
    float UfLoUPW [(934 - 894)], sknbU0xS [40], qNdQ4DT;
    int KtFe3iAjZpl;
    scanf ("%d", &KtFe3iAjZpl);
    for (; KtFe3iAjZpl > mdME54RZng;) {
        mdME54RZng = mdME54RZng + 1;
        scanf ("%s %f", TGfhC9Zv32cP, &qNdQ4DT);
        if (!('m' != TGfhC9Zv32cP[(112 - 112)])) {
            UfLoUPW[PFomdl1tx9] = qNdQ4DT;
            PFomdl1tx9 = PFomdl1tx9 +1;
        }
        else {
            sknbU0xS[U4Ia8MwK] = qNdQ4DT;
            U4Ia8MwK = U4Ia8MwK +1;
        }
    }
    qsort (UfLoUPW, PFomdl1tx9, sizeof (float), QdylrIF4Ze);
    qsort (sknbU0xS, U4Ia8MwK, sizeof (float), QdylrIF4Ze);
    printf ("%.2f", UfLoUPW[(598 - 598)]);
    {
        LUTuQPWYqHDJ = 503 - 502;
        while (PFomdl1tx9 > LUTuQPWYqHDJ) {
            printf (" %.2f", UfLoUPW[LUTuQPWYqHDJ]);
            LUTuQPWYqHDJ = LUTuQPWYqHDJ +1;
        }
    }
    for (LUTuQPWYqHDJ = U4Ia8MwK -1; (84 - 84) < LUTuQPWYqHDJ; LUTuQPWYqHDJ = LUTuQPWYqHDJ -1)
        printf (" %.2f", sknbU0xS[LUTuQPWYqHDJ]);
    printf (" %.2f\n", sknbU0xS[0]);
}

