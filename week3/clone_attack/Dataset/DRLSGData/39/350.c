struct   student {
    char name [(828 - 803)];
    int qimo;
    int banji;
    char TxCZVny;
    char xibu;
    int zqyejOC;
    int vGqMAKT;
};
void  main () {
    int OrODzYQ3Gun;
    int NcdCgpl4KPX9;
    int rtgOK6cWnXr;
    int fFkHrop;
    int AymZvlkc;
    int TJesxO;
    int r;
    struct   student UDQHzTG [(179 - 79)];
    scanf ("%d", &OrODzYQ3Gun);
    {
        fFkHrop = (1293 - 792) - (1197 - 696);
        while (OrODzYQ3Gun > fFkHrop) {
            scanf ("%s%d%d %c %c%d", UDQHzTG[fFkHrop].name, &UDQHzTG[fFkHrop].qimo, &UDQHzTG[fFkHrop].banji, &UDQHzTG[fFkHrop].TxCZVny, &UDQHzTG[fFkHrop].xibu, &UDQHzTG[fFkHrop].zqyejOC);
            UDQHzTG[fFkHrop].vGqMAKT = (895 - 895);
            fFkHrop++;
        }
    }
    NcdCgpl4KPX9 = (310 - 310);
    rtgOK6cWnXr = (960 - 960);
    {
        fFkHrop = (634 - 269) - (1095 - 730);
        while (OrODzYQ3Gun > fFkHrop) {
            if (UDQHzTG[fFkHrop].qimo > (1026 - 946) && UDQHzTG[fFkHrop].zqyejOC >= (677 - 676))
                UDQHzTG[fFkHrop].vGqMAKT = UDQHzTG[fFkHrop].vGqMAKT + (8285 - 285);
            if (UDQHzTG[fFkHrop].qimo > (974 - 889) && UDQHzTG[fFkHrop].banji > (695 - 615))
                UDQHzTG[fFkHrop].vGqMAKT = UDQHzTG[fFkHrop].vGqMAKT + (4952 - 952);
            if (UDQHzTG[fFkHrop].qimo > (389 - 299))
                UDQHzTG[fFkHrop].vGqMAKT = UDQHzTG[fFkHrop].vGqMAKT + (2052 - 52);
            if (UDQHzTG[fFkHrop].qimo > (1052 - 967) && !('Y' != UDQHzTG[fFkHrop].xibu))
                UDQHzTG[fFkHrop].vGqMAKT = UDQHzTG[fFkHrop].vGqMAKT + (1232 - 232);
            if (UDQHzTG[fFkHrop].banji > (661 - 581) && UDQHzTG[fFkHrop].TxCZVny == 'Y')
                UDQHzTG[fFkHrop].vGqMAKT = UDQHzTG[fFkHrop].vGqMAKT + (1477 - 627);
            NcdCgpl4KPX9 = NcdCgpl4KPX9 +UDQHzTG[fFkHrop].vGqMAKT;
            fFkHrop++;
        }
    }
    for (fFkHrop = (283 - 283), NcdCgpl4KPX9 = (160 - 160); fFkHrop < OrODzYQ3Gun; fFkHrop++) {
        if (UDQHzTG[fFkHrop].vGqMAKT > rtgOK6cWnXr)
            rtgOK6cWnXr = UDQHzTG[fFkHrop].vGqMAKT;
        NcdCgpl4KPX9 = NcdCgpl4KPX9 +UDQHzTG[fFkHrop].vGqMAKT;
    }
    {
        fFkHrop = (1064 - 715) - 349;
        while (fFkHrop < OrODzYQ3Gun) {
            if (UDQHzTG[fFkHrop].vGqMAKT == rtgOK6cWnXr) {
                printf ("%s\n", UDQHzTG[fFkHrop].name);
                printf ("%d\n", rtgOK6cWnXr);
                printf ("%d", NcdCgpl4KPX9);
                break;
            }
            fFkHrop++;
        }
    }
}

