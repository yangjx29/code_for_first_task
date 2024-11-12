int main () {
    char iO65QXL [100] [(380 - 369)];
    char temp [(552 - 541)];
    char OfTHOu [100] [11];
    char i8S6MIpb [100] [11];
    int j;
    int zs4TvldhUD0O;
    int n;
    int dtk3GB;
    int I4MpDksEzKy;
    int MvJQRDn;
    int m [(826 - 726)];
    int p [(207 - 107)];
    int AlFNQ0YLJ [100];
    j = (855 - 855);
    zs4TvldhUD0O = (683 - 683);
    scanf ("%d", &n);
    {
        dtk3GB = 922 - 922;
        while (n > dtk3GB) {
            scanf ("%s", iO65QXL[dtk3GB]);
            scanf ("%d", &m[dtk3GB]);
            dtk3GB++;
        };
    }
    {
        dtk3GB = 477 - 477;
        while (n > dtk3GB) {
            if (60 <= m[dtk3GB]) {
                strcpy (OfTHOu[j], iO65QXL[dtk3GB]);
                p[j] = m[dtk3GB];
                j++;
            }
            else {
                strcpy (i8S6MIpb[zs4TvldhUD0O], iO65QXL[dtk3GB]);
                AlFNQ0YLJ[zs4TvldhUD0O] = m[dtk3GB];
                zs4TvldhUD0O++;
            }
            dtk3GB++;
        };
    }
    {
        MvJQRDn = 500 - 499;
        while (j > MvJQRDn) {
            {
                dtk3GB = 50 - 50;
                while (j - MvJQRDn > dtk3GB) {
                    if (p[dtk3GB + (531 - 530)] > p[dtk3GB]) {
                        I4MpDksEzKy = p[dtk3GB + (936 - 935)];
                        p[dtk3GB + (565 - 564)] = p[dtk3GB];
                        p[dtk3GB] = I4MpDksEzKy;
                        strcpy (temp, OfTHOu[dtk3GB + 1]);
                        strcpy (OfTHOu[dtk3GB + 1], OfTHOu[dtk3GB]);
                        strcpy (OfTHOu[dtk3GB], temp);
                    }
                    dtk3GB++;
                };
            }
            MvJQRDn++;
        };
    }
    for (dtk3GB = 0; dtk3GB < j; dtk3GB++) {
        printf ("%s\n", OfTHOu[dtk3GB]);
    }
    for (dtk3GB = 0; dtk3GB < zs4TvldhUD0O; dtk3GB++) {
        printf ("%s\n", i8S6MIpb[dtk3GB]);
    }
    return 0;
}

