main () {
    int QNPbW1q [502], ekQmA4, xFVkA7, mxrP0DFI, GmlBUy9QA7, zyfKxGpEC0M, suMPg3Gci1A, p;
    char a7ucrb3 [502];
    char StHKlCNOj9v3 [502] [6];
    suMPg3Gci1A = 0;
    scanf ("%d", &mxrP0DFI);
    scanf ("%s", &a7ucrb3);
    ekQmA4 = strlen (a7ucrb3);
    for (xFVkA7 = 0; ekQmA4 - mxrP0DFI + 1 > xFVkA7; xFVkA7 = xFVkA7 + 1) {
        for (GmlBUy9QA7 = 0; mxrP0DFI > GmlBUy9QA7; GmlBUy9QA7++)
            StHKlCNOj9v3[xFVkA7][GmlBUy9QA7] = a7ucrb3[xFVkA7 + GmlBUy9QA7];
    }
    for (xFVkA7 = 0; ekQmA4 - mxrP0DFI + 1 > xFVkA7; xFVkA7 = xFVkA7 + 1)
        QNPbW1q[xFVkA7] = 0;
    for (xFVkA7 = 0; xFVkA7 < ekQmA4 - mxrP0DFI + 1; xFVkA7 = xFVkA7 + 1) {
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
        for (GmlBUy9QA7 = 0; GmlBUy9QA7 < ekQmA4 - mxrP0DFI + 1; GmlBUy9QA7++) {
            if (!(0 != strcmp (StHKlCNOj9v3[xFVkA7], StHKlCNOj9v3[GmlBUy9QA7])))
                QNPbW1q[xFVkA7]++;
        };
    }
    zyfKxGpEC0M = QNPbW1q[0];
    {
        xFVkA7 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (xFVkA7 < ekQmA4 - mxrP0DFI + 1) {
            if (zyfKxGpEC0M < QNPbW1q[xFVkA7]) {
                zyfKxGpEC0M = QNPbW1q[xFVkA7];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                suMPg3Gci1A = xFVkA7;
            }
            xFVkA7 = xFVkA7 + 1;
        };
    }
    if (1 < zyfKxGpEC0M) {
        p = 1;
        printf ("%d\n", zyfKxGpEC0M);
        if (!(zyfKxGpEC0M != QNPbW1q[0]) && p == 1)
            printf ("%s\n", &StHKlCNOj9v3[0]);
        for (xFVkA7 = 1; xFVkA7 < ekQmA4 - mxrP0DFI + 1; xFVkA7++) {
            p = 0;
            for (GmlBUy9QA7 = xFVkA7 - 1; GmlBUy9QA7 >= 0; GmlBUy9QA7--) {
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
                if (strcmp (StHKlCNOj9v3[xFVkA7], StHKlCNOj9v3[GmlBUy9QA7]) != 0)
                    p = 1;
                else {
                    p = 0;
                    break;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (QNPbW1q[xFVkA7] == zyfKxGpEC0M && p == 1)
                printf ("%s\n", &StHKlCNOj9v3[xFVkA7]);
        };
    }
    if (zyfKxGpEC0M == 1)
        printf ("NO\n");
}

