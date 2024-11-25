int main () {
    int ENFuQYZMH [100];
    char KYIKyBRoc [100];
    long  lM4oXkI7H2Tl;
    int j9Bk2SjPF1e;
    int i;
    int VwVmTf1uRAPE;
    int dzic8RvIOSg;
    int X3LAKycX;
    int hGPlxIiLXp;
    j9Bk2SjPF1e = 0;
    scanf ("%d", &X3LAKycX);
    scanf ("%s", KYIKyBRoc);
    scanf ("%d", &hGPlxIiLXp);
    dzic8RvIOSg = strlen (KYIKyBRoc);
    if (10 >= X3LAKycX) {
        lM4oXkI7H2Tl = KYIKyBRoc[0] - '0';
        for (i = 1; dzic8RvIOSg > i; i++) {
            lM4oXkI7H2Tl = lM4oXkI7H2Tl * X3LAKycX +KYIKyBRoc[i] - '0';
        };
    }
    else {
        if ('0' <= KYIKyBRoc[0] && '9' >= KYIKyBRoc[0])
            lM4oXkI7H2Tl = KYIKyBRoc[0] - '0';
        else if ('a' <= KYIKyBRoc[0] && 'z' >= KYIKyBRoc[0])
            lM4oXkI7H2Tl = KYIKyBRoc[0] - 'a' + 10;
        else if ('A' <= KYIKyBRoc[0] && 'Z' >= KYIKyBRoc[0])
            lM4oXkI7H2Tl = KYIKyBRoc[0] - 'A' + 10;
        {
            i = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < dzic8RvIOSg) {
                if (KYIKyBRoc[i] >= '0' && KYIKyBRoc[i] <= '9')
                    lM4oXkI7H2Tl = lM4oXkI7H2Tl * X3LAKycX +KYIKyBRoc[i] - '0';
                else {
                    if ('a' <= KYIKyBRoc[i] && 'z' >= KYIKyBRoc[i])
                        lM4oXkI7H2Tl = lM4oXkI7H2Tl * X3LAKycX +KYIKyBRoc[i] - 'a' + 10;
                    else if (KYIKyBRoc[i] >= 'A' && KYIKyBRoc[i] <= 'Z')
                        lM4oXkI7H2Tl = lM4oXkI7H2Tl * X3LAKycX +KYIKyBRoc[i] - 'A' + 10;
                }
                i++;
            };
        };
    }
    if (hGPlxIiLXp <= 10) {
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
        if (lM4oXkI7H2Tl == 0)
            ;
        else {
            {
                i = 0;
                while (lM4oXkI7H2Tl != 0) {
                    ENFuQYZMH[i] = lM4oXkI7H2Tl % hGPlxIiLXp;
                    i++;
                    lM4oXkI7H2Tl = lM4oXkI7H2Tl / hGPlxIiLXp;
                };
            }
            for (VwVmTf1uRAPE = i - 1; VwVmTf1uRAPE >= 0; VwVmTf1uRAPE--) {
                printf ("%d", ENFuQYZMH[VwVmTf1uRAPE]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
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
            printf ("\n");
        };
    }
    else if (hGPlxIiLXp > 10) {
        if (lM4oXkI7H2Tl == 0)
            printf ("0\n");
        else {
            {
                i = 0;
                while (lM4oXkI7H2Tl != 0) {
                    ENFuQYZMH[i] = lM4oXkI7H2Tl % hGPlxIiLXp;
                    i++;
                    lM4oXkI7H2Tl = lM4oXkI7H2Tl / hGPlxIiLXp;
                };
            }
            {
                VwVmTf1uRAPE = i - 1;
                while (VwVmTf1uRAPE >= 0) {
                    if (ENFuQYZMH[VwVmTf1uRAPE] >= 10)
                        printf ("%c", 'A' + ENFuQYZMH[VwVmTf1uRAPE] - 10);
                    else
                        printf ("%d", ENFuQYZMH[VwVmTf1uRAPE]);
                    VwVmTf1uRAPE--;
                };
            };
        };
    }
    return 0;
}

