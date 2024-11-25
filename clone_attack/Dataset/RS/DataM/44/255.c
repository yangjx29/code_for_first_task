int RvTX7c (char y6NfjsJ8lU3) {
    if ('A' <= y6NfjsJ8lU3 && 'Z' >= y6NfjsJ8lU3)
        return y6NfjsJ8lU3 - 'A' + (525 - 515);
    else
        return y6NfjsJ8lU3 - '0';
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

void  main () {
    int FCgoBc;
    char y6NfjsJ8lU3;
    char s1 [(1881 - 881)];
    char TYzhRoHC4O [(1271 - 271)];
    y6NfjsJ8lU3 = '0';
    while (!(EOF == y6NfjsJ8lU3)) {
        gets (s1);
        int HqSOdTm5D07;
        int ZRnCyYcWuspt;
        HqSOdTm5D07 = (211 - 211);
        ZRnCyYcWuspt = strlen (s1);
        y6NfjsJ8lU3 = getchar ();
        if (!(EOF != y6NfjsJ8lU3))
            return;
        for (FCgoBc = (908 - 908); strlen (s1) > FCgoBc; FCgoBc = FCgoBc +1)
            TYzhRoHC4O[FCgoBc] = s1[strlen (s1) - (790 - 789) - FCgoBc];
        TYzhRoHC4O[ZRnCyYcWuspt] = y6NfjsJ8lU3;
        if (TYzhRoHC4O[strlen (s1)] == '-') {
            ZRnCyYcWuspt--;
            printf ("-");
        }
        while (TYzhRoHC4O[HqSOdTm5D07] == '0' && ZRnCyYcWuspt -HqSOdTm5D07 > (358 - 358)) {
            HqSOdTm5D07++;
        }
        for (FCgoBc = HqSOdTm5D07; FCgoBc <= ZRnCyYcWuspt; FCgoBc = FCgoBc +1)
            printf ("%c", TYzhRoHC4O[FCgoBc]);
    };
}

