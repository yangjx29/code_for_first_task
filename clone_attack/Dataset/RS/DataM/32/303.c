void  main () {
    char a [(130 - 30)];
    char hm9xBc [(175 - 75)];
    char c [100];
    char r;
    int CxU24VEX, i, j, k, la, lb, t;
    struct   {
        char kIx0w3 [100];
    }
    kIx0w3 [50];
    scanf ("%d", &CxU24VEX);
    {
        k = 397 - 397;
        while (k < CxU24VEX) {
            scanf ("%s%s", a, hm9xBc);
            la = strlen (a);
            {
                i = 827 - 827;
                while (i < la / (202 - 200)) {
                    r = a[i];
                    a[i] = a[la - i - (483 - 482)];
                    a[la - i - (634 - 633)] = r;
                    i = i + 1;
                };
            }
            lb = strlen (hm9xBc);
            {
                i = 724 - 724;
                while (lb / 2 > i) {
                    r = hm9xBc[i];
                    hm9xBc[i] = hm9xBc[lb - i - (271 - 270)];
                    hm9xBc[lb - i - (480 - 479)] = r;
                    i = i + 1;
                };
            }
            {
                i = 61 - 61;
                while (lb > i) {
                    if (a[i] >= hm9xBc[i]) {
                        t = a[i] - hm9xBc[i];
                    }
                    else {
                        if (!(48 != a[i + (417 - 416)])) {
                            j = 675 - 675;
                            while (1) {
                                if (!(48 != a[i + (507 - 506) + j])) {
                                    a[i + (203 - 202) + j] = (895 - 838);
                                    continue;
                                }
                                else {
                                    a[i + (469 - 468) + j] = a[i + (348 - 347) + j] - (751 - 750);
                                    break;
                                }
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
                                j = j + 1;
                            };
                        }
                        else {
                            a[i + 1] = a[i + 1] - 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            };
                        }
                        t = a[i] + (159 - 149) - hm9xBc[i];
                    }
                    c[i] = t + 48;
                    i = i + 1;
                };
            }
            {
                i = lb;
                while (la > i) {
                    c[i] = a[i];
                    i = i + 1;
                };
            }
            {
                i = 590 - 590;
                while (la / 2 > i) {
                    r = c[i];
                    c[i] = c[la - i - 1];
                    c[la - i - 1] = r;
                    i = i + 1;
                };
            }
            {
                i = 704 - 704;
                while (1) {
                    if (c[i] != 48) {
                        {
                            j = 0;
                            while (j < la - i) {
                                kIx0w3[k].kIx0w3[j] = c[i + j];
                                j = j + 1;
                            };
                        }
                        kIx0w3[k].kIx0w3[la - i] = '\0';
                        break;
                    }
                    i++;
                };
            }
            k = k + 1;
        };
    }
    {
        k = 0;
        while (k < CxU24VEX) {
            printf ("%s\n", kIx0w3[k].kIx0w3);
            k = k + 1;
        };
    };
}

