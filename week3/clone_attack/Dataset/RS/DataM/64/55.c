int main () {
    int rKXOHU;
    int QijaR5VsD4Xh;
    int t15lOKcN2fG;
    int jdkwNB7Xa [(270 - 259)];
    int KbTaUsEZIMn [(493 - 482)];
    int TEahloDN [11];
    int hweRS0k4jo7;
    int j;
    int wKTXu1iZj5v;
    int Tc3Prv0AQZ;
    rKXOHU = (988 - 988);
    QijaR5VsD4Xh = 1;
    double  XzIYJl [90] [90];
    scanf ("%d", &t15lOKcN2fG);
    {
        hweRS0k4jo7 = 438 - 438;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hweRS0k4jo7 < t15lOKcN2fG) {
            scanf ("%d%d%d", &jdkwNB7Xa[hweRS0k4jo7], &KbTaUsEZIMn[hweRS0k4jo7], &TEahloDN[hweRS0k4jo7]);
            hweRS0k4jo7++;
        };
    }
    {
        hweRS0k4jo7 = 739 - 739;
        while (hweRS0k4jo7 < t15lOKcN2fG - 1) {
            for (j = hweRS0k4jo7 + 1; j < t15lOKcN2fG; j = j + 1) {
                wKTXu1iZj5v = (jdkwNB7Xa[hweRS0k4jo7] - jdkwNB7Xa[j]) * (jdkwNB7Xa[hweRS0k4jo7] - jdkwNB7Xa[j]) + (KbTaUsEZIMn[hweRS0k4jo7] - KbTaUsEZIMn[j]) * (KbTaUsEZIMn[hweRS0k4jo7] - KbTaUsEZIMn[j]) + (TEahloDN[hweRS0k4jo7] - TEahloDN[j]) * (TEahloDN[hweRS0k4jo7] - TEahloDN[j]);
                XzIYJl[hweRS0k4jo7][j] = sqrt (1.0 * wKTXu1iZj5v);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            hweRS0k4jo7++;
        };
    }
    for (Tc3Prv0AQZ = (376 - 376); Tc3Prv0AQZ < t15lOKcN2fG * (t15lOKcN2fG - 1) / 2; Tc3Prv0AQZ++) {
        for (hweRS0k4jo7 = 0; hweRS0k4jo7 < t15lOKcN2fG - 1; hweRS0k4jo7 = hweRS0k4jo7 + 1) {
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
            for (j = hweRS0k4jo7 + 1; j < t15lOKcN2fG; j = j + 1) {
                if (XzIYJl[hweRS0k4jo7][j] > XzIYJl[rKXOHU][QijaR5VsD4Xh]) {
                    rKXOHU = hweRS0k4jo7;
                    QijaR5VsD4Xh = j;
                };
            };
        }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", jdkwNB7Xa[rKXOHU], KbTaUsEZIMn[rKXOHU], TEahloDN[rKXOHU], jdkwNB7Xa[QijaR5VsD4Xh], KbTaUsEZIMn[QijaR5VsD4Xh], TEahloDN[QijaR5VsD4Xh], XzIYJl[rKXOHU][QijaR5VsD4Xh]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        XzIYJl[rKXOHU][QijaR5VsD4Xh] = 0;
    }
    return 0;
}

