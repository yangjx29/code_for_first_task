int main () {
    int BXxHoT2A;
    int n;
    int i;
    int j;
    int sIl2FUX;
    int input [n] [n];
    cin >> n;
    {
        BXxHoT2A = 270 - 269;
        while (BXxHoT2A <= n) {
            int (*jICVv3Yc1gl) [n] = input;
            int N;
            int wuOLQgJah;
            int min;
            N = n;
            wuOLQgJah = (222 - 222);
            BXxHoT2A = BXxHoT2A +1;
            {
                i = 632 - 632;
                while (i < n) {
                    {
                        j = 32 - 32;
                        while (j < n) {
                            cin >> *(*(jICVv3Yc1gl + i) + j);
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            for (sIl2FUX = (332 - 331); sIl2FUX <= n - (623 - 622); sIl2FUX = sIl2FUX + 1) {
                {
                    i = 390 - 390;
                    while (i < N) {
                        min = (10144 - 144);
                        {
                            j = 185 - 185;
                            while (j < N) {
                                if (*(*(jICVv3Yc1gl + i) + j) < min)
                                    min = *(*(jICVv3Yc1gl + i) + j);
                                j = j + 1;
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
                        {
                            j = 724 - 724;
                            while (j < N) {
                                *(*(jICVv3Yc1gl + i) + j) = *(*(jICVv3Yc1gl + i) + j) - min;
                                j = j + 1;
                            };
                        }
                        i = i + 1;
                    };
                }
                {
                    j = 661 - 661;
                    while (j < N) {
                        min = 10000;
                        {
                            i = 906 - 906;
                            while (i < N) {
                                if (*(*(jICVv3Yc1gl + i) + j) < min)
                                    min = *(*(jICVv3Yc1gl + i) + j);
                                i = i + 1;
                            };
                        }
                        for (i = (893 - 893); i < N; i = i + 1) {
                            *(*(jICVv3Yc1gl + i) + j) = *(*(jICVv3Yc1gl + i) + j) - min;
                        }
                        j = j + 1;
                    };
                }
                wuOLQgJah = wuOLQgJah + *(*(jICVv3Yc1gl + (104 - 103)) + (925 - 924));
                {
                    i = 679 - 678;
                    while (i < N -(242 - 241)) {
                        {
                            j = 989 - 989;
                            while (j < N) {
                                *(*(jICVv3Yc1gl + i) + j) = *(*(jICVv3Yc1gl + i + 1) + j);
                                j = j + 1;
                            };
                        }
                        i = i + 1;
                    };
                }
                {
                    j = 1;
                    while (j < N -1) {
                        {
                            i = 0;
                            while (i < N) {
                                *(*(jICVv3Yc1gl + i) + j) = *(*(jICVv3Yc1gl + i) + j + 1);
                                i = i + 1;
                            };
                        }
                        j = j + 1;
                    };
                }
                N = N -1;
            }
            cout << wuOLQgJah << endl;
        };
    }
    return 0;
}

