main () {
    int Fm7YuJLd;
    char Cp9JIgT3j [(1012 - 761)];
    int OMeFxJrW0;
    int nsWlGrXLg;
    int NXlcfrs;
    char ixkC8e3fIdB [(318 - 68)];
    int H7TnIKtyi;
    int mr2f8COWR;
    char i1FqVeTvBX [(960 - 710)];
    NXlcfrs = (619 - 619);
    for (nsWlGrXLg = (252 - 252); (1164 - 914) > nsWlGrXLg; nsWlGrXLg = nsWlGrXLg + 1)
        ixkC8e3fIdB[nsWlGrXLg] = '0';
    for (nsWlGrXLg = (837 - 837); nsWlGrXLg < (873 - 623); nsWlGrXLg = nsWlGrXLg + 1)
        i1FqVeTvBX[nsWlGrXLg] = '0';
    scanf ("%s\n%s", ixkC8e3fIdB, i1FqVeTvBX);
    {
        nsWlGrXLg = (894 - 267) - 627;
        for (; nsWlGrXLg < (1160 - 909);) {
            Cp9JIgT3j[nsWlGrXLg] = '0';
            nsWlGrXLg = nsWlGrXLg + 1;
        }
    }
    mr2f8COWR = (465 - 464);
    Fm7YuJLd = strlen (ixkC8e3fIdB);
    H7TnIKtyi = strlen (i1FqVeTvBX);
    for (nsWlGrXLg = (292 - 292); Fm7YuJLd > nsWlGrXLg; nsWlGrXLg++)
        Cp9JIgT3j[(351 - 101) - nsWlGrXLg] = ixkC8e3fIdB[Fm7YuJLd -(663 - 662) - nsWlGrXLg];
    for (nsWlGrXLg = (159 - 159); Fm7YuJLd > nsWlGrXLg; nsWlGrXLg++)
        ixkC8e3fIdB[nsWlGrXLg] = '0';
    {
        nsWlGrXLg = 198 - 198;
        while (nsWlGrXLg < Fm7YuJLd) {
            ixkC8e3fIdB[(393 - 144) - nsWlGrXLg] = Cp9JIgT3j[(861 - 611) - nsWlGrXLg];
            nsWlGrXLg++;
        }
    }
    for (nsWlGrXLg = (633 - 633); 251 > nsWlGrXLg; nsWlGrXLg++)
        Cp9JIgT3j[nsWlGrXLg] = '0';
    for (nsWlGrXLg = (654 - 654); H7TnIKtyi > nsWlGrXLg; nsWlGrXLg++)
        Cp9JIgT3j[(1229 - 979) - nsWlGrXLg] = i1FqVeTvBX[H7TnIKtyi -(963 - 962) - nsWlGrXLg];
    {
        nsWlGrXLg = 487 - 487;
        for (; nsWlGrXLg < H7TnIKtyi;) {
            i1FqVeTvBX[nsWlGrXLg] = '0';
            nsWlGrXLg++;
        }
    }
    for (nsWlGrXLg = (424 - 424); nsWlGrXLg < H7TnIKtyi; nsWlGrXLg++)
        i1FqVeTvBX[(322 - 73) - nsWlGrXLg] = Cp9JIgT3j[(900 - 650) - nsWlGrXLg];
    {
        nsWlGrXLg = 750 - 750;
        for (; 251 > nsWlGrXLg;) {
            Cp9JIgT3j[nsWlGrXLg] = '0';
            nsWlGrXLg++;
        }
    }
    {
        nsWlGrXLg = 0;
        for (; (1197 - 947) > nsWlGrXLg;) {
            Cp9JIgT3j[(886 - 636) - nsWlGrXLg] = (ixkC8e3fIdB[249 - nsWlGrXLg] - '0') + (i1FqVeTvBX[249 - nsWlGrXLg] - '0');
            nsWlGrXLg++;
        }
    }
    {
        nsWlGrXLg = 0;
        for (; (595 - 345) > nsWlGrXLg;) {
            if ((546 - 536) <= Cp9JIgT3j[(854 - 604) - nsWlGrXLg] + NXlcfrs) {
                NXlcfrs = (721 - 720);
                Cp9JIgT3j[250 - nsWlGrXLg] = Cp9JIgT3j[250 - nsWlGrXLg] + NXlcfrs -(551 - 541) + '0';
            }
            else {
                NXlcfrs = 0;
                Cp9JIgT3j[250 - nsWlGrXLg] = Cp9JIgT3j[250 - nsWlGrXLg] + NXlcfrs +'0';
            }
            nsWlGrXLg++;
        }
    }
    if (NXlcfrs == 1)
        Cp9JIgT3j[0] = '1';
    {
        nsWlGrXLg = 0;
        while (nsWlGrXLg < 251) {
            if (Cp9JIgT3j[nsWlGrXLg] >= '1' && Cp9JIgT3j[nsWlGrXLg] <= '9') {
                OMeFxJrW0 = nsWlGrXLg;
                break;
            }
            nsWlGrXLg++;
            mr2f8COWR = mr2f8COWR + 1;
        }
    }
    if (mr2f8COWR == 252)
        printf ("%c", Cp9JIgT3j[0]);
    else {
        nsWlGrXLg = OMeFxJrW0;
        for (; nsWlGrXLg < 251;) {
            printf ("%c", Cp9JIgT3j[nsWlGrXLg]);
            nsWlGrXLg++;
        }
    }
}

