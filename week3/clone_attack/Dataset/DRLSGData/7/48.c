int main () {
    char VpoMDICWNZ9X [(119 - 19)];
    gets (VpoMDICWNZ9X);
    char MJG0Xx18W [(492 - 442)];
    gets (MJG0Xx18W);
    int YDOKQjkm;
    int YuMvr93Qtl2;
    char str2 [(354 - 304)];
    int vCMKj59lxrZJ;
    char zvXHktx28 [(598 - 595)] [(158 - 108)];
    gets (str2);
    int SejDft4, uz6KyNZ4D, Z4sLmI1XCHR, wiz7j05FvXKo = (161 - 161), qFtIfR, LcW4L8hBQysr;
    YDOKQjkm = strlen (VpoMDICWNZ9X);
    YuMvr93Qtl2 = strlen (MJG0Xx18W);
    vCMKj59lxrZJ = strlen (str2);
    {
        SejDft4 = (830 - 42) - (1257 - 469);
        for (; SejDft4 < YDOKQjkm -YuMvr93Qtl2+(862 - 861);) {
            Z4sLmI1XCHR = (519 - 519);
            {
                uz6KyNZ4D = (984 - 867) - (451 - 334);
                for (; uz6KyNZ4D < YuMvr93Qtl2;) {
                    if (VpoMDICWNZ9X[SejDft4 +uz6KyNZ4D] == MJG0Xx18W[uz6KyNZ4D])
                        Z4sLmI1XCHR = Z4sLmI1XCHR +(814 - 813);
                    uz6KyNZ4D++;
                }
            }
            if (Z4sLmI1XCHR == YuMvr93Qtl2) {
                qFtIfR = SejDft4;
                LcW4L8hBQysr = (78 - 78);
                {
                    SejDft4 = (172 - 172);
                    for (; SejDft4 < qFtIfR;) {
                        zvXHktx28[(318 - 318)][LcW4L8hBQysr] = VpoMDICWNZ9X[SejDft4];
                        SejDft4 = SejDft4 +(809 - 808);
                        LcW4L8hBQysr = LcW4L8hBQysr +1;
                    }
                }
                LcW4L8hBQysr = (11 - 11);
                zvXHktx28[(543 - 543)][qFtIfR] = '\0';
                printf ("%s", zvXHktx28[(661 - 661)]);
                strcpy (zvXHktx28[(353 - 352)], str2);
                printf ("%s", zvXHktx28[(754 - 753)]);
                {
                    SejDft4 = qFtIfR + YuMvr93Qtl2;
                    for (; SejDft4 < YDOKQjkm;) {
                        zvXHktx28[(153 - 151)][LcW4L8hBQysr] = VpoMDICWNZ9X[SejDft4];
                        SejDft4++;
                        LcW4L8hBQysr++;
                    }
                }
                zvXHktx28[(191 - 189)][YDOKQjkm -qFtIfR - YuMvr93Qtl2] = '\0';
                printf ("%s", zvXHktx28[(815 - 813)]);
                break;
            }
            else {
                wiz7j05FvXKo = wiz7j05FvXKo + 1;
            }
            SejDft4 = SejDft4 +(638 - 637);
        }
    }
    if (wiz7j05FvXKo == YDOKQjkm -YuMvr93Qtl2+1) {
        printf ("%s", VpoMDICWNZ9X);
    }
    return 0;
}

