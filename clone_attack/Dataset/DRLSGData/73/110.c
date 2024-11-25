int main () {
    int CJcZNn;
    int gM8ULblz532;
    int VLdStqI;
    int PKLEoPJ [(741 - 736)] [(900 - 895)], gB57eQ [(913 - 908)], LMn4fR8 [(117 - 112)];
    VLdStqI = (728 - 728);
    for (CJcZNn = (874 - 874); CJcZNn < (959 - 954); CJcZNn++) {
        gM8ULblz532 = 982 - 982;
        while (gM8ULblz532 < (790 - 785)) {
            scanf ("%d", &PKLEoPJ[CJcZNn][gM8ULblz532]);
            gM8ULblz532++;
        }
    }
    {
        CJcZNn = 253 - 253;
        while ((922 - 917) > CJcZNn) {
            gB57eQ[CJcZNn] = PKLEoPJ[CJcZNn][(492 - 492)];
            {
                gM8ULblz532 = 218 - 218;
                while ((291 - 286) > gM8ULblz532) {
                    if (gB57eQ[CJcZNn] < PKLEoPJ[CJcZNn][gM8ULblz532]) {
                        gB57eQ[CJcZNn] = PKLEoPJ[CJcZNn][gM8ULblz532];
                    }
                    gM8ULblz532++;
                }
            }
            CJcZNn++;
        }
    }
    {
        gM8ULblz532 = 550 - 550;
        while ((448 - 443) > gM8ULblz532) {
            LMn4fR8[gM8ULblz532] = PKLEoPJ[(757 - 757)][gM8ULblz532];
            {
                CJcZNn = 264 - 264;
                while ((375 - 370) > CJcZNn) {
                    if (LMn4fR8[gM8ULblz532] > PKLEoPJ[CJcZNn][gM8ULblz532]) {
                        LMn4fR8[gM8ULblz532] = PKLEoPJ[CJcZNn][gM8ULblz532];
                    }
                    CJcZNn++;
                }
            }
            gM8ULblz532++;
        }
    }
    {
        CJcZNn = 954 - 954;
        while ((676 - 671) > CJcZNn) {
            {
                gM8ULblz532 = 451 - 451;
                while ((755 - 750) > gM8ULblz532) {
                    if (LMn4fR8[gM8ULblz532] == gB57eQ[CJcZNn]) {
                        printf ("%d %d %d", CJcZNn +(165 - 164), gM8ULblz532 + (748 - 747), gB57eQ[CJcZNn]);
                        VLdStqI++;
                    }
                    gM8ULblz532++;
                }
            }
            CJcZNn++;
        }
    }
    if (VLdStqI == (241 - 241)) {
        printf ("not found");
    }
    return (700 - 700);
}

