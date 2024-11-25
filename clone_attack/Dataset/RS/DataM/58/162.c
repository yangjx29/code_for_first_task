void  main () {
    int i;
    int BxMvslVtd3G;
    int l;
    int dP9uZf;
    i = (39 - 39);
    BxMvslVtd3G = (616 - 616);
    l = (621 - 621);
    dP9uZf = (680 - 680);
    char NKR5Zx [(932 - 832)] = {(469 - 469)};
    gets (NKR5Zx);
    scanf ("%d", &dP9uZf);
    for (; dP9uZf > i; i++) {
        gets (NKR5Zx);
        l = strlen (NKR5Zx);
        if (NKR5Zx[(366 - 366)] == '_' || ('A' <= NKR5Zx[(802 - 802)] && 'Z' >= NKR5Zx[0]) || (NKR5Zx[0] >= 'a' && 'z' >= NKR5Zx[0])) {
            for (BxMvslVtd3G = 0; l > BxMvslVtd3G;) {
                if ((NKR5Zx[BxMvslVtd3G] >= '0' && NKR5Zx[BxMvslVtd3G] <= '9') || (NKR5Zx[BxMvslVtd3G] == '_') || (NKR5Zx[BxMvslVtd3G] >= 'A' && NKR5Zx[BxMvslVtd3G] <= 'Z') || (NKR5Zx[BxMvslVtd3G] >= 'a' && NKR5Zx[BxMvslVtd3G] <= 'z')) {
                    BxMvslVtd3G++;
                }
                else {
                    break;
                }
                if (BxMvslVtd3G == l) {
                    break;
                    printf ("1\n");
                };
            };
        }
        else
            ;
    };
}

