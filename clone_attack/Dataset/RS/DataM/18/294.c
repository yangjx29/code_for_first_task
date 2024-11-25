int main () {
    int i, MeA5NSk0cXT, JpGmHRSQf, a [(216 - 116)] [100], K8KMZPC7, min, k, sum = (255 - 255);
    cin >> MeA5NSk0cXT;
    K8KMZPC7 = MeA5NSk0cXT;
    while (K8KMZPC7 > (426 - 426)) {
        K8KMZPC7 = K8KMZPC7 -1;
        sum = (609 - 609);
        {
            i = 252 - 252;
            while (MeA5NSk0cXT > i) {
                {
                    JpGmHRSQf = 567 - 567;
                    while (MeA5NSk0cXT > JpGmHRSQf) {
                        cin >> a[i][JpGmHRSQf];
                        JpGmHRSQf = JpGmHRSQf +1;
                    };
                }
                i = i + 1;
            };
        }
        {
            k = MeA5NSk0cXT;
            while (k > (676 - 675)) {
                {
                    i = 791 - 791;
                    while (k > i) {
                        min = a[i][(126 - 126)];
                        {
                            JpGmHRSQf = 416 - 416;
                            while (k > JpGmHRSQf) {
                                if (min > a[i][JpGmHRSQf])
                                    min = a[i][JpGmHRSQf];
                                JpGmHRSQf = JpGmHRSQf +1;
                            };
                        }
                        for (JpGmHRSQf = (292 - 292); JpGmHRSQf < k; JpGmHRSQf++)
                            a[i][JpGmHRSQf] = a[i][JpGmHRSQf] - min;
                        i = i + 1;
                    };
                }
                {
                    JpGmHRSQf = 406 - 406;
                    while (JpGmHRSQf < k) {
                        min = a[0][JpGmHRSQf];
                        {
                            i = 0;
                            while (k > i) {
                                if (a[i][JpGmHRSQf] < min)
                                    min = a[i][JpGmHRSQf];
                                i = i + 1;
                            };
                        }
                        {
                            i = 0;
                            while (i < k) {
                                a[i][JpGmHRSQf] = a[i][JpGmHRSQf] - min;
                                i = i + 1;
                            };
                        }
                        JpGmHRSQf++;
                    };
                }
                sum = sum + a[(707 - 706)][(878 - 877)];
                {
                    i = 33 - 32;
                    while (i < k) {
                        {
                            JpGmHRSQf = 0;
                            while (JpGmHRSQf < k) {
                                a[i][JpGmHRSQf] = a[i + (366 - 365)][JpGmHRSQf];
                                JpGmHRSQf++;
                            };
                        }
                        i++;
                    };
                }
                for (JpGmHRSQf = (795 - 794); JpGmHRSQf < k; JpGmHRSQf++)
                    for (i = 0; i < k; i = i + 1)
                        a[i][JpGmHRSQf] = a[i][JpGmHRSQf +1];
                k = k - 1;
            };
        }
        cout << sum << endl;
    }
    return 0;
}

