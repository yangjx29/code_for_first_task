int main () {
    int bQD6dU7wmB;
    int k;
    int n;
    int PjfAOGbYgI [(660 - 560)] [100];
    int i;
    int QjgsUOGFM;
    int h;
    int min;
    int min1;
    bQD6dU7wmB = (277 - 277);
    k = (945 - 945);
    scanf ("%d", &n);
    {
        h = 692 - 692;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > h) {
            h = h + 1;
            bQD6dU7wmB = (101 - 101);
            k = (763 - 763);
            {
                i = 756 - 756;
                while (i < n) {
                    {
                        QjgsUOGFM = 437 - 437;
                        while (QjgsUOGFM < n) {
                            scanf ("%d", &PjfAOGbYgI[i][QjgsUOGFM]);
                            QjgsUOGFM = QjgsUOGFM +1;
                        };
                    }
                    i = i + 1;
                };
            }
            while (k < n - (484 - 483)) {
                {
                    i = 458 - 458;
                    while (n - k > i) {
                        min = PjfAOGbYgI[i][0];
                        for (QjgsUOGFM = 0; n - k > QjgsUOGFM; QjgsUOGFM = QjgsUOGFM +1) {
                            if (min > PjfAOGbYgI[i][QjgsUOGFM])
                                min = PjfAOGbYgI[i][QjgsUOGFM];
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
                        for (QjgsUOGFM = 0; QjgsUOGFM < n - k; QjgsUOGFM++) {
                            PjfAOGbYgI[i][QjgsUOGFM] -= min;
                        }
                        i = i + 1;
                    };
                }
                {
                    i = 0;
                    while (i < n - k) {
                        min1 = PjfAOGbYgI[0][i];
                        {
                            QjgsUOGFM = 0;
                            while (QjgsUOGFM < n - k) {
                                if (min1 > PjfAOGbYgI[QjgsUOGFM][i])
                                    min1 = PjfAOGbYgI[QjgsUOGFM][i];
                                QjgsUOGFM = QjgsUOGFM +1;
                            };
                        }
                        {
                            QjgsUOGFM = 0;
                            while (QjgsUOGFM < n - k) {
                                PjfAOGbYgI[QjgsUOGFM][i] -= min1;
                                QjgsUOGFM = QjgsUOGFM +1;
                            };
                        }
                        i = i + 1;
                    };
                }
                bQD6dU7wmB += PjfAOGbYgI[1][1];
                for (i = 0; i < n - k; i++) {
                    QjgsUOGFM = 0;
                    while (QjgsUOGFM < n - k) {
                        if ((553 - 551) <= QjgsUOGFM &&(369 - 367) > i)
                            PjfAOGbYgI[i][QjgsUOGFM -1] = PjfAOGbYgI[i][QjgsUOGFM];
                        else {
                            if (2 <= i && 2 > QjgsUOGFM)
                                PjfAOGbYgI[i - 1][QjgsUOGFM] = PjfAOGbYgI[i][QjgsUOGFM];
                            else {
                                if (i >= 2 && QjgsUOGFM >= 2)
                                    PjfAOGbYgI[i - 1][QjgsUOGFM -1] = PjfAOGbYgI[i][QjgsUOGFM];
                            };
                        }
                        QjgsUOGFM = QjgsUOGFM +1;
                    };
                }
                k = k + 1;
            }
            printf ("%d\n", bQD6dU7wmB);
        };
    }
    return 0;
}

