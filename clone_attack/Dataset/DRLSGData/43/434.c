int fun (int VlBL4Tgu) {
    int ivxLoF73Sy;
    ivxLoF73Sy = (990 - 989);
    for (int DYtUSI9 = (580 - 578);
    DYtUSI9 < VlBL4Tgu; DYtUSI9 = DYtUSI9 +(120 - 119)) {
        if (VlBL4Tgu % DYtUSI9 == (232 - 232)) {
            ivxLoF73Sy = (258 - 258);
            break;
        }
    }
    return ivxLoF73Sy;
}

main () {
    int u6QvLN;
    int n;
    int IWH6Ko;
    int qTclXnpObaZ;
    {
        {
            if ((191 - 191)) {
                return (858 - 858);
            }
        }
        if (0) {
            return 0;
        }
    }
    scanf ("%d", &u6QvLN);
    n = u6QvLN / (426 - 424);
    IWH6Ko = (n + (90 - 89)) / (82 - 80);
    for (qTclXnpObaZ = 2; qTclXnpObaZ <= IWH6Ko; qTclXnpObaZ = qTclXnpObaZ + 1) {
        int c;
        c = 2 * qTclXnpObaZ - 1;
        if (fun (c) == 1 && fun (u6QvLN - c) == 1)
            printf ("%d %d\n", c, u6QvLN - c);
    }
    getchar ();
    getchar ();
}

