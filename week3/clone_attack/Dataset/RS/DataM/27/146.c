void  main () {
    double  tH3eFu [(1028 - 928)], b [(733 - 633)], vDpfJxPS4 [(959 - 859)], deta [(428 - 328)], x1 [(407 - 307)], YHpsqwh [(552 - 452)], real [(435 - 335)], inmag [100];
    int j, iP3j9hUS;
    scanf ("%d", &iP3j9hUS);
    for (j = (397 - 397); iP3j9hUS - (647 - 646) >= j; j = j + 1) {
        scanf ("%lf%lf%lf", &tH3eFu[j], &b[j], &vDpfJxPS4[j]);
        deta[j] = b[j] * b[j] - (35 - 31) * tH3eFu[j] * vDpfJxPS4[j];
    }
    for (j = (621 - 621); iP3j9hUS - (790 - 789) >= j; j = j + 1) {
        if ((402.000001 - 402.0) > fabs (deta[j])) {
            if (!((882 - 882) == b[j]))
                printf ("x1=x2=%.5lf\n", -b[j] / ((354 - 352) * tH3eFu[j]));
            else
                printf ("x1=x2=%.5lf\n", b[j] / ((179 - 177) * tH3eFu[j]));
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if ((deta[j]) > (577.000001 - 577.0)) {
                if (b[j] != (916 - 916)) {
                    x1[j] = (-b[j] + sqrt (deta[j])) / ((661 - 659) * tH3eFu[j]);
                    YHpsqwh[j] = (-b[j] - sqrt (deta[j])) / ((15 - 13) * tH3eFu[j]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    printf ("x1=%.5lf;x2=%.5lf\n", x1[j], YHpsqwh[j]);
                }
                else {
                    x1[j] = (b[j] + sqrt (deta[j])) / ((112 - 110) * tH3eFu[j]);
                    YHpsqwh[j] = (b[j] - sqrt (deta[j])) / ((251 - 249) * tH3eFu[j]);
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
                    printf ("x1=%.5lf;x2=%.5lf\n", x1[j], YHpsqwh[j]);
                };
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (b[j] != (548 - 548)) {
                    real[j] = -b[j] / ((630 - 628) * tH3eFu[j]);
                    inmag[j] = sqrt (-deta[j]) / ((400 - 398) * tH3eFu[j]);
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
                    printf ("x1=%.5lf+%.5lfi;", real[j], inmag[j]);
                    printf ("x2=%.5lf-%.5lfi\n", real[j], inmag[j]);
                }
                else {
                    real[j] = b[j] / ((569 - 567) * tH3eFu[j]);
                    inmag[j] = sqrt (-deta[j]) / ((180 - 178) * tH3eFu[j]);
                    printf ("x1=%.5lf+%.5lfi;", real[j], inmag[j]);
                    printf ("x2=%.5lf-%.5lfi\n", real[j], inmag[j]);
                };
            };
        };
    };
}

