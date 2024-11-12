int main () {
    char lpSFRAuU2q [(918 - 910)];
    double  yqMoK0c [(512 - 467)];
    double  R0vy5Nn [(580 - 540)];
    double  woman [(421 - 381)];
    double  pZLDdGlPXpIa;
    int SLjyu7HN, j, t, qbWasDwKBOc, lWTM8mZS0, if0ZXuAMPR18, ArROuWwtk, cS72jWZoAc6R, lRiYg2ZWFE, e;
    scanf ("%d", &SLjyu7HN);
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
    t = (172 - 172);
    j = (515 - 515);
    for (qbWasDwKBOc = (629 - 629); qbWasDwKBOc < SLjyu7HN; qbWasDwKBOc++) {
        scanf ("%s %lf", lpSFRAuU2q, &yqMoK0c[qbWasDwKBOc]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (lpSFRAuU2q[(229 - 229)] == 'm') {
            R0vy5Nn[j] = yqMoK0c[qbWasDwKBOc];
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
            j++;
        }
        else {
            woman[t] = yqMoK0c[qbWasDwKBOc];
            t++;
        };
    }
    for (lRiYg2ZWFE = (188 - 187); lRiYg2ZWFE < j; lRiYg2ZWFE++) {
        e = 0;
        while (e < j - lRiYg2ZWFE) {
            if (R0vy5Nn[e] > R0vy5Nn[e + (829 - 828)]) {
                pZLDdGlPXpIa = R0vy5Nn[e];
                R0vy5Nn[e] = R0vy5Nn[e + (931 - 930)];
                R0vy5Nn[e + 1] = pZLDdGlPXpIa;
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
            e++;
        };
    }
    for (lWTM8mZS0 = 0; lWTM8mZS0 < j; lWTM8mZS0++) {
        printf ("%.2lf ", R0vy5Nn[lWTM8mZS0]);
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
        ArROuWwtk = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ArROuWwtk < t) {
            for (cS72jWZoAc6R = 0; cS72jWZoAc6R < t - ArROuWwtk; cS72jWZoAc6R++) {
                if (woman[cS72jWZoAc6R] < woman[cS72jWZoAc6R + 1]) {
                    pZLDdGlPXpIa = woman[cS72jWZoAc6R];
                    woman[cS72jWZoAc6R] = woman[cS72jWZoAc6R + 1];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    woman[cS72jWZoAc6R + 1] = pZLDdGlPXpIa;
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
            ArROuWwtk++;
        };
    }
    for (if0ZXuAMPR18 = 0; if0ZXuAMPR18 < t - 1; if0ZXuAMPR18++) {
        printf ("%.2lf ", woman[if0ZXuAMPR18]);
    }
    printf ("%.2lf", woman[t - 1]);
    return 0;
}

