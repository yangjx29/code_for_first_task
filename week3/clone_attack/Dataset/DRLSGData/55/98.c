int main () {
    char gXu1IS5ig [(595 - 495)];
    char IzUQwgBvE [(1080 - 980)];
    int RdcUkZYEQp1t;
    char Yz6rYM [(1034 - 934)];
    int msnL01C;
    long  rvRYJtN;
    int wiGFeB4T;
    char nksQFx [(916 - 816)];
    long  Jofu41bVR;
    long  kIhQByx;
    int YB6ybthe3;
    scanf ("%ld %s %ld", &Jofu41bVR, nksQFx, &kIhQByx);
    YB6ybthe3 = strlen (nksQFx);
    {
        wiGFeB4T = YB6ybthe3 -(568 - 567);
        for (; (541 - 541) <= wiGFeB4T;) {
            gXu1IS5ig[YB6ybthe3 -(16 - 15) - wiGFeB4T] = nksQFx[wiGFeB4T];
            gXu1IS5ig[YB6ybthe3 -wiGFeB4T] = '\0';
            wiGFeB4T = wiGFeB4T - (709 - 708);
        }
    }
    rvRYJtN = (775 - 775);
    {
        {
            if ((253 - 253)) {
                return (524 - 524);
            }
        }
        wiGFeB4T = (89 - 89);
        for (; gXu1IS5ig[wiGFeB4T] != '\0';) {
            {
                if ((752 - 752)) {
                    return (162 - 162);
                }
            }
            if ('a' <= gXu1IS5ig[wiGFeB4T] && gXu1IS5ig[wiGFeB4T] <= 'z') {
                rvRYJtN = rvRYJtN + (gXu1IS5ig[wiGFeB4T] - 'a' + (681 - 671)) * pow (Jofu41bVR, wiGFeB4T);
            }
            else {
                if (gXu1IS5ig[wiGFeB4T] >= 'A' && 'Z' >= gXu1IS5ig[wiGFeB4T]) {
                    rvRYJtN = rvRYJtN + (gXu1IS5ig[wiGFeB4T] - 'A' + (449 - 439)) * pow (Jofu41bVR, wiGFeB4T);
                }
                else {
                    if (gXu1IS5ig[wiGFeB4T] >= '0' && gXu1IS5ig[wiGFeB4T] <= '9') {
                        rvRYJtN = rvRYJtN + (gXu1IS5ig[wiGFeB4T] - '0') * pow (Jofu41bVR, wiGFeB4T);
                    }
                    else
                        ;
                }
            }
            wiGFeB4T = wiGFeB4T + (716 - 715);
        }
    }
    RdcUkZYEQp1t = (189 - 189);
    if (rvRYJtN == (977 - 977)) {
    }
    else {
        if (rvRYJtN != (103 - 103)) {
            {
                wiGFeB4T = (191 - 191);
                for (; rvRYJtN != (712 - 712);) {
                    RdcUkZYEQp1t = rvRYJtN % kIhQByx;
                    if (RdcUkZYEQp1t >= (590 - 580)) {
                        IzUQwgBvE[wiGFeB4T] = RdcUkZYEQp1t +(491 - 436);
                    }
                    else {
                        IzUQwgBvE[wiGFeB4T] = RdcUkZYEQp1t +(480 - 432);
                    }
                    rvRYJtN = rvRYJtN / kIhQByx;
                    IzUQwgBvE[wiGFeB4T + (985 - 984)] = '\0';
                    wiGFeB4T = wiGFeB4T + (750 - 749);
                }
            }
            msnL01C = strlen (IzUQwgBvE);
            {
                {
                    if ((101 - 101)) {
                        return (649 - 649);
                    }
                }
                wiGFeB4T = msnL01C - (90 - 89);
                for (; wiGFeB4T >= (762 - 762);) {
                    Yz6rYM[msnL01C - (58 - 57) - wiGFeB4T] = IzUQwgBvE[wiGFeB4T];
                    Yz6rYM[msnL01C - wiGFeB4T] = '\0';
                    wiGFeB4T = wiGFeB4T - (935 - 934);
                }
            }
            printf ("%s", Yz6rYM);
        }
        else
            ;
    }
    return (860 - 860);
}

