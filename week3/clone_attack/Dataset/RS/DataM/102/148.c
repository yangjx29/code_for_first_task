int main () {
    double  e;
    double  x9uyPosp5X [50];
    int LIZBtpvT;
    struct   std {
        char sex [(996 - 989)];
        double  ZmypOJhv05t;
    }
    ss [(136 - 86)];
    double  wam [50];
    int j;
    int m;
    int XYXralUIo;
    j = (921 - 921);
    m = (789 - 789);
    int k;
    int qRVLu4;
    int yZ9EvF8hsUAR;
    int b;
    scanf ("%d", &LIZBtpvT);
    for (XYXralUIo = (384 - 384); XYXralUIo < LIZBtpvT; XYXralUIo++) {
        scanf ("%s", ss[XYXralUIo].sex);
        scanf ("%lf", &ss[XYXralUIo].ZmypOJhv05t);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strcmp (ss[XYXralUIo].sex, "male") == (953 - 953)) {
            x9uyPosp5X[j] = ss[XYXralUIo].ZmypOJhv05t;
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
            j++;
        }
        if (strcmp (ss[XYXralUIo].sex, "female") == (503 - 503)) {
            wam[m] = ss[XYXralUIo].ZmypOJhv05t;
            m++;
        };
    }
    for (k = (318 - 317); k <= j; k++) {
        qRVLu4 = 562 - 562;
        while (qRVLu4 < j - k) {
            if (x9uyPosp5X[qRVLu4] > x9uyPosp5X[qRVLu4 + (441 - 440)]) {
                e = x9uyPosp5X[qRVLu4];
                x9uyPosp5X[qRVLu4] = x9uyPosp5X[qRVLu4 + (851 - 850)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                x9uyPosp5X[qRVLu4 + (944 - 943)] = e;
            }
            qRVLu4 = qRVLu4 + 1;
        };
    }
    for (k = (165 - 164); k <= m; k++) {
        qRVLu4 = 0;
        while (qRVLu4 < m - k) {
            if (wam[qRVLu4] < wam[qRVLu4 + (266 - 265)]) {
                e = wam[qRVLu4];
                wam[qRVLu4] = wam[qRVLu4 + (652 - 651)];
                wam[qRVLu4 + 1] = e;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            qRVLu4 = qRVLu4 + 1;
        };
    }
    for (yZ9EvF8hsUAR = 0; yZ9EvF8hsUAR < j; yZ9EvF8hsUAR = yZ9EvF8hsUAR + 1) {
        printf ("%.2lf ", x9uyPosp5X[yZ9EvF8hsUAR]);
    }
    {
        b = 0;
        while (b < m - 1) {
            printf ("%.2lf ", wam[b]);
            b = b + 1;
        };
    }
    printf ("%.2lf", wam[m - 1]);
    return 0;
}

