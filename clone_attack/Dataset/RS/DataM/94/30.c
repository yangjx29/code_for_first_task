int main () {
    int RTakb2exGFl;
    int vt5TpgM;
    int TySYxkNlH1;
    int DE7JRBn8;
    int RXykUPgdGWSC;
    int qnVw0ZGD;
    int skQxAC2bMLDR;
    int iZ0nxovt [500];
    int QxdWChpb81RB [500];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    RTakb2exGFl = (511 - 510);
    vt5TpgM = (361 - 360);
    TySYxkNlH1 = 0;
    scanf ("%d", &skQxAC2bMLDR);
    {
        DE7JRBn8 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (skQxAC2bMLDR >= DE7JRBn8) {
            scanf ("%d", &iZ0nxovt[DE7JRBn8]);
            if (!(1 != iZ0nxovt[DE7JRBn8] % 2)) {
                QxdWChpb81RB[vt5TpgM] = iZ0nxovt[DE7JRBn8];
                vt5TpgM = vt5TpgM + 1;
            }
            DE7JRBn8 = DE7JRBn8 +1;
        };
    }
    {
        RXykUPgdGWSC = 1;
        while (vt5TpgM > RXykUPgdGWSC) {
            for (qnVw0ZGD = 1; vt5TpgM - RXykUPgdGWSC > qnVw0ZGD; qnVw0ZGD = qnVw0ZGD + 1) {
                if (QxdWChpb81RB[qnVw0ZGD] > QxdWChpb81RB[qnVw0ZGD + 1]) {
                    TySYxkNlH1 = QxdWChpb81RB[qnVw0ZGD];
                    QxdWChpb81RB[qnVw0ZGD] = QxdWChpb81RB[qnVw0ZGD + 1];
                    QxdWChpb81RB[qnVw0ZGD + 1] = TySYxkNlH1;
                };
            }
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
            RXykUPgdGWSC = RXykUPgdGWSC +1;
        };
    }
    printf ("%d", QxdWChpb81RB[1]);
    {
        RTakb2exGFl = 2;
        while (RTakb2exGFl < vt5TpgM) {
            printf (",%d", QxdWChpb81RB[RTakb2exGFl]);
            RTakb2exGFl = RTakb2exGFl +1;
        };
    }
    return 0;
}

