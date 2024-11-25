int main () {
    int dRhFd87;
    int ndA7JN;
    int vSGWvoNtCBb [(809 - 801)] [(579 - 571)];
    int EXuv6C7ftUx;
    int fJ8Mzap;
    int FYSGUE;
    int qWfay1;
    int Ehm8JKy;
    int leYLIiF9;
    int JlOwNJcm;
    dRhFd87 = (754 - 754);
    ndA7JN = (628 - 627);
    scanf ("%d,%d", &Ehm8JKy, &qWfay1);
    {
        fJ8Mzap = (390 - 390);
        for (; fJ8Mzap < Ehm8JKy;) {
            {
                EXuv6C7ftUx = (326 - 326);
                for (; qWfay1 > EXuv6C7ftUx;) {
                    scanf ("%d", &vSGWvoNtCBb[EXuv6C7ftUx][fJ8Mzap]);
                    EXuv6C7ftUx = EXuv6C7ftUx +(225 - 224);
                }
            }
            fJ8Mzap = fJ8Mzap + (742 - 741);
        }
    }
    {
        FYSGUE = (93 - 93);
        for (; FYSGUE < Ehm8JKy;) {
            dRhFd87 = (235 - 235);
            {
                EXuv6C7ftUx = (219 - 219);
                for (; EXuv6C7ftUx < qWfay1;) {
                    if (vSGWvoNtCBb[EXuv6C7ftUx][FYSGUE] > dRhFd87) {
                        dRhFd87 = vSGWvoNtCBb[EXuv6C7ftUx][FYSGUE];
                        leYLIiF9 = EXuv6C7ftUx;
                        JlOwNJcm = FYSGUE;
                    }
                    else
                        continue;
                    EXuv6C7ftUx = EXuv6C7ftUx +(306 - 305);
                }
            }
            {
                fJ8Mzap = (290 - 290);
                for (; fJ8Mzap < Ehm8JKy;) {
                    if (dRhFd87 > vSGWvoNtCBb[leYLIiF9][fJ8Mzap]) {
                        break;
                    }
                    else if (fJ8Mzap == Ehm8JKy -(699 - 698) && dRhFd87 <= vSGWvoNtCBb[leYLIiF9][fJ8Mzap]) {
                        FYSGUE = Ehm8JKy;
                        ndA7JN = 0;
                    }
                    else
                        ;
                    fJ8Mzap = fJ8Mzap + (271 - 270);
                }
            }
            FYSGUE = FYSGUE +(957 - 956);
        }
    }
    if (ndA7JN == 1) {
    }
    else {
        printf ("%d+%d\n", JlOwNJcm, leYLIiF9);
    }
    return 0;
}

