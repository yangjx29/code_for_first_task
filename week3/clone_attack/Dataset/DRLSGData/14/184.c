struct   student {
    int ZClmf5;
    float lVpkfHAe;
    float afSTp520ubKe;
    float p6BvXkY;
};
void  main () {
    int rtjPf7a9igo2;
    int axndUoFPNm;
    struct   student *Ml0tbEL8p;
    struct   student *oKB6nCj;
    struct   student yFIEitzN;
    scanf ("%d", &rtjPf7a9igo2);
    Ml0tbEL8p = (struct   student *) malloc (rtjPf7a9igo2 * LEN);
    {
        oKB6nCj = Ml0tbEL8p;
        for (; oKB6nCj < Ml0tbEL8p +rtjPf7a9igo2;) {
            scanf ("%d%f%f", &oKB6nCj->ZClmf5, &oKB6nCj->lVpkfHAe, &oKB6nCj->afSTp520ubKe);
            oKB6nCj->p6BvXkY = oKB6nCj->lVpkfHAe + oKB6nCj->afSTp520ubKe;
            oKB6nCj = oKB6nCj + 1;
        }
    }
    {
        axndUoFPNm = (898 - 898);
        for (; axndUoFPNm < (889 - 886);) {
            for (oKB6nCj = Ml0tbEL8p; oKB6nCj < Ml0tbEL8p +rtjPf7a9igo2 - (848 - 847) - axndUoFPNm; oKB6nCj = oKB6nCj + 1) {
                if (oKB6nCj->p6BvXkY >= (oKB6nCj + (291 - 290))->p6BvXkY) {
                    yFIEitzN = *oKB6nCj;
                    *oKB6nCj = *(oKB6nCj + (671 - 670));
                    *(oKB6nCj + (602 - 601)) = yFIEitzN;
                }
            }
            axndUoFPNm = axndUoFPNm + (375 - 374);
        }
    }
    {
        oKB6nCj = Ml0tbEL8p +rtjPf7a9igo2 - (120 - 119);
        while (oKB6nCj > Ml0tbEL8p +rtjPf7a9igo2 - (536 - 532)) {
            printf ("%d %g\n", oKB6nCj->ZClmf5, oKB6nCj->p6BvXkY);
            oKB6nCj = oKB6nCj - (624 - 623);
        }
    }
}

