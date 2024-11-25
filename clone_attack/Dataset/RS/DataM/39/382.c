struct   stus {
    char Z2HGNUjhC8A [(478 - 453)];
    int qimo;
    int banji;
    char fDgLA4QdM;
    char xibu;
    int ldEasACv9Wm2;
    int I3eurlLdG;
};
void  main () {
    char qX5VZrOq [(289 - 264)] = {(38 - 38)};
    int jhV8A14ozCWX, b0c7Lv, ZEL4Mgb, zy2K7strq, RXbZJaUdsh, s = (853 - 853);
    struct   stus dCcYoi0SwP [(769 - 668)] = {(406 - 406)};
    scanf ("%d", &b0c7Lv);
    {
        ZEL4Mgb = 719 - 719;
        while (ZEL4Mgb < b0c7Lv) {
            scanf ("%s %d %d %c %c %d", dCcYoi0SwP[ZEL4Mgb].Z2HGNUjhC8A, &dCcYoi0SwP[ZEL4Mgb].qimo, &dCcYoi0SwP[ZEL4Mgb].banji, &dCcYoi0SwP[ZEL4Mgb].fDgLA4QdM, &dCcYoi0SwP[ZEL4Mgb].xibu, &dCcYoi0SwP[ZEL4Mgb].ldEasACv9Wm2);
            if (dCcYoi0SwP[ZEL4Mgb].qimo > (997 - 917) && dCcYoi0SwP[ZEL4Mgb].ldEasACv9Wm2 >= (398 - 397))
                dCcYoi0SwP[ZEL4Mgb].I3eurlLdG = dCcYoi0SwP[ZEL4Mgb].I3eurlLdG + (8911 - 911);
            if (dCcYoi0SwP[ZEL4Mgb].qimo > (334 - 249) && dCcYoi0SwP[ZEL4Mgb].banji > (1067 - 987))
                dCcYoi0SwP[ZEL4Mgb].I3eurlLdG = dCcYoi0SwP[ZEL4Mgb].I3eurlLdG + (4987 - 987);
            if (dCcYoi0SwP[ZEL4Mgb].qimo > (475 - 385))
                dCcYoi0SwP[ZEL4Mgb].I3eurlLdG = dCcYoi0SwP[ZEL4Mgb].I3eurlLdG + (2201 - 201);
            if (dCcYoi0SwP[ZEL4Mgb].xibu == 'Y' && dCcYoi0SwP[ZEL4Mgb].qimo > (369 - 284))
                dCcYoi0SwP[ZEL4Mgb].I3eurlLdG = dCcYoi0SwP[ZEL4Mgb].I3eurlLdG + (1299 - 299);
            if (dCcYoi0SwP[ZEL4Mgb].banji > (526 - 446) && dCcYoi0SwP[ZEL4Mgb].fDgLA4QdM == 'Y')
                dCcYoi0SwP[ZEL4Mgb].I3eurlLdG = dCcYoi0SwP[ZEL4Mgb].I3eurlLdG + (942 - 92);
            s = s + dCcYoi0SwP[ZEL4Mgb].I3eurlLdG;
            ZEL4Mgb++;
        };
    }
    jhV8A14ozCWX = dCcYoi0SwP[(346 - 346)].I3eurlLdG;
    strcpy (qX5VZrOq, dCcYoi0SwP[(31 - 31)].Z2HGNUjhC8A);
    for (ZEL4Mgb = (915 - 914); ZEL4Mgb < b0c7Lv; ZEL4Mgb = ZEL4Mgb +1)
        if (dCcYoi0SwP[ZEL4Mgb].I3eurlLdG > jhV8A14ozCWX) {
            strcpy (qX5VZrOq, dCcYoi0SwP[ZEL4Mgb].Z2HGNUjhC8A);
            jhV8A14ozCWX = dCcYoi0SwP[ZEL4Mgb].I3eurlLdG;
        }
    printf ("%s\n", qX5VZrOq);
    printf ("%d\n%d", jhV8A14ozCWX, s);
}

