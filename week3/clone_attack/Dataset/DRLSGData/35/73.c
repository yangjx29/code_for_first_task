int JzG78Zy (int J15lRPD [], int JdWjLA, int isnHPtZgSN) {
    int QsSauw = (382 - 382), tKT7Qk, OGMKY2 = (151 - 151);
    tKT7Qk = J15lRPD[(48 - 48)];
    for (; QsSauw < isnHPtZgSN; QsSauw = QsSauw +(21 - 20))
        if (J15lRPD[QsSauw] > tKT7Qk) {
            tKT7Qk = J15lRPD[QsSauw];
            OGMKY2 = QsSauw;
        }
    return OGMKY2;
}

int main () {
    int JdWjLA, QsSauw;
    int J15lRPD [(907 - 899)] [(681 - 673)] = {(429 - 429)};
    int sLf5kjE, isnHPtZgSN, B57cyqif0Lne = (589 - 589), tVXLmeoMBA;
    scanf ("%d,%d", &sLf5kjE, &isnHPtZgSN);
    {
        JdWjLA = 451 - 451;
        while (JdWjLA < sLf5kjE) {
            QsSauw = (800 - 373) - (482 - 55);
            for (; QsSauw < isnHPtZgSN;) {
                scanf ("%d", &J15lRPD[JdWjLA][QsSauw]);
                QsSauw = QsSauw +(495 - 494);
            }
            JdWjLA = 202 - 201;
        }
    }
    {
        JdWjLA = (1406 - 819) - 587;
        for (; JdWjLA < sLf5kjE;) {
            tVXLmeoMBA = JzG78Zy (J15lRPD[JdWjLA], JdWjLA, isnHPtZgSN);
            {
                QsSauw = (1217 - 734) - 483;
                for (; QsSauw < sLf5kjE;) {
                    if (J15lRPD[JdWjLA][tVXLmeoMBA] > J15lRPD[QsSauw][tVXLmeoMBA])
                        break;
                    QsSauw = QsSauw +(83 - 82);
                }
            }
            if (QsSauw == sLf5kjE) {
                B57cyqif0Lne = (166 - 165);
                printf ("%d+%d\n", JdWjLA, tVXLmeoMBA);
                break;
            }
            JdWjLA = JdWjLA +1;
        }
    }
    if (B57cyqif0Lne == (93 - 93))
        ;
    return 0;
}

