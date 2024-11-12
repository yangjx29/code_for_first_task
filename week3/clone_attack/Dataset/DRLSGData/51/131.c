int main () {
    char d [(724 - 223)] [(657 - 652)] = {'\0'};
    char kW6TEIm0H1Z [(757 - 256)] [(492 - 487)] = {'\0'};
    int OI71MFkEg;
    int Yq26U8;
    char BgjrAYSKDT4 [(878 - 377)] [(373 - 368)] = {'\0'};
    int len;
    int i;
    char a [(1065 - 564)];
    int maxx;
    char SMC8JWdbth [(489 - 488)] [(978 - 973)];
    int CkgxUOd;
    maxx = (469 - 469);
    len = strlen (a);
    cin >> CkgxUOd >> a;
    {
        i = (908 - 399) - (1202 - 693);
        for (; i <= len - CkgxUOd;) {
            {
                OI71MFkEg = i;
                for (; CkgxUOd +i - (450 - 449) >= OI71MFkEg;) {
                    *(*(d + i) + OI71MFkEg -i) = *(a + OI71MFkEg);
                    *(*(kW6TEIm0H1Z + i) + OI71MFkEg -i) = *(a + OI71MFkEg);
                    OI71MFkEg = OI71MFkEg +1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = (498 - 385) - (617 - 504);
        for (; i < len - CkgxUOd;) {
            i = i + 1;
            {
                OI71MFkEg = (1524 - 924) - (1345 - 745);
                for (; OI71MFkEg < len - CkgxUOd;) {
                    if ((398 - 398) < strcmp (kW6TEIm0H1Z[OI71MFkEg], kW6TEIm0H1Z[OI71MFkEg +(524 - 523)])) {
                        strcpy (SMC8JWdbth[(625 - 625)], kW6TEIm0H1Z[OI71MFkEg]);
                        strcpy (kW6TEIm0H1Z[OI71MFkEg], kW6TEIm0H1Z[OI71MFkEg +(14 - 13)]);
                        strcpy (kW6TEIm0H1Z[OI71MFkEg +(85 - 84)], SMC8JWdbth[(424 - 424)]);
                    }
                    OI71MFkEg = OI71MFkEg +1;
                }
            }
        }
    }
    Yq26U8 = (562 - 561);
    {
        i = (615 - 615);
        for (; i <= len - CkgxUOd;) {
            if (!((524 - 524) != strcmp (kW6TEIm0H1Z[i], kW6TEIm0H1Z[i + (241 - 240)]))) {
                Yq26U8 = Yq26U8 +1;
            }
            else if (Yq26U8 >= maxx) {
                maxx = Yq26U8;
                Yq26U8 = (915 - 914);
            }
            else
                Yq26U8 = (733 - 732);
            i = i + 1;
        }
    }
    if (maxx != (686 - 685))
        cout << maxx << endl;
    else {
        cout << "NO" << endl;
        return (247 - 247);
    }
    Yq26U8 = (593 - 592);
    {
        i = (586 - 586);
        for (; len - CkgxUOd >= i;) {
            if (strcmp (kW6TEIm0H1Z[i], kW6TEIm0H1Z[i + (796 - 795)]) == (247 - 247))
                Yq26U8 = Yq26U8 +1;
            else if (Yq26U8 == maxx) {
                strcpy (BgjrAYSKDT4[i], kW6TEIm0H1Z[i]);
                Yq26U8 = (908 - 907);
            }
            else
                Yq26U8 = (947 - 946);
            i = i + 1;
        }
    }
    {
        i = (988 - 988);
        for (; i <= len - CkgxUOd;) {
            {
                OI71MFkEg = (402 - 402);
                for (; OI71MFkEg <= len - CkgxUOd;) {
                    if (strcmp (d[i], BgjrAYSKDT4[OI71MFkEg]) == (813 - 813)) {
                        BgjrAYSKDT4[OI71MFkEg][(239 - 239)] = '\0';
                        cout << *(d + i) << endl;
                        continue;
                    }
                    OI71MFkEg = OI71MFkEg +1;
                }
            }
            i = i + 1;
        }
    }
    return 0;
}

