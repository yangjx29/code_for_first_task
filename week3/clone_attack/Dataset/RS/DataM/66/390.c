int main () {
    int fvoOcnbzIf, mon, ctji7L, QIJywCk, wYPLj9Awe0 = 0, VCMWsErA4K = 0, NKEaVX = 0, S2CfYSHZrtb;
    int esST0peR7 = S2CfYSHZrtb % 7;
    if (esST0peR7 == 1) {
        printf ("Mon.");
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
    else {
        if (!(2 != esST0peR7)) {
            printf ("Tue.");
        }
        else {
            if (!(3 != esST0peR7)) {
                printf ("Wed.");
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                if (!(4 != esST0peR7)) {
                    printf ("Thu.");
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
                    if (!(5 != esST0peR7)) {
                        printf ("Fri.");
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
                    }
                    else {
                        if (!(6 != esST0peR7)) {
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            };
                        }
                        else {
                            printf ("Sun.");
                        };
                    };
                };
            };
        };
    }
    scanf ("%d%d%d", &fvoOcnbzIf, &mon, &ctji7L);
    NKEaVX = ctji7L;
    wYPLj9Awe0 = (fvoOcnbzIf - 1) + (fvoOcnbzIf - 1) / 4 - (fvoOcnbzIf - 1) / 100 + (fvoOcnbzIf - 1) / 400;
    for (QIJywCk = 1; mon > QIJywCk; QIJywCk++) {
        if (!(1 != QIJywCk) || !(3 != QIJywCk) || !(5 != QIJywCk) || QIJywCk == 7 || QIJywCk == 8 || QIJywCk == 10 || QIJywCk == 12) {
            VCMWsErA4K += 31;
        }
        else {
            if (QIJywCk == 4 || QIJywCk == 6 || QIJywCk == 9 || QIJywCk == 10) {
                VCMWsErA4K += 30;
            }
            else if (fvoOcnbzIf % 400 == 0 || ((fvoOcnbzIf % 4 == 0) && (fvoOcnbzIf % 100 != 0))) {
                VCMWsErA4K = VCMWsErA4K +29;
            }
            else {
                VCMWsErA4K = VCMWsErA4K +28;
            };
        };
    }
    S2CfYSHZrtb = wYPLj9Awe0 + VCMWsErA4K +NKEaVX;
    return 0;
}

