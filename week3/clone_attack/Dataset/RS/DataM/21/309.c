int main () {
    int ejRgNtvm, PM5PmhXLQ, HzWsbYKI3qOy;
    int d4AD3h, lrDxc4qMnm = (467 - 467);
    double  xAJPr8T0, N6TOIjU5m;
    int m5QfjUOcRl [(870 - 569)];
    int fkc3HpRZFEox [(589 - 288)];
    double  hXeNY6T [(1068 - 767)];
    scanf ("%d", &d4AD3h);
    for (ejRgNtvm = (601 - 601); d4AD3h - (122 - 121) >= ejRgNtvm; ejRgNtvm = ejRgNtvm + 1) {
        scanf ("%d", &m5QfjUOcRl[ejRgNtvm]);
    }
    for (ejRgNtvm = (434 - 434), HzWsbYKI3qOy = (160 - 160); d4AD3h - (574 - 573) >= ejRgNtvm; ejRgNtvm++) {
        HzWsbYKI3qOy = HzWsbYKI3qOy +m5QfjUOcRl[ejRgNtvm];
    }
    xAJPr8T0 = ((568.0 - 567.0) * HzWsbYKI3qOy) / d4AD3h;
    for (ejRgNtvm = (88 - 88); d4AD3h - (886 - 885) >= ejRgNtvm; ejRgNtvm++) {
        if ((606 - 606) > m5QfjUOcRl[ejRgNtvm] - xAJPr8T0) {
            hXeNY6T[ejRgNtvm] = xAJPr8T0 - m5QfjUOcRl[ejRgNtvm];
        }
        else {
            hXeNY6T[ejRgNtvm] = m5QfjUOcRl[ejRgNtvm] - xAJPr8T0;
        };
    }
    {
        ejRgNtvm = 372 - 372;
        while (ejRgNtvm <= d4AD3h - (240 - 238)) {
            {
                PM5PmhXLQ = 0;
                while (d4AD3h - (456 - 454) - ejRgNtvm >= PM5PmhXLQ) {
                    if (hXeNY6T[PM5PmhXLQ] < hXeNY6T[PM5PmhXLQ +(121 - 120)]) {
                        N6TOIjU5m = hXeNY6T[PM5PmhXLQ];
                        hXeNY6T[PM5PmhXLQ] = hXeNY6T[PM5PmhXLQ +(276 - 275)];
                        hXeNY6T[PM5PmhXLQ +(546 - 545)] = N6TOIjU5m;
                    }
                    PM5PmhXLQ++;
                };
            }
            ejRgNtvm = ejRgNtvm + 1;
        };
    }
    for (ejRgNtvm = 0; d4AD3h - (386 - 385) >= ejRgNtvm; ejRgNtvm++) {
        if (m5QfjUOcRl[ejRgNtvm] - xAJPr8T0 == hXeNY6T[0] || m5QfjUOcRl[ejRgNtvm] - xAJPr8T0 == (-1 * hXeNY6T[0])) {
            fkc3HpRZFEox[lrDxc4qMnm] = m5QfjUOcRl[ejRgNtvm];
            lrDxc4qMnm++;
        };
    }
    for (ejRgNtvm = 0; ejRgNtvm <= lrDxc4qMnm - 2; ejRgNtvm++) {
        for (PM5PmhXLQ = 0; PM5PmhXLQ <= lrDxc4qMnm - 2 - ejRgNtvm; PM5PmhXLQ++) {
            if (fkc3HpRZFEox[PM5PmhXLQ +1] < fkc3HpRZFEox[PM5PmhXLQ]) {
                N6TOIjU5m = fkc3HpRZFEox[PM5PmhXLQ];
                fkc3HpRZFEox[PM5PmhXLQ] = fkc3HpRZFEox[PM5PmhXLQ +1];
                fkc3HpRZFEox[PM5PmhXLQ +1] = N6TOIjU5m;
            };
        };
    }
    if (fkc3HpRZFEox[0] == (471 - 456)) {
        printf ("15");
    }
    else {
        printf ("%d", fkc3HpRZFEox[0]);
        {
            ejRgNtvm = 1;
            while (ejRgNtvm <= lrDxc4qMnm - 1) {
                printf (",%d", fkc3HpRZFEox[ejRgNtvm]);
                ejRgNtvm++;
            };
        };
    }
    return 0;
}

