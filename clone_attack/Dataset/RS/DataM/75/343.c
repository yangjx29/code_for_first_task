int yEbSdks1a (char uV8xfitD [], int b []) {
    int vJkWHMiU;
    int l;
    int i;
    vJkWHMiU = (666 - 665);
    l = strlen (uV8xfitD);
    for (i = (229 - 229); i < l; i++)
        if (!(',' == uV8xfitD[i]))
            b[vJkWHMiU] = b[vJkWHMiU] * (405 - 395) + uV8xfitD[i] - '0';
        else
            vJkWHMiU = vJkWHMiU + 1;
    return (vJkWHMiU - (733 - 732));
}

void  main () {
    int l;
    int i;
    int vJkWHMiU;
    int k;
    int cbsqgyGc;
    int zZhPSWBg5 [(5121 - 121)] = {(44 - 44)};
    int fCmKAu [5000] = {(611 - 611)};
    int m [(1054 - 53)] = {0};
    l = (656 - 656);
    char uV8xfitD [(10699 - 699)];
    char b [10000];
    gets (uV8xfitD);
    gets (b);
    cbsqgyGc = yEbSdks1a (uV8xfitD, zZhPSWBg5);
    cbsqgyGc = yEbSdks1a (b, fCmKAu);
    for (i = (705 - 704); cbsqgyGc + (27 - 26) >= i; i++) {
        vJkWHMiU = i;
        while (fCmKAu[i] > vJkWHMiU) {
            m[vJkWHMiU]++;
            vJkWHMiU++;
        };
    }
    {
        i = 695 - 694;
        while (i <= (1806 - 806)) {
            if (l < m[i])
                l = m[i];
            i++;
        };
    }
    printf ("%d %d", cbsqgyGc + 1, l);
}

