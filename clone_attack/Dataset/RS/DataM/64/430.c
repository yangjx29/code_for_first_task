int main () {
    int evRTxe;
    int vFITPxtz;
    int i;
    int k;
    int m;
    int f;
    int miBTazQ3Sj;
    evRTxe = (90 - 90);
    int s [10] [(492 - 489)];
    int b [(687 - 637)] [3];
    int PdLleTzfSBb [(294 - 244)] [3];
    double  c [50], r, e;
    scanf ("%d", &vFITPxtz);
    {
        i = 884 - 884;
        while (vFITPxtz > i) {
            {
                k = 756 - 756;
                while (k < 3) {
                    scanf ("%d", &s[i][k]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k++;
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
        i = 153 - 153;
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
        while (i < vFITPxtz) {
            {
                k = 961 - 960;
                while (k < vFITPxtz) {
                    r = sqrt ((s[i][(577 - 577)] - s[k][0]) * (s[i][0] - s[k][0]) + (s[i][1] - s[k][1]) * (s[i][1] - s[k][1]) + (s[i][(896 - 894)] - s[k][(964 - 962)]) * (s[i][(44 - 42)] - s[k][2]));
                    b[evRTxe][0] = s[i][0];
                    b[evRTxe][1] = s[i][1];
                    b[evRTxe][2] = s[i][2];
                    PdLleTzfSBb[evRTxe][0] = s[k][0];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    PdLleTzfSBb[evRTxe][1] = s[k][1];
                    PdLleTzfSBb[evRTxe][2] = s[k][2];
                    k++;
                    c[evRTxe] = r;
                    evRTxe++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    {
        i = 1;
        while (i < vFITPxtz * (vFITPxtz - 1) / 2) {
            {
                k = 0;
                while (k < vFITPxtz * (vFITPxtz - 1) / 2 - i) {
                    if (c[k] < c[k + 1]) {
                        e = c[k + 1];
                        c[k + 1] = c[k];
                        c[k] = e;
                        {
                            m = 0;
                            while (m < 3) {
                                f = b[k + 1][m];
                                b[k + 1][m] = b[k][m];
                                b[k][m] = f;
                                miBTazQ3Sj = PdLleTzfSBb[k + 1][m];
                                PdLleTzfSBb[k + 1][m] = PdLleTzfSBb[k][m];
                                PdLleTzfSBb[k][m] = miBTazQ3Sj;
                                m++;
                            };
                        };
                    }
                    k++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < vFITPxtz * (vFITPxtz - 1) / 2) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", b[i][0], b[i][1], b[i][2], PdLleTzfSBb[i][0], PdLleTzfSBb[i][1], PdLleTzfSBb[i][2], c[i]);
            i++;
        };
    }
    return 0;
}

