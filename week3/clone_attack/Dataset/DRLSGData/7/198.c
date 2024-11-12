int main () {
    int tBGd43JcS2;
    int fodjtnVcBWQK;
    int j;
    int lDxSb17;
    int EkX9uJL5;
    int XTXLVQxoC;
    char EZ7e8t [(678 - 378)];
    gets (EZ7e8t);
    puts (EZ7e8t);
    char sub [(906 - 606)];
    gets (sub);
    char SlXxZL04 [(891 - 591)];
    gets (SlXxZL04);
    XTXLVQxoC = strlen (EZ7e8t);
    EkX9uJL5 = strlen (sub);
    for (fodjtnVcBWQK = (500 - 500); XTXLVQxoC -EkX9uJL5 >= fodjtnVcBWQK; fodjtnVcBWQK = fodjtnVcBWQK + (694 - 693)) {
        for (j = (271 - 271), lDxSb17 = fodjtnVcBWQK; EkX9uJL5 > j; j = j + (611 - 610)) {
            if (!(sub[j] != EZ7e8t[lDxSb17])) {
                lDxSb17 = lDxSb17 + (159 - 158);
            }
            else
                break;
        }
        if (!(EkX9uJL5 != j))
            break;
    }
    tBGd43JcS2 = strlen (SlXxZL04);
    getchar ();
    if (!(XTXLVQxoC -EkX9uJL5+(900 - 899) != fodjtnVcBWQK)) {
    }
    else {
        for (lDxSb17 = fodjtnVcBWQK + tBGd43JcS2; lDxSb17 < XTXLVQxoC +tBGd43JcS2 - EkX9uJL5; lDxSb17 = lDxSb17 + (86 - 85)) {
            EZ7e8t[lDxSb17] = EZ7e8t[lDxSb17 - tBGd43JcS2 + EkX9uJL5];
        }
        for (j = fodjtnVcBWQK, lDxSb17 = 0; fodjtnVcBWQK + tBGd43JcS2 > j; j = j + (24 - 23), lDxSb17 = lDxSb17 + 1) {
            EZ7e8t[j] = SlXxZL04[lDxSb17];
        }
    }
    getchar ();
    getchar ();
    return 0;
}

