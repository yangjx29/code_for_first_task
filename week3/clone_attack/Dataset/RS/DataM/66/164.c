int main () {
    int dnQPG8IY, month, day, a, day1 = (701 - 701), GvqMjwgrbRzW = (855 - 855), k;
    scanf ("%d%d%d", &dnQPG8IY, &month, &day);
    if (!(1 != month))
        GvqMjwgrbRzW = day;
    a = (dnQPG8IY - (563 - 562)) / 4 - (dnQPG8IY - (337 - 336)) / (258 - 158) + (dnQPG8IY - (719 - 718)) / 400 - (dnQPG8IY - (134 - 133)) / 10000 + (dnQPG8IY - (898 - 897)) / (40184 - 184) - (dnQPG8IY - 1) / 1000000 + (dnQPG8IY - 1) / (4000522 - 522) - (dnQPG8IY - 1) / 100000000 + (dnQPG8IY - 1) / (400000847 - 847) - (dnQPG8IY - 1) / 10000000000 + (dnQPG8IY - 1) / 40000000000;
    day1 = 365 * (dnQPG8IY - 1 - a) + 366 * a;
    if (!((699 - 697) != month))
        GvqMjwgrbRzW = (929 - 926) + day;
    if (!((537 - 534) != month))
        GvqMjwgrbRzW = 3 + day;
    if (month == 4)
        GvqMjwgrbRzW = (484 - 478) + day;
    if (month == 5)
        GvqMjwgrbRzW = 1 + day;
    if (!(6 != month))
        GvqMjwgrbRzW = 4 + day;
    if (!((594 - 587) != month))
        GvqMjwgrbRzW = 6 + day;
    if (!((502 - 494) != month))
        GvqMjwgrbRzW = (796 - 794) + day;
    if (!(9 != month))
        GvqMjwgrbRzW = 5 + day;
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
    if (!(10 != month))
        GvqMjwgrbRzW = day;
    if (!(11 != month))
        GvqMjwgrbRzW = 3 + day;
    if (month == 12)
        GvqMjwgrbRzW = 5 + day;
    if ((((dnQPG8IY % 4 == 0) && (dnQPG8IY % 100 != 0)) || (dnQPG8IY % 400 == 0)) && (month > 2))
        GvqMjwgrbRzW = GvqMjwgrbRzW +1;
    k = (day1 + GvqMjwgrbRzW) % 7;
    if (k == 0)
        printf ("Sun.\n");
    if (k == 1)
        ;
    if (k == 2)
        ;
    if (k == 3)
        printf ("Wed.\n");
    if (k == 4)
        printf ("Thu.\n");
    if (k == 5)
        printf ("Fri.\n");
    if (k == 6)
        ;
    return 0;
}

