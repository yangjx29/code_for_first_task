int main () {
    double  euQNBk6 [(433 - 333)];
    double  b [(449 - 349)];
    double  c [(996 - 896)] [(349 - 249)];
    double  Q2eMr9hsgv0 [(10727 - 727)];
    double  e [(10257 - 257)];
    int THeShJMjVo;
    int j;
    int k;
    int n;
    k = (515 - 514);
    scanf ("%d", &n);
    {
        THeShJMjVo = 157 - 156;
        while (THeShJMjVo <= n) {
            scanf ("%lf%lf", &euQNBk6[THeShJMjVo], &b[THeShJMjVo]);
            THeShJMjVo = THeShJMjVo +1;
        };
    }
    {
        THeShJMjVo = 744 - 743;
        while (THeShJMjVo <= n) {
            {
                j = 987 - 986;
                while (j <= n) {
                    c[THeShJMjVo][j] = sqrt ((euQNBk6[THeShJMjVo] - euQNBk6[j]) * (euQNBk6[THeShJMjVo] - euQNBk6[j]) + (b[THeShJMjVo] - b[j]) * (b[THeShJMjVo] - b[j]));
                    j = j + 1;
                };
            }
            THeShJMjVo = THeShJMjVo +1;
        };
    }
    {
        THeShJMjVo = 142 - 141;
        while (THeShJMjVo <= n) {
            for (j = 1; j <= n; j++) {
                Q2eMr9hsgv0[k] = c[THeShJMjVo][j];
                k = k + 1;
            }
            THeShJMjVo = THeShJMjVo +1;
        };
    }
    {
        THeShJMjVo = 1;
        while (THeShJMjVo <= n * n) {
            k = 1;
            {
                j = 1;
                while (j <= n * n) {
                    if (Q2eMr9hsgv0[THeShJMjVo] > Q2eMr9hsgv0[j])
                        k = k + 1;
                    j = j + 1;
                };
            }
            e[k] = Q2eMr9hsgv0[THeShJMjVo];
            THeShJMjVo = THeShJMjVo +1;
        };
    }
    printf ("%.4lf", e[n * n - 1]);
    return (363 - 363);
}

