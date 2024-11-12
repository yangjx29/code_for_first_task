main () {
    int RDd3tKVB;
    int DfKrhjCA [100] [100];
    int hBfjYiJMIl [100] [100];
    int hTSzOVrX, QJUrZf;
    int RlHrZtMXdbnC [(184 - 84)] [100];
    int jzpMATYD, js6OnBYQEpq;
    int x2;
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
    int zrjvVTn;
    scanf ("%d%d", &jzpMATYD, &js6OnBYQEpq);
    {
        hTSzOVrX = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hTSzOVrX < jzpMATYD) {
            {
                QJUrZf = 0;
                while (QJUrZf < js6OnBYQEpq) {
                    scanf ("%d", &RlHrZtMXdbnC[hTSzOVrX][QJUrZf]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    QJUrZf = QJUrZf +1;
                };
            }
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
            hTSzOVrX = hTSzOVrX + 1;
        };
    }
    scanf ("%d%d", &x2, &zrjvVTn);
    {
        hTSzOVrX = 0;
        while (hTSzOVrX < x2) {
            {
                QJUrZf = 0;
                while (QJUrZf < zrjvVTn) {
                    scanf ("%d", &hBfjYiJMIl[hTSzOVrX][QJUrZf]);
                    QJUrZf = QJUrZf +1;
                };
            }
            hTSzOVrX = hTSzOVrX + 1;
        };
    }
    {
        hTSzOVrX = 0;
        while (hTSzOVrX < jzpMATYD) {
            {
                QJUrZf = 0;
                while (QJUrZf < zrjvVTn) {
                    for (RDd3tKVB = 0; RDd3tKVB < x2; RDd3tKVB = RDd3tKVB +1)
                        DfKrhjCA[hTSzOVrX][QJUrZf] += RlHrZtMXdbnC[hTSzOVrX][RDd3tKVB] * hBfjYiJMIl[RDd3tKVB][QJUrZf];
                    QJUrZf = QJUrZf +1;
                };
            }
            hTSzOVrX = hTSzOVrX + 1;
        };
    }
    {
        hTSzOVrX = 0;
        while (hTSzOVrX < jzpMATYD) {
            for (QJUrZf = 0; QJUrZf < zrjvVTn - 1; QJUrZf = QJUrZf +1)
                printf ("%d ", DfKrhjCA[hTSzOVrX][QJUrZf]);
            printf ("%d\n", DfKrhjCA[hTSzOVrX][QJUrZf]);
            hTSzOVrX = hTSzOVrX + 1;
        };
    };
}

