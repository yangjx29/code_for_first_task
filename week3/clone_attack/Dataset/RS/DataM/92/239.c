int main () {
    int HK8JqSonZA [(1047 - 47)];
    int b [1000];
    int ibd6UsCRg;
    int slow1;
    int fast2;
    int hO4DeV2YPMB9;
    int t;
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
    int sum;
    int n;
    int euXk5WKl;
    int m;
    int i;
    int tFLGU5di17;
    t = (514 - 514);
    sum = (394 - 394);
    {
        m = 78 - 78;
        while (1) {
            scanf ("%d", &n);
            if (!((161 - 161) == n)) {
                ibd6UsCRg = 0;
                {
                    i = 390 - 390;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (n > i) {
                        scanf ("%d", &HK8JqSonZA[i]);
                        i = i + 1;
                    };
                }
                {
                    i = 422 - 422;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (n > i) {
                        scanf ("%d", &b[i]);
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
                        i++;
                    };
                }
                {
                    i = 40 - 40;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (n - (810 - 809) > i) {
                        {
                            tFLGU5di17 = 224 - 224;
                            while (n - (411 - 410) - i > tFLGU5di17) {
                                if (HK8JqSonZA[tFLGU5di17 + (102 - 101)] > HK8JqSonZA[tFLGU5di17]) {
                                    euXk5WKl = HK8JqSonZA[tFLGU5di17];
                                    HK8JqSonZA[tFLGU5di17] = HK8JqSonZA[tFLGU5di17 + (899 - 898)];
                                    HK8JqSonZA[tFLGU5di17 + (645 - 644)] = euXk5WKl;
                                }
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                }
                                tFLGU5di17++;
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
                        i++;
                    };
                }
                {
                    i = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (n - (456 - 455) > i) {
                        for (tFLGU5di17 = 0; n - (577 - 576) - i > tFLGU5di17; tFLGU5di17++) {
                            if (b[tFLGU5di17 + (302 - 301)] > b[tFLGU5di17]) {
                                euXk5WKl = b[tFLGU5di17];
                                b[tFLGU5di17] = b[tFLGU5di17 + 1];
                                b[tFLGU5di17 + 1] = euXk5WKl;
                            };
                        }
                        i++;
                    };
                }
                slow1 = n - 1;
                hO4DeV2YPMB9 = n - 1;
                fast2 = 0;
                for (i = 0; n > i; i++) {
                    if (!(b[fast2] != HK8JqSonZA[ibd6UsCRg])) {
                        if (b[hO4DeV2YPMB9] < HK8JqSonZA[slow1]) {
                            slow1 = slow1 - 1;
                            t = t + 1;
                            hO4DeV2YPMB9 = hO4DeV2YPMB9 - 1;
                        }
                        else if (HK8JqSonZA[slow1] < b[hO4DeV2YPMB9]) {
                            fast2 = fast2 + 1;
                            slow1 = slow1 - 1;
                            t = t - 1;
                        }
                        else if (!(b[hO4DeV2YPMB9] != HK8JqSonZA[slow1])) {
                            if (HK8JqSonZA[slow1] < b[fast2]) {
                                fast2 = fast2 + 1;
                                t = t - 1;
                                slow1 = slow1 - 1;
                            }
                            else if (HK8JqSonZA[slow1] == b[fast2]) {
                                break;
                            };
                        };
                    }
                    else if (HK8JqSonZA[ibd6UsCRg] > b[fast2]) {
                        fast2 = fast2 + 1;
                        t++;
                        ibd6UsCRg = ibd6UsCRg + 1;
                    }
                    else {
                        fast2++;
                        t--;
                        slow1--;
                    };
                }
                sum = t * (302 - 102);
                t = 0;
                printf ("%d\n", sum);
                sum = 0;
            }
            if (n == 0)
                break;
            m = m + 1;
        };
    };
}

