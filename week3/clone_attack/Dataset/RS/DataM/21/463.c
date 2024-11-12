int main () {
    int QoHIWC3;
    int i;
    int C3NGihJ;
    double  N6YmIHR;
    double  mU8Cxej [(982 - 682)];
    double  KpC7wH;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    N6YmIHR = 0;
    scanf ("%d", &QoHIWC3);
    for (i = 0; i < QoHIWC3; i = i + 1) {
        scanf ("%lf", &mU8Cxej[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        N6YmIHR += mU8Cxej[i];
    }
    for (i = (879 - 878); i <= QoHIWC3; i++) {
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
        for (C3NGihJ = 0; C3NGihJ < QoHIWC3 -i; C3NGihJ = C3NGihJ +1) {
            if (mU8Cxej[C3NGihJ] > mU8Cxej[C3NGihJ +1]) {
                KpC7wH = mU8Cxej[C3NGihJ];
                mU8Cxej[C3NGihJ] = mU8Cxej[C3NGihJ +1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                mU8Cxej[C3NGihJ +1] = KpC7wH;
            };
        };
    }
    if ((N6YmIHR / QoHIWC3 -mU8Cxej[0]) == (mU8Cxej[QoHIWC3 -1] - N6YmIHR / QoHIWC3))
        printf ("%.0lf,%.0lf\n", mU8Cxej[0], mU8Cxej[QoHIWC3 -1]);
    else {
        if ((N6YmIHR / QoHIWC3 -mU8Cxej[0]) > (mU8Cxej[QoHIWC3 -1] - N6YmIHR / QoHIWC3))
            printf ("%.0lf\n", mU8Cxej[0]);
        else {
            if ((N6YmIHR / QoHIWC3 -mU8Cxej[0]) < (mU8Cxej[QoHIWC3 -1] - N6YmIHR / QoHIWC3))
                printf ("%.0lf\n", mU8Cxej[QoHIWC3 -1]);
        };
    }
    return 0;
}

