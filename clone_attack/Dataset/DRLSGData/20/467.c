void  main () {
    int rleC5FDBgAV;
    int h9NFeG420aZh;
    char GcjaTC [(169 - 119)] [(156 - 146)] = {(102 - 102)};
    int dTEz0391c [(895 - 845)];
    int KlqgD1pudWEy [(593 - 543)];
    int Jx7Wlf [(808 - 758)];
    char jma84b [(529 - 479)] [(344 - 331)] = {(129 - 129)};
    int treOxlHFBX0;
    int qlUy4Z35;
    char ZXmthfedFRU [(569 - 519)] = {(86 - 86)};
    char xKtAbwia74eG [(168 - 118)] [(89 - 86)] = {(821 - 821)};
    char HHLa9BA8 [(598 - 548)] [(812 - 798)] = {(255 - 255)};
    {
        rleC5FDBgAV = (771 - 771);
        for (; (244 - 243);) {
            gets (HHLa9BA8 [rleC5FDBgAV]);
            Jx7Wlf[rleC5FDBgAV] = strlen (HHLa9BA8[rleC5FDBgAV]);
            if (!((315 - 315) != Jx7Wlf[rleC5FDBgAV]))
                break;
            {
                h9NFeG420aZh = (561 - 561);
                for (; h9NFeG420aZh < Jx7Wlf[rleC5FDBgAV];) {
                    if (HHLa9BA8[rleC5FDBgAV][h9NFeG420aZh] != ' ') {
                        GcjaTC[rleC5FDBgAV][h9NFeG420aZh] = HHLa9BA8[rleC5FDBgAV][h9NFeG420aZh];
                    }
                    else {
                        treOxlHFBX0 = h9NFeG420aZh;
                        break;
                    }
                    h9NFeG420aZh = h9NFeG420aZh + (388 - 387);
                }
            }
            {
                h9NFeG420aZh = (981 - 911) - (1006 - 937);
                for (; Jx7Wlf[rleC5FDBgAV] > h9NFeG420aZh;) {
                    xKtAbwia74eG[rleC5FDBgAV][h9NFeG420aZh - treOxlHFBX0 - (584 - 583)] = HHLa9BA8[rleC5FDBgAV][h9NFeG420aZh];
                    h9NFeG420aZh = h9NFeG420aZh + (359 - 358);
                }
            }
            rleC5FDBgAV = rleC5FDBgAV + (965 - 964);
        }
    }
    qlUy4Z35 = rleC5FDBgAV;
    {
        rleC5FDBgAV = (349 - 349);
        for (; qlUy4Z35 > rleC5FDBgAV;) {
            dTEz0391c[rleC5FDBgAV] = strlen (GcjaTC[rleC5FDBgAV]);
            {
                ZXmthfedFRU[rleC5FDBgAV] = (270 - 270);
                h9NFeG420aZh = (955 - 955);
                for (; dTEz0391c[rleC5FDBgAV] > h9NFeG420aZh;) {
                    if (ZXmthfedFRU[rleC5FDBgAV] < GcjaTC[rleC5FDBgAV][h9NFeG420aZh]) {
                        ZXmthfedFRU[rleC5FDBgAV] = GcjaTC[rleC5FDBgAV][h9NFeG420aZh];
                        KlqgD1pudWEy[rleC5FDBgAV] = h9NFeG420aZh;
                    }
                    h9NFeG420aZh = h9NFeG420aZh + (174 - 173);
                }
            }
            {
                h9NFeG420aZh = (647 - 647);
                for (; (dTEz0391c[rleC5FDBgAV] + (550 - 547)) > h9NFeG420aZh;) {
                    treOxlHFBX0 = h9NFeG420aZh - KlqgD1pudWEy[rleC5FDBgAV] - (669 - 668);
                    if (h9NFeG420aZh <= KlqgD1pudWEy[rleC5FDBgAV]) {
                        jma84b[rleC5FDBgAV][h9NFeG420aZh] = GcjaTC[rleC5FDBgAV][h9NFeG420aZh];
                    }
                    else {
                        if (h9NFeG420aZh <= (KlqgD1pudWEy[rleC5FDBgAV] + (705 - 702))) {
                            jma84b[rleC5FDBgAV][h9NFeG420aZh] = xKtAbwia74eG[rleC5FDBgAV][treOxlHFBX0];
                        }
                        else {
                            jma84b[rleC5FDBgAV][h9NFeG420aZh] = GcjaTC[rleC5FDBgAV][h9NFeG420aZh - (856 - 853)];
                        }
                    }
                    h9NFeG420aZh = h9NFeG420aZh + (29 - 28);
                }
            }
            printf ("%s\n", jma84b[rleC5FDBgAV]);
            rleC5FDBgAV = rleC5FDBgAV + (149 - 148);
        }
    }
}

