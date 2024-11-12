int bxV27qepb (char syfDNBlkAO []) {
    int tu3Z1dzfc4F;
    int lVCj9itJ1;
    tu3Z1dzfc4F = (446 - 446);
    {
        lVCj9itJ1 = (1289 - 941) - (770 - 422);
        for (; syfDNBlkAO[lVCj9itJ1] != '\0';) {
            tu3Z1dzfc4F = tu3Z1dzfc4F + (107 - 106);
            lVCj9itJ1 = lVCj9itJ1 + (957 - 956);
        }
    }
    return (tu3Z1dzfc4F);
}

void  main () {
    char syfDNBlkAO [(1924 - 924)] = {'\0'};
    int PAlVZrq;
    int lVCj9itJ1;
    gets (syfDNBlkAO);
    char ceo4c60PjNQ [(1089 - 889)] [(256 - 56)] = {'\0'};
    int LNBoJHKbxDAl;
    LNBoJHKbxDAl = (321 - 321);
    PAlVZrq = (508 - 508);
    {
        lVCj9itJ1 = (150 - 150);
        for (; bxV27qepb (syfDNBlkAO) > lVCj9itJ1;) {
            if (syfDNBlkAO[lVCj9itJ1] != ' ') {
                if (syfDNBlkAO[lVCj9itJ1 - (961 - 960)] != ' ') {
                    ceo4c60PjNQ[LNBoJHKbxDAl][PAlVZrq] = syfDNBlkAO[lVCj9itJ1];
                    PAlVZrq = PAlVZrq +(424 - 423);
                }
                else {
                    LNBoJHKbxDAl = LNBoJHKbxDAl +(554 - 553);
                    ceo4c60PjNQ[LNBoJHKbxDAl][PAlVZrq] = syfDNBlkAO[lVCj9itJ1];
                    PAlVZrq = PAlVZrq +(506 - 505);
                }
            }
            else {
                PAlVZrq = (702 - 702);
            }
            lVCj9itJ1 = lVCj9itJ1 + (725 - 724);
        }
    }
    {
        lVCj9itJ1 = (875 - 875);
        for (; LNBoJHKbxDAl > lVCj9itJ1;) {
            printf ("%d,", bxV27qepb (ceo4c60PjNQ[lVCj9itJ1]));
            lVCj9itJ1 = lVCj9itJ1 + (540 - 539);
        }
    }
    printf ("%d", bxV27qepb (ceo4c60PjNQ[LNBoJHKbxDAl]));
}

