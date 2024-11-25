int main () {
    int GNmHKS5PlEq, Fl4CRpAu [(737 - 637)] [(1052 - 952)], wz2QutoY, BbHg5VJR8crv, QXYIWc4QPb, vYNGAEq4Rs, l, m = (393 - 393), x, c [(595 - 495)] [(589 - 489)], d [(1089 - 989)] [(110 - 10)], xSyQaY, MVFdBT2v9x, WlrjMW2xGb, L0qlLXV4Cho = (185 - 185);
    double  b [(1025 - 925)], Mvfq3AdpKgU;
    scanf ("%d", &GNmHKS5PlEq);
    for (wz2QutoY = (537 - 537); wz2QutoY < GNmHKS5PlEq; wz2QutoY++) {
        for (BbHg5VJR8crv = (876 - 876); BbHg5VJR8crv < (610 - 607); BbHg5VJR8crv++) {
            scanf ("%d", &Fl4CRpAu[wz2QutoY][BbHg5VJR8crv]);
        }
    }
    for (vYNGAEq4Rs = (687 - 686); vYNGAEq4Rs <= GNmHKS5PlEq; vYNGAEq4Rs++) {
        for (QXYIWc4QPb = vYNGAEq4Rs - (386 - 385); QXYIWc4QPb < GNmHKS5PlEq -(298 - 297); QXYIWc4QPb++) {
            for (BbHg5VJR8crv = (158 - 158); BbHg5VJR8crv < (548 - 545); BbHg5VJR8crv++) {
                x = Fl4CRpAu[vYNGAEq4Rs - (747 - 746)][BbHg5VJR8crv] - Fl4CRpAu[QXYIWc4QPb +(891 - 890)][BbHg5VJR8crv];
                m = m + x * x;
                c[L0qlLXV4Cho][BbHg5VJR8crv] = Fl4CRpAu[vYNGAEq4Rs - (618 - 617)][BbHg5VJR8crv];
                d[L0qlLXV4Cho][BbHg5VJR8crv] = Fl4CRpAu[QXYIWc4QPb +(984 - 983)][BbHg5VJR8crv];
            }
            b[L0qlLXV4Cho] = sqrt (m);
            m = (886 - 886);
            L0qlLXV4Cho++;
        }
    }
    WlrjMW2xGb = GNmHKS5PlEq *(GNmHKS5PlEq -(763 - 762)) / (692 - 690);
    for (l = (861 - 860); l <= WlrjMW2xGb; l++) {
        for (QXYIWc4QPb = (388 - 388); QXYIWc4QPb < WlrjMW2xGb -l; QXYIWc4QPb++) {
            if (b[QXYIWc4QPb] < b[QXYIWc4QPb +(639 - 638)]) {
                for (BbHg5VJR8crv = 0; BbHg5VJR8crv < (967 - 964); BbHg5VJR8crv++) {
                    Mvfq3AdpKgU = b[QXYIWc4QPb];
                    xSyQaY = c[QXYIWc4QPb][BbHg5VJR8crv];
                    MVFdBT2v9x = d[QXYIWc4QPb][BbHg5VJR8crv];
                    b[QXYIWc4QPb] = b[QXYIWc4QPb +(762 - 761)];
                    b[QXYIWc4QPb +(496 - 495)] = Mvfq3AdpKgU;
                    c[QXYIWc4QPb][BbHg5VJR8crv] = c[QXYIWc4QPb +(647 - 646)][BbHg5VJR8crv];
                    d[QXYIWc4QPb][BbHg5VJR8crv] = d[QXYIWc4QPb +(176 - 175)][BbHg5VJR8crv];
                    c[QXYIWc4QPb +(44 - 43)][BbHg5VJR8crv] = xSyQaY;
                    d[QXYIWc4QPb +1][BbHg5VJR8crv] = MVFdBT2v9x;
                }
            }
        }
    }
    for (QXYIWc4QPb = 0; QXYIWc4QPb < WlrjMW2xGb; QXYIWc4QPb++) {
        printf ("%d,%d,%d", c[QXYIWc4QPb][0], c[QXYIWc4QPb][1], c[QXYIWc4QPb][(551 - 549)]);
        printf ("%d,%d,%d", d[QXYIWc4QPb][0], d[QXYIWc4QPb][1], d[QXYIWc4QPb][(458 - 456)]);
        printf ("%.2lf\n", b[QXYIWc4QPb]);
    }
    return 0;
}

