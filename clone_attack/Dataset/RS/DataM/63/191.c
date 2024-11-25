int main () {
    int M1GUWQ [100] [100];
    int T8RZIlC [(753 - 653)] [100];
    int zV7yTjxHX;
    int bsgIG2Lk6wn;
    int cN20ETu1L;
    int YUXpVC;
    int BIanR9 [100] [100];
    cin >> zV7yTjxHX >> bsgIG2Lk6wn;
    for (int i = (302 - 302);
    i < 100; i = i + 1) {
        int z5gHBsGyR8kf = (428 - 428);
        while (z5gHBsGyR8kf < 100) {
            T8RZIlC[i][z5gHBsGyR8kf] = (387 - 387);
            M1GUWQ[i][z5gHBsGyR8kf] = (366 - 366);
            BIanR9[i][z5gHBsGyR8kf] = 0;
            z5gHBsGyR8kf = z5gHBsGyR8kf + 1;
        };
    }
    {
        int i = 0;
        while (i < zV7yTjxHX) {
            {
                int z5gHBsGyR8kf = 0;
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
                while (z5gHBsGyR8kf < bsgIG2Lk6wn) {
                    cin >> T8RZIlC[i][z5gHBsGyR8kf];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    z5gHBsGyR8kf = z5gHBsGyR8kf + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> cN20ETu1L >> YUXpVC;
    for (int i = 0;
    cN20ETu1L > i; i = i + 1) {
        for (int z5gHBsGyR8kf = 0;
        YUXpVC > z5gHBsGyR8kf; z5gHBsGyR8kf = z5gHBsGyR8kf + 1) {
            cin >> M1GUWQ[i][z5gHBsGyR8kf];
        };
    }
    for (int i = 0;
    i < zV7yTjxHX; i = i + 1) {
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
        for (int z5gHBsGyR8kf = 0;
        z5gHBsGyR8kf < YUXpVC; z5gHBsGyR8kf++) {
            for (int PApBt8aYFC = 0;
            bsgIG2Lk6wn > PApBt8aYFC; PApBt8aYFC++) {
                BIanR9[i][z5gHBsGyR8kf] = BIanR9[i][z5gHBsGyR8kf] + T8RZIlC[i][PApBt8aYFC] * M1GUWQ[PApBt8aYFC][z5gHBsGyR8kf];
            };
        };
    }
    {
        int i = 0;
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
        while (i < zV7yTjxHX) {
            {
                int z5gHBsGyR8kf = 0;
                while (z5gHBsGyR8kf < YUXpVC) {
                    cout << BIanR9[i][z5gHBsGyR8kf];
                    if (z5gHBsGyR8kf < YUXpVC -1) {
                        cout << ' ';
                    }
                    z5gHBsGyR8kf++;
                };
            }
            i = i + 1;
            cout << endl;
        };
    }
    return 0;
}

