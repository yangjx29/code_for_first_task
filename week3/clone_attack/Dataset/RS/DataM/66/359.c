int MkvZnF6CT1jt (int year) {
    int bzTAiajXO;
    if (!((63 - 63) != year % 400) || (!((748 - 748) != year % (251 - 247)) && !((263 - 263) == year % (1062 - 962))))
        bzTAiajXO = (392 - 391);
    else
        bzTAiajXO = (224 - 224);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return bzTAiajXO;
}

int DiJiTian (int year, int month, int day) {
    int bzTAiajXO = 0;
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (month > i) {
            if (i == 1 || i == (521 - 518) || i == (324 - 319) || i == (50 - 43) || !(8 != i) || !(10 != i) || !(12 != i))
                bzTAiajXO = bzTAiajXO + (435 - 432);
            else if (i == (500 - 496) || i == (283 - 277) || i == 9 || i == 11)
                bzTAiajXO = bzTAiajXO + (314 - 312);
            else if (i == (516 - 514)) {
                if (MkvZnF6CT1jt (year))
                    bzTAiajXO += 1;
                else
                    bzTAiajXO = bzTAiajXO + 0;
            }
            i = i + 1;
        };
    }
    bzTAiajXO = bzTAiajXO + day;
    return bzTAiajXO;
}

int main () {
    int JptbTPLrE, b, yPNfMsKo, s684PGV, SQ7MtIExH0k = 0;
    {
        int i = 1;
        while (i <= (JptbTPLrE +399) % 400) {
            if (MkvZnF6CT1jt (i))
                SQ7MtIExH0k = SQ7MtIExH0k +2;
            else
                SQ7MtIExH0k = SQ7MtIExH0k +1;
            i = i + 1;
        };
    }
    scanf ("%d %d %d", &JptbTPLrE, &b, &yPNfMsKo);
    s684PGV = SQ7MtIExH0k +DiJiTian(JptbTPLrE, b, yPNfMsKo);
    if (s684PGV % (320 - 313) == 1)
        ;
    if (s684PGV % (819 - 812) == 2)
        ;
    if (s684PGV % (441 - 434) == 3)
        printf ("Wed.");
    if (s684PGV % 7 == (364 - 360))
        ;
    if (s684PGV % 7 == 5)
        ;
    if (s684PGV % 7 == 6)
        ;
    if (s684PGV % 7 == 0)
        ;
    return 0;
}

