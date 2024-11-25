int main () {
    char *BEJv1h;
    int dpramOW;
    int mLaRWmTz6Ik;
    int OZRLYAy;
    int K9xTtm;
    int lEgd40Rch6q;
    int count;
    char IQXm2SaYgxy [100001];
    scanf ("%d", &dpramOW);
    BEJv1h = IQXm2SaYgxy;
    for (mLaRWmTz6Ik = (780 - 780); mLaRWmTz6Ik < dpramOW; mLaRWmTz6Ik++) {
        scanf ("%s", IQXm2SaYgxy);
        lEgd40Rch6q = strlen (IQXm2SaYgxy);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (OZRLYAy = 0; lEgd40Rch6q > OZRLYAy; OZRLYAy++) {
            for (K9xTtm = OZRLYAy +1; lEgd40Rch6q > K9xTtm; K9xTtm++) {
                if (!('0' == *(BEJv1h +OZRLYAy))) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (*(BEJv1h +OZRLYAy) == *(BEJv1h +K9xTtm)) {
                        *(BEJv1h +K9xTtm) = '0';
                        count = 1;
                    };
                }
                if (count > 0 && K9xTtm == lEgd40Rch6q - 1) {
                    count = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    *(BEJv1h +OZRLYAy) = '0';
                };
            };
        }
        for (OZRLYAy = 0; OZRLYAy < lEgd40Rch6q; OZRLYAy++) {
            if (*(BEJv1h +OZRLYAy) != '0') {
                printf ("%c\n", *(BEJv1h +OZRLYAy));
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                break;
            }
            if (OZRLYAy == lEgd40Rch6q - 1) {
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
                };
            };
        };
    }
    return 0;
}

