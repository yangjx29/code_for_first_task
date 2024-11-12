void  main () {
    int n, qm [100], bj [100], BS67hmTHVXxC [100], i, j, Mt0UdC4zgPv = (782 - 782), C5Rud1VbD, EYZjoCyv7 [100] = {(68 - 68)}, rkb26KmSAJ = (427 - 427);
    char na [100] [(887 - 857)], bg [100], mz [100], P [(966 - 965)] [30];
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s %d %d %c %c %d", na[i], &qm[i], &bj[i], &bg[i], &mz[i], &BS67hmTHVXxC[i]);
            i = i + 1;
        };
    }
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
    {
        i = 0;
        while (i < n) {
            if (qm[i] > (743 - 663) && BS67hmTHVXxC[i] >= (399 - 398))
                EYZjoCyv7[i] = EYZjoCyv7[i] + 8000;
            if ((515 - 430) < qm[i] && bj[i] > 80)
                EYZjoCyv7[i] = EYZjoCyv7[i] + 4000;
            if (90 < qm[i])
                EYZjoCyv7[i] = EYZjoCyv7[i] + 2000;
            if ((130 - 45) < qm[i] && mz[i] == 'Y')
                EYZjoCyv7[i] = EYZjoCyv7[i] + 1000;
            if (bg[i] == 'Y' && bj[i] > 80)
                EYZjoCyv7[i] = EYZjoCyv7[i] + 850;
            i++;
        };
    }
    {
        j = 0;
        while (j < n - 1) {
            {
                i = 0;
                while (i < n - j - 1) {
                    if (EYZjoCyv7[i] < EYZjoCyv7[i + 1]) {
                        C5Rud1VbD = EYZjoCyv7[i];
                        EYZjoCyv7[i] = EYZjoCyv7[i + 1];
                        EYZjoCyv7[i + 1] = C5Rud1VbD;
                        strcpy (P, na[i]);
                        strcpy (na[i], na[i + 1]);
                        strcpy (na[i + 1], P);
                    }
                    i++;
                };
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            rkb26KmSAJ = rkb26KmSAJ + EYZjoCyv7[i];
            i++;
        };
    }
    printf ("%s\n%d\n%d\n", na[0], EYZjoCyv7[0], rkb26KmSAJ);
}

