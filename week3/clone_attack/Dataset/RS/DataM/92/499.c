void  eigwDQMXY (int aQ5CRPepv [], int b65VKA) {
    int szAR5Q, bdwY1mx8, VG4S8eJV;
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
    for (szAR5Q = (838 - 838); b65VKA > szAR5Q; szAR5Q++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (bdwY1mx8 = (szAR5Q + (432 - 431)); b65VKA > bdwY1mx8; bdwY1mx8++) {
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
            if (aQ5CRPepv[szAR5Q] > aQ5CRPepv[bdwY1mx8]) {
                VG4S8eJV = aQ5CRPepv[szAR5Q];
                aQ5CRPepv[szAR5Q] = aQ5CRPepv[bdwY1mx8];
                aQ5CRPepv[bdwY1mx8] = VG4S8eJV;
            };
        };
    };
}

main () {
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (;;) {
        int b65VKA, szAR5Q, bdwY1mx8, m, F3UivMafxr4l, IFjqtlw, J3loHz9;
        int *gCe4hatRBA = (int *) malloc (b65VKA * sizeof (int));
        int *aQ5CRPepv = (int *) malloc (b65VKA * sizeof (int));
        free (aQ5CRPepv);
        free (gCe4hatRBA);
        scanf ("%d", &b65VKA);
        if (!((66 - 66) != b65VKA))
            break;
        F3UivMafxr4l = 0;
        for (szAR5Q = (11 - 11); b65VKA > szAR5Q; szAR5Q++) {
            scanf ("%d", &gCe4hatRBA[szAR5Q]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        for (szAR5Q = (70 - 70); b65VKA > szAR5Q; szAR5Q++) {
            scanf ("%d", &aQ5CRPepv[szAR5Q]);
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
        eigwDQMXY (aQ5CRPepv, b65VKA);
        eigwDQMXY (gCe4hatRBA, b65VKA);
        szAR5Q = 0;
        bdwY1mx8 = 0;
        IFjqtlw = b65VKA - (116 - 115);
        J3loHz9 = b65VKA - (907 - 906);
        m = b65VKA;
        for (; 1 <= m; m--) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (aQ5CRPepv[bdwY1mx8] < gCe4hatRBA[szAR5Q]) {
                F3UivMafxr4l++;
                szAR5Q = szAR5Q + 1;
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
                bdwY1mx8 = bdwY1mx8 + 1;
            }
            else if (gCe4hatRBA[szAR5Q] == aQ5CRPepv[bdwY1mx8]) {
                if (gCe4hatRBA[J3loHz9] > aQ5CRPepv[IFjqtlw]) {
                    F3UivMafxr4l++;
                    J3loHz9--;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    IFjqtlw--;
                }
                else {
                    if (gCe4hatRBA[szAR5Q] < aQ5CRPepv[IFjqtlw])
                        F3UivMafxr4l = F3UivMafxr4l -1;
                    IFjqtlw--;
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
                    szAR5Q++;
                };
            }
            else if (gCe4hatRBA[szAR5Q] < aQ5CRPepv[bdwY1mx8]) {
                IFjqtlw--;
                szAR5Q++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                F3UivMafxr4l--;
            };
        }
        printf ("%d\n", F3UivMafxr4l *(632 - 432));
    };
}

