main () {
    int head;
    int Q4sWM3;
    int tailt;
    int GC4wh5y6vQN;
    int j;
    int m;
    int n;
    int MgWIzF3xyfoB;
    int sum;
    int vEynG60tsP [1000];
    int tian [1000];
    for (;;) {
        sum = (719 - 719);
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (GC4wh5y6vQN = 0; n > GC4wh5y6vQN; GC4wh5y6vQN = GC4wh5y6vQN +1)
            scanf ("%d", &tian[GC4wh5y6vQN]);
        for (GC4wh5y6vQN = 0; GC4wh5y6vQN < n; GC4wh5y6vQN = GC4wh5y6vQN +1)
            scanf ("%d", &vEynG60tsP[GC4wh5y6vQN]);
        for (GC4wh5y6vQN = 0; GC4wh5y6vQN < n - (172 - 171); GC4wh5y6vQN++)
            for (j = GC4wh5y6vQN +(269 - 268); n > j; j = j + 1) {
                if (tian[j] > tian[GC4wh5y6vQN]) {
                    MgWIzF3xyfoB = tian[j];
                    tian[j] = tian[GC4wh5y6vQN];
                    tian[GC4wh5y6vQN] = MgWIzF3xyfoB;
                }
                if (vEynG60tsP[j] > vEynG60tsP[GC4wh5y6vQN]) {
                    MgWIzF3xyfoB = vEynG60tsP[j];
                    vEynG60tsP[j] = vEynG60tsP[GC4wh5y6vQN];
                    vEynG60tsP[GC4wh5y6vQN] = MgWIzF3xyfoB;
                };
            }
        Q4sWM3 = n - 1;
        tailt = n - 1;
        head = 0;
        for (GC4wh5y6vQN = 0; GC4wh5y6vQN < n; GC4wh5y6vQN++) {
            if (tian[head] > vEynG60tsP[GC4wh5y6vQN]) {
                head++;
                sum = sum + 1;
            }
            else {
                if (tian[head] < vEynG60tsP[GC4wh5y6vQN]) {
                    sum = sum - 1;
                    tailt = tailt - 1;
                }
                else {
                    if (tian[head] == vEynG60tsP[GC4wh5y6vQN]) {
                        for (j = tailt, m = Q4sWM3; j >= head; j = j - 1, m = m - 1) {
                            if (tian[j] > vEynG60tsP[m]) {
                                sum = sum + 1;
                                tailt--;
                                Q4sWM3 = Q4sWM3 -1;
                            }
                            else {
                                Q4sWM3 = m;
                                tailt--;
                                if (tian[j] < vEynG60tsP[GC4wh5y6vQN])
                                    sum = sum - 1;
                                break;
                            };
                        };
                    };
                };
            }
            if (head > tailt)
                break;
        }
        printf ("%d\n", sum * 200);
    };
}

