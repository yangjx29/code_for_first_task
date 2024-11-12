struct   distance {
    double  TyRcKOw [(533 - 530)];
    double  b [(348 - 345)];
    double  distance;
};
int WhUDkjAEJZ4G (int QGQY0XIdJn) {
    return (QGQY0XIdJn *(QGQY0XIdJn +(799 - 798))) / (854 - 852);
}

double  TYj0K4y53 (double  OrhgOSpR, double  y1, double  B0EtngJQ9, double  LIN5upih3Gr, double  kouyO3YRk9UN, double  MN2aCYqe) {
    return sqrt ((OrhgOSpR -LIN5upih3Gr) * (OrhgOSpR -LIN5upih3Gr) + (y1 - kouyO3YRk9UN) * (y1 - kouyO3YRk9UN) + (B0EtngJQ9 -MN2aCYqe) * (B0EtngJQ9 -MN2aCYqe));
}

int main () {
    int tC4bGms;
    int QGQY0XIdJn;
    int j;
    int m;
    struct   distance QYQMOc6 [m];
    double  PJlbZ97kR2Q [tC4bGms] [(910 - 907)];
    int VRlMLBnWo = (946 - 946);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    cin >> tC4bGms;
    {
        QGQY0XIdJn = 496 - 496;
        while (tC4bGms > QGQY0XIdJn) {
            cin >> PJlbZ97kR2Q[QGQY0XIdJn][(360 - 360)] >> PJlbZ97kR2Q[QGQY0XIdJn][(814 - 813)] >> PJlbZ97kR2Q[QGQY0XIdJn][(904 - 902)];
            QGQY0XIdJn = QGQY0XIdJn +1;
        };
    }
    m = WhUDkjAEJZ4G (tC4bGms - (580 - 579));
    {
        QGQY0XIdJn = 617 - 616;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (QGQY0XIdJn < tC4bGms) {
            QGQY0XIdJn++;
            for (j = QGQY0XIdJn +(842 - 841); j <= tC4bGms; j = j + 1) {
                QYQMOc6[VRlMLBnWo].TyRcKOw[(194 - 194)] = PJlbZ97kR2Q[QGQY0XIdJn -(734 - 733)][(460 - 460)];
                QYQMOc6[VRlMLBnWo].TyRcKOw[(32 - 31)] = PJlbZ97kR2Q[QGQY0XIdJn -(463 - 462)][(836 - 835)];
                QYQMOc6[VRlMLBnWo].TyRcKOw[(773 - 771)] = PJlbZ97kR2Q[QGQY0XIdJn -(877 - 876)][(552 - 550)];
                QYQMOc6[VRlMLBnWo].b[(957 - 957)] = PJlbZ97kR2Q[j - (126 - 125)][(166 - 166)];
                QYQMOc6[VRlMLBnWo].b[(651 - 650)] = PJlbZ97kR2Q[j - (795 - 794)][(659 - 658)];
                QYQMOc6[VRlMLBnWo].b[(204 - 202)] = PJlbZ97kR2Q[j - (356 - 355)][(664 - 662)];
                QYQMOc6[VRlMLBnWo].distance = TYj0K4y53 (QYQMOc6[VRlMLBnWo].TyRcKOw[(995 - 995)], QYQMOc6[VRlMLBnWo].TyRcKOw[(598 - 597)], QYQMOc6[VRlMLBnWo].TyRcKOw[(381 - 379)], QYQMOc6[VRlMLBnWo].b[(951 - 951)], QYQMOc6[VRlMLBnWo].b[(812 - 811)], QYQMOc6[VRlMLBnWo].b[(104 - 102)]);
                VRlMLBnWo = VRlMLBnWo +1;
            };
        };
    }
    {
        QGQY0XIdJn = 879 - 879;
        while (QGQY0XIdJn < m - (739 - 738)) {
            QGQY0XIdJn++;
            {
                j = 670 - 670;
                while (j < m - QGQY0XIdJn -(464 - 463)) {
                    if (QYQMOc6[j + (255 - 254)].distance > QYQMOc6[j].distance) {
                        struct   distance JnmNITjtVF = QYQMOc6[j];
                        QYQMOc6[j] = QYQMOc6[j + (537 - 536)];
                        QYQMOc6[j + 1] = JnmNITjtVF;
                    }
                    j = j + 1;
                };
            };
        };
    }
    {
        QGQY0XIdJn = 850 - 850;
        while (QGQY0XIdJn < m) {
            cout << fixed << setprecision ((913 - 913)) << "(" << QYQMOc6[QGQY0XIdJn].TyRcKOw[(511 - 511)] << "," << QYQMOc6[QGQY0XIdJn].TyRcKOw[1] << "," << QYQMOc6[QGQY0XIdJn].TyRcKOw[(271 - 269)] << ")-(" << QYQMOc6[QGQY0XIdJn].b[(480 - 480)] << "," << QYQMOc6[QGQY0XIdJn].b[1] << "," << QYQMOc6[QGQY0XIdJn].b[2] << ")=";
            cout << fixed << setprecision (2) << QYQMOc6[QGQY0XIdJn].distance << endl;
            QGQY0XIdJn++;
        };
    }
    return 0;
}

