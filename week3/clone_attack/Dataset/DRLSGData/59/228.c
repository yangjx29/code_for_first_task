int main () {
    int a [101] [101], NcE4eWRy0C5Q, evCXP7ARo, XyxieWRt94A, QWuyREcxrb8L, zgfrlkEnM;
    char LU0B1GVZ5, t;
    scanf ("%d", &QWuyREcxrb8L);
    scanf ("%c", &t);
    for (NcE4eWRy0C5Q = 1; NcE4eWRy0C5Q <= QWuyREcxrb8L; NcE4eWRy0C5Q = NcE4eWRy0C5Q +1) {
        for (evCXP7ARo = 1; evCXP7ARo <= QWuyREcxrb8L; evCXP7ARo = evCXP7ARo + 1) {
            scanf ("%c", &LU0B1GVZ5);
            if (!('.' != LU0B1GVZ5))
                a[NcE4eWRy0C5Q][evCXP7ARo] = -1;
            else {
                if (!('@' != LU0B1GVZ5))
                    a[NcE4eWRy0C5Q][evCXP7ARo] = 0;
                else
                    a[NcE4eWRy0C5Q][evCXP7ARo] = -2;
            }
        }
        scanf ("%c", &t);
    }
    scanf ("%d", &zgfrlkEnM);
    {
        XyxieWRt94A = 0;
        for (; zgfrlkEnM - 1 > XyxieWRt94A;) {
            for (NcE4eWRy0C5Q = 1; NcE4eWRy0C5Q <= QWuyREcxrb8L; NcE4eWRy0C5Q = NcE4eWRy0C5Q +1) {
                evCXP7ARo = 1;
                while (evCXP7ARo <= QWuyREcxrb8L) {
                    if (!(XyxieWRt94A != a[NcE4eWRy0C5Q][evCXP7ARo])) {
                        if (!(-1 != a[NcE4eWRy0C5Q -1][evCXP7ARo]))
                            a[NcE4eWRy0C5Q -1][evCXP7ARo] = XyxieWRt94A +1;
                        if (!(-1 != a[NcE4eWRy0C5Q +1][evCXP7ARo]))
                            a[NcE4eWRy0C5Q +1][evCXP7ARo] = XyxieWRt94A +1;
                        if (!(-1 != a[NcE4eWRy0C5Q][evCXP7ARo + 1]))
                            a[NcE4eWRy0C5Q][evCXP7ARo + 1] = XyxieWRt94A +1;
                        if (a[NcE4eWRy0C5Q][evCXP7ARo - 1] == -1)
                            a[NcE4eWRy0C5Q][evCXP7ARo - 1] = XyxieWRt94A +1;
                    }
                    evCXP7ARo = evCXP7ARo + 1;
                }
            }
            XyxieWRt94A++;
        }
    }
    XyxieWRt94A = 0;
    for (NcE4eWRy0C5Q = 1; NcE4eWRy0C5Q <= QWuyREcxrb8L; NcE4eWRy0C5Q++) {
        evCXP7ARo = 1;
        while (evCXP7ARo <= QWuyREcxrb8L) {
            if (a[NcE4eWRy0C5Q][evCXP7ARo] >= 0)
                XyxieWRt94A = XyxieWRt94A +1;
            evCXP7ARo++;
        }
    }
    printf ("%d", XyxieWRt94A);
    return 0;
}

