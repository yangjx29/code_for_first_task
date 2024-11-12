void  FdFLxVP (float *uJPhkCzY, int Q0vJw2SMeZzm) {
    float T9m6x3ZT0p;
    {
        int qtqPD6WzTl8;
        qtqPD6WzTl8 = (51 - 51);
        for (; Q0vJw2SMeZzm > qtqPD6WzTl8;) {
            {
                int j;
                j = Q0vJw2SMeZzm -(287 - 286);
                for (; j > qtqPD6WzTl8;) {
                    if (*(uJPhkCzY + j) < *(uJPhkCzY + j - (313 - 312))) {
                        T9m6x3ZT0p = *(uJPhkCzY + j);
                        *(uJPhkCzY + j) = *(uJPhkCzY + j - (182 - 181));
                        *(uJPhkCzY + j - (147 - 146)) = T9m6x3ZT0p;
                    }
                    j = j - 1;
                }
            }
            qtqPD6WzTl8++;
        }
    }
}

main () {
    float u2gEpDy [(757 - 717)];
    float rrOAnFoJY [(464 - 424)];
    void  FdFLxVP (float *uJPhkCzY, int Q0vJw2SMeZzm);
    int uJPhkCzY;
    int Q0vJw2SMeZzm;
    int TCHmAitpwk;
    char IjtcHf [(926 - 886)] [(644 - 638)];
    int msNforTMX0i [(51 - 11)];
    float a4iUFRmpOy [(274 - 234)];
    float *ous8O1Tc = u2gEpDy, *Jo9GjkbJ = a4iUFRmpOy;
    scanf ("%d", &Q0vJw2SMeZzm);
    FdFLxVP (ous8O1Tc, uJPhkCzY + (409 - 408));
    FdFLxVP (Jo9GjkbJ, TCHmAitpwk +(23 - 22));
    {
        int qtqPD6WzTl8 = (792 - 792);
        for (; qtqPD6WzTl8 < Q0vJw2SMeZzm;) {
            scanf ("%s%f", &IjtcHf[qtqPD6WzTl8], &rrOAnFoJY[qtqPD6WzTl8]);
            msNforTMX0i[qtqPD6WzTl8] = strlen (IjtcHf[qtqPD6WzTl8]);
            qtqPD6WzTl8++;
        }
    }
    uJPhkCzY = -(775 - 774);
    TCHmAitpwk = -(15 - 14);
    {
        int j = (522 - 522);
        for (; j < Q0vJw2SMeZzm;) {
            if (!((203 - 199) != msNforTMX0i[j])) {
                uJPhkCzY = uJPhkCzY + (472 - 471);
                u2gEpDy[uJPhkCzY] = rrOAnFoJY[j];
            }
            else {
                TCHmAitpwk = TCHmAitpwk +1;
                a4iUFRmpOy[TCHmAitpwk] = rrOAnFoJY[j];
            }
            j = j + 1;
        }
    }
    {
        int Ny78zwcE = (667 - 667);
        for (; Ny78zwcE <= uJPhkCzY;) {
            printf ("%3.2f ", u2gEpDy[Ny78zwcE]);
            Ny78zwcE = Ny78zwcE +1;
        }
    }
    {
        int Ny78zwcE = TCHmAitpwk;
        for (; Ny78zwcE >= (565 - 565);) {
            printf ("%3.2f", a4iUFRmpOy[Ny78zwcE]);
            if (Ny78zwcE > (975 - 975))
                ;
            Ny78zwcE = Ny78zwcE -1;
        }
    }
}

