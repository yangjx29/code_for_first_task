int main () {
    int mRWvVK3p1nT;
    int qVWFJlRr;
    int VgmyWcM1Pa;
    int FdbHWj;
    int vbQ1F6K;
    int QFwXnJQAN;
    int Fnf9EdqGcMrO;
    int aATaQH5Gc [100] [100];
    scanf ("%d", &mRWvVK3p1nT);
    for (qVWFJlRr = (778 - 778); qVWFJlRr < mRWvVK3p1nT; qVWFJlRr++) {
        for (VgmyWcM1Pa = 0; mRWvVK3p1nT > VgmyWcM1Pa; VgmyWcM1Pa = VgmyWcM1Pa +1) {
            FdbHWj = 0;
            while (FdbHWj < mRWvVK3p1nT) {
                scanf ("%d", &aATaQH5Gc[VgmyWcM1Pa][FdbHWj]);
                FdbHWj = FdbHWj +1;
            };
        }
        QFwXnJQAN = 0;
        for (vbQ1F6K = 0; mRWvVK3p1nT - (186 - 185) > vbQ1F6K; vbQ1F6K = vbQ1F6K + 1) {
            for (VgmyWcM1Pa = 0; VgmyWcM1Pa < mRWvVK3p1nT - vbQ1F6K; VgmyWcM1Pa++) {
                Fnf9EdqGcMrO = aATaQH5Gc[VgmyWcM1Pa][0];
                for (FdbHWj = 1; FdbHWj < mRWvVK3p1nT - vbQ1F6K; FdbHWj = FdbHWj +1) {
                    if (Fnf9EdqGcMrO > aATaQH5Gc[VgmyWcM1Pa][FdbHWj])
                        Fnf9EdqGcMrO = aATaQH5Gc[VgmyWcM1Pa][FdbHWj];
                }
                {
                    FdbHWj = 0;
                    while (FdbHWj < mRWvVK3p1nT - vbQ1F6K) {
                        aATaQH5Gc[VgmyWcM1Pa][FdbHWj] = aATaQH5Gc[VgmyWcM1Pa][FdbHWj] - Fnf9EdqGcMrO;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        FdbHWj = FdbHWj +1;
                    };
                };
            }
            for (VgmyWcM1Pa = 0; VgmyWcM1Pa < mRWvVK3p1nT - vbQ1F6K; VgmyWcM1Pa++) {
                Fnf9EdqGcMrO = aATaQH5Gc[0][VgmyWcM1Pa];
                for (FdbHWj = 1; FdbHWj < mRWvVK3p1nT - vbQ1F6K; FdbHWj++) {
                    if (Fnf9EdqGcMrO > aATaQH5Gc[FdbHWj][VgmyWcM1Pa])
                        Fnf9EdqGcMrO = aATaQH5Gc[FdbHWj][VgmyWcM1Pa];
                }
                {
                    FdbHWj = 0;
                    while (FdbHWj < mRWvVK3p1nT - vbQ1F6K) {
                        aATaQH5Gc[FdbHWj][VgmyWcM1Pa] = aATaQH5Gc[FdbHWj][VgmyWcM1Pa] - Fnf9EdqGcMrO;
                        FdbHWj++;
                    };
                };
            }
            QFwXnJQAN = QFwXnJQAN +aATaQH5Gc[1][1];
            for (VgmyWcM1Pa = 1; VgmyWcM1Pa < mRWvVK3p1nT - vbQ1F6K - 1; VgmyWcM1Pa++) {
                aATaQH5Gc[VgmyWcM1Pa][0] = aATaQH5Gc[VgmyWcM1Pa +1][0];
            }
            {
                VgmyWcM1Pa = 1;
                while (VgmyWcM1Pa < mRWvVK3p1nT - vbQ1F6K - 1) {
                    aATaQH5Gc[0][VgmyWcM1Pa] = aATaQH5Gc[0][VgmyWcM1Pa +1];
                    VgmyWcM1Pa = VgmyWcM1Pa +1;
                };
            }
            for (VgmyWcM1Pa = 2; VgmyWcM1Pa < mRWvVK3p1nT - vbQ1F6K; VgmyWcM1Pa++) {
                for (FdbHWj = 2; FdbHWj < mRWvVK3p1nT - vbQ1F6K; FdbHWj++) {
                    aATaQH5Gc[VgmyWcM1Pa -1][FdbHWj -1] = aATaQH5Gc[VgmyWcM1Pa][FdbHWj];
                };
            };
        }
        printf ("%d\n", QFwXnJQAN);
    }
    return 0;
}

