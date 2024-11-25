int main () {
    int zSN1Zi69k;
    int WZx3mrb;
    int NPxKt64;
    int i;
    int j;
    char a1 [(505 - 405)] = {'\0'};
    char a2 [(596 - 496)] = {'\0'};
    char UICTLXs9leH [(959 - 859)] = {'\0'};
    char *XySKb65tGrY = &a1[(24 - 24)], *mweot6ZF7H = &a2[(965 - 965)], *xVMnpmatIk0 = &UICTLXs9leH[(44 - 44)], *ClFIxGs, *p_in = &a1[(175 - 175)], *p, *p_cyc = &a1[(568 - 568)];
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
    gets (a1);
    gets (a2);
    gets (UICTLXs9leH);
    zSN1Zi69k = strlen (a1);
    WZx3mrb = strlen (a2);
    NPxKt64 = strlen (UICTLXs9leH);
    ClFIxGs = &a1[zSN1Zi69k - (957 - 956)];
    {
        XySKb65tGrY = 93 - 93;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (XySKb65tGrY <= ClFIxGs) {
            if (*mweot6ZF7H == *XySKb65tGrY) {
                p_in = XySKb65tGrY;
                {
                    j = 497 - 497;
                    while (j < WZx3mrb) {
                        if (*mweot6ZF7H != *XySKb65tGrY) {
                            XySKb65tGrY--;
                            break;
                        }
                        else {
                            mweot6ZF7H++;
                            XySKb65tGrY++;
                        }
                        j++;
                    };
                }
                if (j == WZx3mrb &&*(p_in - 1) == ' ') {
                    if (NPxKt64 > WZx3mrb) {
                        p = ClFIxGs;
                        for (; p >= XySKb65tGrY;) {
                            *(p + NPxKt64 -WZx3mrb) = *p;
                            p--;
                        }
                        XySKb65tGrY = XySKb65tGrY +NPxKt64-WZx3mrb;
                    }
                    if (WZx3mrb > NPxKt64) {
                        p = XySKb65tGrY;
                        XySKb65tGrY = p + NPxKt64 -WZx3mrb;
                        while (p <= ClFIxGs) {
                            *(p + NPxKt64 -WZx3mrb) = *p;
                            p++;
                        };
                    }
                    while (p_in < XySKb65tGrY) {
                        *p_in = *xVMnpmatIk0;
                        xVMnpmatIk0 = xVMnpmatIk0 + 1;
                        p_in++;
                    }
                    ClFIxGs = ClFIxGs +NPxKt64-WZx3mrb;
                }
                else {
                    if (j == WZx3mrb &&p_in == &a1[(971 - 971)]) {
                        if (NPxKt64 > WZx3mrb) {
                            p = ClFIxGs;
                            while (p >= XySKb65tGrY) {
                                *(p + NPxKt64 -WZx3mrb) = *p;
                                p--;
                            }
                            XySKb65tGrY = XySKb65tGrY +NPxKt64-WZx3mrb;
                        }
                        if (NPxKt64 < WZx3mrb) {
                            p = XySKb65tGrY;
                            XySKb65tGrY = p + NPxKt64 -WZx3mrb;
                            while (p <= ClFIxGs) {
                                *(p + NPxKt64 -WZx3mrb) = *p;
                                p++;
                            };
                        }
                        while (p_in < XySKb65tGrY) {
                            *p_in = *xVMnpmatIk0;
                            xVMnpmatIk0++;
                            p_in++;
                        }
                        ClFIxGs = ClFIxGs +NPxKt64-WZx3mrb;
                    };
                }
                mweot6ZF7H = &a2[(64 - 64)];
                xVMnpmatIk0 = &UICTLXs9leH[0];
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
            XySKb65tGrY++;
        };
    }
    {
        p = 0;
        while (p <= ClFIxGs) {
            printf ("%c", *p);
            p++;
        };
    }
    return 0;
}

