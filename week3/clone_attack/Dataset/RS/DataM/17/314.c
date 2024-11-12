main () {
    int X4W2XhsS9, e, x, LUWenL1RIj, t, VuLs3cl, k;
    char VHL1JVU [102];
    scanf ("%d", &X4W2XhsS9);
    {
        e = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (X4W2XhsS9 > e) {
            scanf ("%s", VHL1JVU);
            printf ("%s\n", VHL1JVU);
            x = strlen (VHL1JVU);
            {
                LUWenL1RIj = 0;
                while (x > LUWenL1RIj) {
                    if (VHL1JVU[LUWenL1RIj] != '(' && VHL1JVU[LUWenL1RIj] != ')') {
                        VHL1JVU[LUWenL1RIj] = ' ';
                    }
                    LUWenL1RIj = LUWenL1RIj +1;
                };
            }
            {
                LUWenL1RIj = 0;
                while (LUWenL1RIj < x) {
                    if (VHL1JVU[LUWenL1RIj] == '(') {
                        VuLs3cl = LUWenL1RIj +1;
                        while (VuLs3cl < x) {
                            if (VHL1JVU[VuLs3cl] == ')') {
                                t = 0;
                                {
                                    k = LUWenL1RIj +1;
                                    while (VuLs3cl > k) {
                                        if (VHL1JVU[k] != ' ') {
                                            t = 1;
                                            break;
                                        }
                                        k = k + 1;
                                    };
                                }
                                if (t == 0) {
                                    VHL1JVU[LUWenL1RIj] = ' ';
                                    LUWenL1RIj = -1;
                                    VHL1JVU[VuLs3cl] = ' ';
                                    break;
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
                            VuLs3cl = VuLs3cl +1;
                        };
                    }
                    LUWenL1RIj = LUWenL1RIj +1;
                };
            }
            {
                LUWenL1RIj = 0;
                while (LUWenL1RIj < x) {
                    if (VHL1JVU[LUWenL1RIj] == '(')
                        VHL1JVU[LUWenL1RIj] = '$';
                    if (VHL1JVU[LUWenL1RIj] == ')')
                        VHL1JVU[LUWenL1RIj] = '?';
                    LUWenL1RIj = LUWenL1RIj +1;
                };
            }
            printf ("%s\n", VHL1JVU);
            e = e + 1;
        };
    };
}

