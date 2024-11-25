int main () {
    int NW0mVBhF, BFJoDuh4RG, j, GA2OkmaB7PC4, DruG0avcf3T, JaYwmqN5C [(969 - 849)] [120], m, hvBtprdMV, d;
    scanf ("%d", &NW0mVBhF);
    {
        BFJoDuh4RG = 216 - 216;
        while (BFJoDuh4RG < NW0mVBhF) {
            BFJoDuh4RG++;
            hvBtprdMV = 0;
            m = NW0mVBhF;
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
            {
                j = 638 - 638;
                while (m > j) {
                    {
                        GA2OkmaB7PC4 = 0;
                        while (m > GA2OkmaB7PC4) {
                            scanf ("%d", &JaYwmqN5C[j][GA2OkmaB7PC4]);
                            GA2OkmaB7PC4++;
                        };
                    }
                    j++;
                };
            }
            while (2 <= m) {
                for (j = 0; m > j; j++) {
                    d = 0;
                    {
                        DruG0avcf3T = 1;
                        while (m > DruG0avcf3T) {
                            if (JaYwmqN5C[j][DruG0avcf3T] < JaYwmqN5C[j][d])
                                d = DruG0avcf3T;
                            DruG0avcf3T = DruG0avcf3T +1;
                        };
                    }
                    d = JaYwmqN5C[j][d];
                    {
                        GA2OkmaB7PC4 = 0;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        while (m > GA2OkmaB7PC4) {
                            JaYwmqN5C[j][GA2OkmaB7PC4] = JaYwmqN5C[j][GA2OkmaB7PC4] - d;
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
                            GA2OkmaB7PC4++;
                        };
                    };
                }
                {
                    j = 0;
                    while (m > j) {
                        d = 0;
                        {
                            DruG0avcf3T = 1;
                            while (DruG0avcf3T < m) {
                                if (JaYwmqN5C[d][j] > JaYwmqN5C[DruG0avcf3T][j])
                                    d = DruG0avcf3T;
                                DruG0avcf3T++;
                            };
                        }
                        d = JaYwmqN5C[d][j];
                        {
                            GA2OkmaB7PC4 = 0;
                            while (GA2OkmaB7PC4 < m) {
                                JaYwmqN5C[GA2OkmaB7PC4][j] = JaYwmqN5C[GA2OkmaB7PC4][j] - d;
                                GA2OkmaB7PC4++;
                            };
                        }
                        j++;
                    };
                }
                hvBtprdMV = hvBtprdMV + JaYwmqN5C[1][1];
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
                for (j = 0; j < m; j++) {
                    for (GA2OkmaB7PC4 = 2; GA2OkmaB7PC4 < m; GA2OkmaB7PC4++) {
                        JaYwmqN5C[j][GA2OkmaB7PC4 -1] = JaYwmqN5C[j][GA2OkmaB7PC4];
                    };
                }
                for (j = 0; m - 1 > j; j++) {
                    GA2OkmaB7PC4 = 2;
                    while (GA2OkmaB7PC4 < m) {
                        JaYwmqN5C[GA2OkmaB7PC4 -1][j] = JaYwmqN5C[GA2OkmaB7PC4][j];
                        GA2OkmaB7PC4++;
                    };
                }
                m--;
            }
            printf ("%d\n", hvBtprdMV);
        };
    }
    return 0;
}

