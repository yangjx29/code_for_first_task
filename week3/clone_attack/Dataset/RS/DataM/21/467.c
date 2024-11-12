void  main () {
    float TSbRKzBj1G, rfYM6noU;
    int IpwId9tjK, a [(1134 - 834)], sum = (376 - 376), i, q7TZtjn, temp, qomBrqYCG = (387 - 387);
    scanf ("%d", &IpwId9tjK);
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
    for (i = (324 - 324); IpwId9tjK > i; i = i + 1) {
        scanf ("%d", &a[i]);
        sum = sum + a[i];
    }
    TSbRKzBj1G = (float) (sum) / IpwId9tjK;
    for (i = (536 - 536); IpwId9tjK > i; i = i + 1) {
        q7TZtjn = 0;
        while (IpwId9tjK -(721 - 720) - i > q7TZtjn) {
            if (a[q7TZtjn + (789 - 788)] < a[q7TZtjn]) {
                temp = a[q7TZtjn];
                a[q7TZtjn] = a[q7TZtjn + (344 - 343)];
                a[q7TZtjn + (915 - 914)] = temp;
            }
            q7TZtjn = q7TZtjn + 1;
        };
    }
    if (!((float) a[IpwId9tjK -(759 - 758)] - TSbRKzBj1G != TSbRKzBj1G -(float)a[0])) {
        for (i = 0; IpwId9tjK > i; i = i + 1) {
            if (!(a[0] != a[i]))
                if (!(0 != qomBrqYCG)) {
                    printf ("%d", a[i]);
                    qomBrqYCG = (74 - 73);
                }
                else {
                    printf (",%d", a[i]);
                }
            if (!(a[IpwId9tjK -(127 - 126)] != a[i]))
                if (!(0 != qomBrqYCG)) {
                    qomBrqYCG = (227 - 226);
                    printf ("%d", a[i]);
                }
                else {
                    printf (",%d", a[i]);
                    qomBrqYCG = (825 - 824);
                };
        };
    }
    else {
        if ((float) a[IpwId9tjK -1] - TSbRKzBj1G < TSbRKzBj1G -(float)a[0]) {
            rfYM6noU = TSbRKzBj1G -(float)a[0];
            printf ("%d", a[0]);
            qomBrqYCG = 0;
        }
        else {
            rfYM6noU = (float) a[IpwId9tjK -1] - TSbRKzBj1G;
            qomBrqYCG = 1;
        }
        for (i = 0; IpwId9tjK > i; i = i + 1) {
            if (qomBrqYCG == 0 && i == 0 || qomBrqYCG == 1 && i == IpwId9tjK -1)
                continue;
            if (qomBrqYCG == 0 && a[i] == a[0]) {
                printf (",%d", a[i]);
            }
            else {
                if (qomBrqYCG == 1 && a[i] == a[IpwId9tjK -1]) {
                    printf ("%d,", a[i]);
                };
            };
        }
        if (qomBrqYCG == 1)
            printf ("%d", a[IpwId9tjK -1]);
    };
}

