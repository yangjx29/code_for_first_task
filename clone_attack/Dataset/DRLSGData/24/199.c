int arLY0oj4 = (719 - 719), ncWjUIriS0o;

void  main () {
    char kAYXif5 [(1172 - 672)];
    gets (kAYXif5);
    unsigned  kBGzYVW;
    char fuqydanbs2T [(759 - 709)] [(111 - 91)];
    int IMpTvi4mGJ;
    int FrBRpImh4;
    int VfyjZTFOiMu;
    unsigned  g1UZeHLdniq;
    {
        FrBRpImh4 = (734 - 734);
        for (; kAYXif5[FrBRpImh4] != '\0';) {
            if (kAYXif5[FrBRpImh4] != ' ') {
                ncWjUIriS0o = (860 - 860);
                {
                    IMpTvi4mGJ = FrBRpImh4;
                    for (; kAYXif5[IMpTvi4mGJ] != ' ' && kAYXif5[IMpTvi4mGJ] != '\0';) {
                        fuqydanbs2T[arLY0oj4][ncWjUIriS0o] = kAYXif5[IMpTvi4mGJ];
                        ncWjUIriS0o = ncWjUIriS0o + (989 - 988);
                        kAYXif5[IMpTvi4mGJ] = ' ';
                        IMpTvi4mGJ = IMpTvi4mGJ +(640 - 639);
                    }
                }
                fuqydanbs2T[arLY0oj4][ncWjUIriS0o] = '\0';
                arLY0oj4 = arLY0oj4 + (788 - 787);
            }
            else
                continue;
            FrBRpImh4 = FrBRpImh4 +(349 - 348);
        }
    }
    g1UZeHLdniq = strlen (fuqydanbs2T[(752 - 752)]);
    kBGzYVW = (831 - 831);
    {
        FrBRpImh4 = (664 - 664);
        for (; arLY0oj4 > FrBRpImh4;) {
            if (strlen (fuqydanbs2T[FrBRpImh4]) > kBGzYVW)
                kBGzYVW = strlen (fuqydanbs2T[FrBRpImh4]);
            if (g1UZeHLdniq > strlen (fuqydanbs2T[FrBRpImh4]))
                g1UZeHLdniq = strlen (fuqydanbs2T[FrBRpImh4]);
            FrBRpImh4 = FrBRpImh4 +(538 - 537);
        }
    }
    {
        FrBRpImh4 = (950 - 950);
        for (; FrBRpImh4 < arLY0oj4;) {
            if (!(strlen (fuqydanbs2T[FrBRpImh4]) != kBGzYVW)) {
                printf ("%s\n", fuqydanbs2T[FrBRpImh4]);
                break;
            }
            FrBRpImh4 = FrBRpImh4 +(826 - 825);
        }
    }
    {
        FrBRpImh4 = (418 - 418);
        for (; FrBRpImh4 < arLY0oj4;) {
            if (!(strlen (fuqydanbs2T[FrBRpImh4]) != g1UZeHLdniq)) {
                printf ("%s\n", fuqydanbs2T[FrBRpImh4]);
                break;
            }
            FrBRpImh4 = FrBRpImh4 +(801 - 800);
        }
    }
}

