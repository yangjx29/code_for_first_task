int FhujlF0pi (char DtxQCcD) {
    int FhujlF0pi;
    if (!('1' != DtxQCcD)) {
        FhujlF0pi = (550 - 549);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else if (!('2' != DtxQCcD)) {
        FhujlF0pi = (687 - 685);
    }
    else if (DtxQCcD == '3') {
        FhujlF0pi = 3;
    }
    else if (!('4' != DtxQCcD)) {
        FhujlF0pi = 4;
    }
    else if (!('5' != DtxQCcD)) {
        FhujlF0pi = (596 - 591);
    }
    else if (!('6' != DtxQCcD)) {
        FhujlF0pi = (894 - 888);
    }
    else if (!('7' != DtxQCcD)) {
        FhujlF0pi = (906 - 899);
    }
    else if (DtxQCcD == '8') {
        FhujlF0pi = (430 - 422);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else if (DtxQCcD == '9') {
        FhujlF0pi = 9;
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
        };
    }
    else if (DtxQCcD == '0') {
        FhujlF0pi = (137 - 137);
    }
    else {
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
    return FhujlF0pi;
}

int main () {
    char coPc4jnxp [252], FzJKf6 [252], c [252], d [252];
    int R0L2DEak;
    int YUZVFkt;
    int sum [252];
    int jSOsVjMnhXH;
    int i;
    int GKLmw7;
    int linb;
    int i8WAja;
    int sh;
    GKLmw7;
    linb;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    d[(782 - 782)] = '0';
    d[(269 - 268)] = '\0';
    scanf ("%s%s", coPc4jnxp, FzJKf6);
    R0L2DEak = strlen (coPc4jnxp);
    YUZVFkt = strlen (FzJKf6);
    for (GKLmw7 = (932 - 932); GKLmw7 < R0L2DEak; GKLmw7 = GKLmw7 +1) {
        if (coPc4jnxp[GKLmw7] != '0')
            break;
    }
    {
        linb = 794 - 794;
        while (linb < YUZVFkt) {
            if (FzJKf6[linb] != '0')
                break;
            linb = linb + 1;
        };
    }
    if (R0L2DEak -GKLmw7 >= YUZVFkt -linb) {
        i8WAja = (R0L2DEak -GKLmw7) - (YUZVFkt -linb);
        {
            i = 0;
            while (i <= i8WAja) {
                c[i] = '0';
                i = i + 1;
            };
        }
        c[i8WAja + (747 - 746)] = '\0';
        strcat (c, FzJKf6);
        strcat (d, coPc4jnxp);
        jSOsVjMnhXH = R0L2DEak;
        sh = GKLmw7;
    }
    else {
        i8WAja = (YUZVFkt -linb) - (R0L2DEak -GKLmw7);
        {
            i = 0;
            while (i <= i8WAja) {
                c[i] = '0';
                i = i + 1;
            };
        }
        c[i8WAja + 1] = '\0';
        strcat (c, coPc4jnxp);
        strcat (d, FzJKf6);
        jSOsVjMnhXH = YUZVFkt;
        sh = linb;
    }
    sum[jSOsVjMnhXH] = 0;
    for (i = jSOsVjMnhXH; i > sh; i = i - 1) {
        sum[i - 1] = 0;
        sum[i] = FhujlF0pi (d [i]) +FhujlF0pi(c [i]) +sum[i];
        if (sum[i] >= 10) {
            sum[i] -= 10;
            sum[i - 1]++;
        };
    }
    if (sh == 0) {
        if (sum[0] == 1)
            printf ("1");
        {
            i = 1;
            while (i <= jSOsVjMnhXH) {
                printf ("%d", sum[i]);
                i = i + 1;
            };
        }
        printf ("\n");
    }
    else {
        if (sum[sh - 1] == 1)
            printf ("1");
        for (i = sh; i <= jSOsVjMnhXH; i = i + 1)
            printf ("%d", sum[i]);
    }
    return 0;
}

