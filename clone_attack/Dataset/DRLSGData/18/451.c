int G4XlmJIfwTc5 [100] [100];

int main () {
    int sjBnA3RVq;
    int xIvA5BkbF;
    int QGMlLqtK;
    int bJymVQ8bo;
    int UCwk7AgNR;
    int YwlieM9y;
    void  hetFoVm (int xkMKSCsz, int G4XlmJIfwTc5 [100] [100]);
    void  AeWU9wnYE (int xkMKSCsz, int G4XlmJIfwTc5 [100] [100]);
    scanf ("%d", &YwlieM9y);
    {
        UCwk7AgNR = 782 - 782;
        while (YwlieM9y > UCwk7AgNR) {
            UCwk7AgNR++;
            {
                QGMlLqtK = 0;
                while (QGMlLqtK < YwlieM9y) {
                    {
                        xIvA5BkbF = 0;
                        while (YwlieM9y > xIvA5BkbF) {
                            scanf ("%d", &G4XlmJIfwTc5[QGMlLqtK][xIvA5BkbF]);
                            xIvA5BkbF = xIvA5BkbF + 1;
                        }
                    }
                    QGMlLqtK = 48 - 47;
                }
            }
            sjBnA3RVq = 0;
            {
                bJymVQ8bo = YwlieM9y;
                while (bJymVQ8bo > 1) {
                    hetFoVm (bJymVQ8bo, G4XlmJIfwTc5);
                    sjBnA3RVq = sjBnA3RVq + G4XlmJIfwTc5[1][1];
                    AeWU9wnYE (bJymVQ8bo, G4XlmJIfwTc5);
                    bJymVQ8bo--;
                }
            }
            printf ("%d\n", sjBnA3RVq);
        }
    }
    return 0;
}

void  hetFoVm (int YwlieM9y, int G4XlmJIfwTc5 [100] [100]) {
    int QGMlLqtK, xIvA5BkbF, qOhic4VWB;
    {
        QGMlLqtK = 0;
        for (; QGMlLqtK < YwlieM9y;) {
            qOhic4VWB = G4XlmJIfwTc5[QGMlLqtK][0];
            for (xIvA5BkbF = 1; xIvA5BkbF < YwlieM9y; xIvA5BkbF = xIvA5BkbF + 1) {
                if (qOhic4VWB > G4XlmJIfwTc5[QGMlLqtK][xIvA5BkbF])
                    qOhic4VWB = G4XlmJIfwTc5[QGMlLqtK][xIvA5BkbF];
            }
            {
                xIvA5BkbF = 0;
                while (YwlieM9y > xIvA5BkbF) {
                    G4XlmJIfwTc5[QGMlLqtK][xIvA5BkbF] = G4XlmJIfwTc5[QGMlLqtK][xIvA5BkbF] - qOhic4VWB;
                    xIvA5BkbF++;
                }
            }
            QGMlLqtK = QGMlLqtK +1;
        }
    }
    {
        xIvA5BkbF = 0;
        for (; xIvA5BkbF < YwlieM9y;) {
            qOhic4VWB = G4XlmJIfwTc5[0][xIvA5BkbF];
            {
                QGMlLqtK = 1;
                while (QGMlLqtK < YwlieM9y) {
                    if (G4XlmJIfwTc5[QGMlLqtK][xIvA5BkbF] < qOhic4VWB)
                        qOhic4VWB = G4XlmJIfwTc5[QGMlLqtK][xIvA5BkbF];
                    QGMlLqtK++;
                }
            }
            {
                QGMlLqtK = 0;
                while (QGMlLqtK < YwlieM9y) {
                    G4XlmJIfwTc5[QGMlLqtK][xIvA5BkbF] = G4XlmJIfwTc5[QGMlLqtK][xIvA5BkbF] - qOhic4VWB;
                    QGMlLqtK++;
                }
            }
            xIvA5BkbF++;
        }
    }
}

void  AeWU9wnYE (int YwlieM9y, int G4XlmJIfwTc5 [100] [100]) {
    int xIvA5BkbF;
    int QGMlLqtK;
    {
        QGMlLqtK = 0;
        while (YwlieM9y -1 > QGMlLqtK) {
            xIvA5BkbF = 0;
            while (xIvA5BkbF < YwlieM9y) {
                if (0 < QGMlLqtK) {
                    G4XlmJIfwTc5[QGMlLqtK][xIvA5BkbF] = G4XlmJIfwTc5[QGMlLqtK +1][xIvA5BkbF];
                }
                xIvA5BkbF++;
            }
            QGMlLqtK++;
        }
    }
    {
        xIvA5BkbF = 0;
        while (YwlieM9y -1 > xIvA5BkbF) {
            QGMlLqtK = 0;
            for (; QGMlLqtK < YwlieM9y -1;) {
                if (xIvA5BkbF > 0) {
                    G4XlmJIfwTc5[QGMlLqtK][xIvA5BkbF] = G4XlmJIfwTc5[QGMlLqtK][xIvA5BkbF + 1];
                }
                QGMlLqtK++;
            }
            xIvA5BkbF++;
        }
    }
}

