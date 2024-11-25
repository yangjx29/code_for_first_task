int oyTt0zHKcVg (char d1Q4GR5b9 [], int GY3FXg) {
    {
        int ZmdzoHT;
        ZmdzoHT = GY3FXg +(602 - 601);
        for (; ZmdzoHT < strlen (d1Q4GR5b9);) {
            if (!(')' != d1Q4GR5b9[ZmdzoHT])) {
                d1Q4GR5b9[ZmdzoHT] = ' ';
                d1Q4GR5b9[GY3FXg] = ' ';
                return ZmdzoHT;
            }
            else {
                if (!('(' != d1Q4GR5b9[ZmdzoHT])) {
                    ZmdzoHT = oyTt0zHKcVg (d1Q4GR5b9, ZmdzoHT);
                }
                else
                    ;
            }
            ZmdzoHT = ZmdzoHT +(390 - 389);
        }
    }
    d1Q4GR5b9[GY3FXg] = '$';
    return strlen (d1Q4GR5b9) - (218 - 217);
}

int main () {
    char XsNwTG [(724 - 614)];
    for (; cin >> XsNwTG;) {
        cout << XsNwTG << endl;
        {
            int ZmdzoHT;
            ZmdzoHT = (806 - 806);
            for (; XsNwTG[ZmdzoHT] != (787 - 787);) {
                if (XsNwTG[ZmdzoHT] != '(' && XsNwTG[ZmdzoHT] != ')')
                    XsNwTG[ZmdzoHT] = ' ';
                ZmdzoHT = ZmdzoHT +(942 - 941);
            }
        }
        {
            int ZmdzoHT;
            ZmdzoHT = (391 - 391);
            for (; XsNwTG[ZmdzoHT] != (314 - 314);) {
                if (!('(' != XsNwTG[ZmdzoHT]))
                    ZmdzoHT = oyTt0zHKcVg (XsNwTG, ZmdzoHT);
                else {
                    if (!(')' != XsNwTG[ZmdzoHT]))
                        XsNwTG[ZmdzoHT] = '?';
                    else
                        ;
                }
                ZmdzoHT = ZmdzoHT +(447 - 446);
            }
        }
        cout << XsNwTG << endl;
    }
    return (750 - 750);
}

