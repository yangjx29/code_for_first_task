main () {
    int yl0k41McW, Qpk4XrfKj, hzq3JSv6lMtN, lb, lc, ICZO185;
    char fw7bZuMmty [(593 - 337)], b [256], xaoW7VpJ [256];
    gets (fw7bZuMmty);
    puts (fw7bZuMmty);
    gets (b);
    gets (xaoW7VpJ);
    hzq3JSv6lMtN = strlen (fw7bZuMmty);
    lb = strlen (b);
    ICZO185 = 0;
    {
        yl0k41McW = 0;
        for (; hzq3JSv6lMtN - 1 >= yl0k41McW;) {
            for (Qpk4XrfKj = 0; (lb - 1 >= Qpk4XrfKj) && (yl0k41McW + Qpk4XrfKj <= hzq3JSv6lMtN - 1); Qpk4XrfKj = Qpk4XrfKj +1) {
                if (!(b[Qpk4XrfKj] != fw7bZuMmty[yl0k41McW + Qpk4XrfKj])) {
                    if (Qpk4XrfKj == lb - 1) {
                        ICZO185 = 1;
                    }
                }
                else {
                    break;
                }
            }
            if (ICZO185 == 1) {
                break;
            }
            yl0k41McW++;
        }
    }
    lc = strlen (xaoW7VpJ);
    if (ICZO185 == 1) {
        Qpk4XrfKj = 0;
        for (; Qpk4XrfKj <= lc - 1;) {
            fw7bZuMmty[yl0k41McW + Qpk4XrfKj] = xaoW7VpJ[Qpk4XrfKj];
            Qpk4XrfKj++;
        }
    }
}

