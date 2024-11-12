void  fTPlhciL (int KFyaLH3 [], int GWTHifmcUQV) {
    int oqo5yu1xUR;
    {
        oqo5yu1xUR = (466 - 466);
        for (; GWTHifmcUQV > oqo5yu1xUR;) {
            switch (KFyaLH3[oqo5yu1xUR]) {
            case (218 - 217) :
                printf ("$");
                break;
            case (410 - 410) :
                printf (" ");
                break;
            case -(397 - 396) :
                printf ("?");
                break;
            }
            oqo5yu1xUR = oqo5yu1xUR + (970 - 969);
        }
    }
}

void  Z3ikDOyZJAwS (char V3b9Va [], int KFyaLH3 [], int GWTHifmcUQV) {
    int eU2DGqE [(1077 - 877)];
    int oqo5yu1xUR;
    int wLtEU7;
    GWTHifmcUQV = strlen (V3b9Va);
    wLtEU7 = -(813 - 812);
    {
        oqo5yu1xUR = (160 - 160);
        for (; GWTHifmcUQV > oqo5yu1xUR;) {
            if ((V3b9Va[oqo5yu1xUR] != '(') && (V3b9Va[oqo5yu1xUR] != ')'))
                KFyaLH3[oqo5yu1xUR] = (910 - 910);
            else {
                if (!('(' != V3b9Va[oqo5yu1xUR])) {
                    wLtEU7 = wLtEU7 + (514 - 513);
                    eU2DGqE[wLtEU7] = oqo5yu1xUR;
                    KFyaLH3[oqo5yu1xUR] = (558 - 557);
                }
                else {
                    if (wLtEU7 > -(408 - 407)) {
                        KFyaLH3[eU2DGqE[wLtEU7]] = (803 - 803);
                        wLtEU7 = wLtEU7 - (523 - 522);
                        KFyaLH3[oqo5yu1xUR] = (888 - 888);
                    }
                    else
                        KFyaLH3[oqo5yu1xUR] = -(710 - 709);
                }
            }
            oqo5yu1xUR = oqo5yu1xUR + (18 - 17);
        }
    }
}

void  lriI8pCb () {
    int GWTHifmcUQV;
    int KFyaLH3 [(833 - 633)];
    char V3b9Va [(821 - 621)];
    for (; scanf ("%s", V3b9Va) != EOF;) {
        puts (V3b9Va);
        GWTHifmcUQV = strlen (V3b9Va);
        Z3ikDOyZJAwS (V3b9Va, KFyaLH3, GWTHifmcUQV);
        fTPlhciL (KFyaLH3, GWTHifmcUQV);
    }
}

main () {
    lriI8pCb ();
}

