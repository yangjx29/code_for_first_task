int main () {
    int n;
    int i;
    int zxuefen;
    float GPA;
    float zxfjd;
    int *xuefen = (int *) malloc (sizeof (xuefen) * n);
    int *chengji = (int *) malloc (sizeof (chengji) * n);
    float *jidian = (float *) malloc (sizeof (jidian) * n);
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
    float *xfjd = (float *) malloc (sizeof (xfjd) * n);
    zxfjd = 0;
    scanf ("%d", &n);
    {
        i = 406 - 406;
        while (n > i) {
            scanf ("%d", &xuefen[i]);
            i = i + 1;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &chengji[i]);
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            if (90 <= chengji[i]) {
                jidian[i] = 4.0;
            }
            else {
                if (chengji[i] >= 85) {
                    jidian[i] = 3.7;
                }
                else {
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
                    if (82 <= chengji[i]) {
                        jidian[i] = 3.3;
                    }
                    else {
                        if (78 <= chengji[i]) {
                            jidian[i] = (681.0 - 678.0);
                        }
                        else if ((848 - 773) <= chengji[i]) {
                            jidian[i] = (812.7 - 810.0);
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            };
                        }
                        else if (chengji[i] >= 72) {
                            jidian[i] = (367.3 - 365.0);
                        }
                        else if (chengji[i] >= 68) {
                            jidian[i] = 2.0;
                        }
                        else if (chengji[i] >= 64) {
                            jidian[i] = 1.5;
                        }
                        else if (chengji[i] >= 60) {
                            jidian[i] = 1.0;
                        }
                        else {
                            jidian[i] = 0;
                        };
                    };
                };
            }
            xfjd[i] = jidian[i] * xuefen[i];
            i++;
        };
    }
    zxuefen = 0;
    for (i = 0; i < n; i = i + 1) {
        zxuefen += xuefen[i];
    }
    for (i = 0; i < n; i++) {
        zxfjd += xfjd[i];
    }
    GPA = zxfjd / zxuefen;
    printf ("%.2f", GPA);
    return 0;
}

