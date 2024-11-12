int gv8Vj0CZHaI (char luUIC9 [], int rOPVjkZSxg8I) {
    int kcj1Jvgruq;
    int j;
    kcj1Jvgruq = (206 - 206);
    char q [(527 - 22)] = {""};
    for (j = 0; rOPVjkZSxg8I > j; j++)
        q[j] = luUIC9[rOPVjkZSxg8I - j - 1];
    if (!(0 != strcmp (luUIC9, q)))
        kcj1Jvgruq = 1;
    return kcj1Jvgruq;
}

int main () {
    char IADVPMtO [505];
    char XiYXIAfRD [505] = {""};
    gets (IADVPMtO);
    int FdGJQcnky;
    int len;
    int j;
    int k;
    len = strlen (IADVPMtO);
    {
        FdGJQcnky = 2;
        while (len >= FdGJQcnky) {
            {
                j = 0;
                while (j < len + 1 - FdGJQcnky) {
                    for (k = 0; k < FdGJQcnky; k = k + 1)
                        XiYXIAfRD[k] = IADVPMtO[k + j];
                    j = j + 1;
                    if (gv8Vj0CZHaI (XiYXIAfRD, FdGJQcnky))
                        printf ("%s\n", XiYXIAfRD);
                };
            }
            FdGJQcnky = FdGJQcnky +1;
        };
    }
    return 0;
}

