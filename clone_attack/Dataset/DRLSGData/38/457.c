double  T6xefERlhF (double  *VhwsI9p, int xo5VEqRhCF1) {
    double  QEgrNfv70LAU;
    int lhcQOHS6Br;
    int U1znvMhSt2;
    double  aRFA84j;
    int JAoTaZEnl;
    QEgrNfv70LAU = (891 - 891);
    {
        U1znvMhSt2 = (1084 - 972) - (485 - 373);
        for (; xo5VEqRhCF1 > U1znvMhSt2;) {
            QEgrNfv70LAU = QEgrNfv70LAU +*(VhwsI9p +U1znvMhSt2);
            U1znvMhSt2++;
        }
    }
    aRFA84j = QEgrNfv70LAU / xo5VEqRhCF1;
    QEgrNfv70LAU = (268 - 268);
    {
        U1znvMhSt2 = (728 - 374) - (654 - 300);
        while (U1znvMhSt2 < xo5VEqRhCF1) {
            QEgrNfv70LAU = QEgrNfv70LAU +(*(VhwsI9p +U1znvMhSt2) - aRFA84j) * (*(VhwsI9p +U1znvMhSt2) - aRFA84j);
            U1znvMhSt2++;
        }
    }
    QEgrNfv70LAU = QEgrNfv70LAU / xo5VEqRhCF1;
    QEgrNfv70LAU = sqrt (QEgrNfv70LAU);
    return QEgrNfv70LAU;
}

main () {
    double  ef0BNpj7Ko;
    int U1znvMhSt2;
    int lhcQOHS6Br;
    int JAoTaZEnl;
    int xo5VEqRhCF1;
    double  VhwsI9p [(864 - 714)];
    scanf ("%d", &lhcQOHS6Br);
    {
        U1znvMhSt2 = (850 - 791) - (220 - 161);
        for (; lhcQOHS6Br > U1znvMhSt2;) {
            scanf ("%d", &xo5VEqRhCF1);
            {
                JAoTaZEnl = (643 - 132) - (1412 - 901);
                while (xo5VEqRhCF1 > JAoTaZEnl) {
                    scanf ("%lf", &VhwsI9p[JAoTaZEnl]);
                    JAoTaZEnl++;
                }
            }
            ef0BNpj7Ko = T6xefERlhF (VhwsI9p, xo5VEqRhCF1);
            printf ("%.5lf\n", ef0BNpj7Ko);
            U1znvMhSt2++;
        }
    }
}

