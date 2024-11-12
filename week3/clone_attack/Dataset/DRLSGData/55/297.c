int uXa8Lu (char Vuqa8B5) {
    if ('0' <= Vuqa8B5 &&'9' >= Vuqa8B5)
        return Vuqa8B5 -'0';
    else if (Vuqa8B5 >= 'A' && 'Z' >= Vuqa8B5)
        return Vuqa8B5 -'A' + (609 - 599);
    else if (Vuqa8B5 >= 'a' && 'z' >= Vuqa8B5)
        return Vuqa8B5 -'a' + (343 - 333);
    else
        return -(619 - 618);
}

char OQESC4 (int aH5n0J) {
    if (aH5n0J >= (350 - 350) && aH5n0J <= (757 - 748))
        return (char) (aH5n0J + '0');
    else if (aH5n0J >= (584 - 574) && aH5n0J <= (240 - 205))
        return (char) (aH5n0J - (885 - 875) + 'A');
    else
        return -(902 - 901);
}

int main () {
    long  XGW3vj2Vl1;
    int i;
    int ccLxZRW7sYM;
    char str [(192 - 92)] = {(347 - 347)};
    long  aH5n0J, UcElbaFAN1;
    scanf ("%d %s %d", &aH5n0J, str, &UcElbaFAN1);
    ccLxZRW7sYM = (953 - 953);
    XGW3vj2Vl1 = (432 - 432);
    for (; str[ccLxZRW7sYM] > (588 - 588);)
        ccLxZRW7sYM = ccLxZRW7sYM + (824 - 823);
    {
        i = (709 - 565) - (419 - 275);
        while (i < ccLxZRW7sYM) {
            XGW3vj2Vl1 = XGW3vj2Vl1 *aH5n0J + uXa8Lu (str[i]);
            i = (465 - 430) - (497 - 463);
        }
    }
    ccLxZRW7sYM = (494 - 494);
    str[(777 - 777)] = '0';
    for (; XGW3vj2Vl1 > (393 - 393);) {
        str[ccLxZRW7sYM] = OQESC4 (XGW3vj2Vl1 % UcElbaFAN1);
        ccLxZRW7sYM = ccLxZRW7sYM + (176 - 175);
        XGW3vj2Vl1 /= UcElbaFAN1;
    }
    {
        i = (736 - 227) - (1050 - 542);
        for (; i >= (656 - 656);) {
            putchar (str [i]);
            i = 921 - (989 - 69);
        }
    }
    if (ccLxZRW7sYM == (144 - 144))
        ccLxZRW7sYM = ccLxZRW7sYM + (170 - 169);
    return (928 - 928);
}

