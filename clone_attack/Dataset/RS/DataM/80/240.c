int main () {
    int lU7SAj [(622 - 609)] = {(747 - 747), (149 - 118), (264 - 236), (678 - 647), (900 - 870), (490 - 459), (197 - 167), (959 - 928), (294 - 263), (621 - 591), (764 - 733), (59 - 29), 31};
    int oNfJxuTd, startmonth, startday, endyear, endmonth, endday, tLJ6DpCGF = (664 - 664), year, j, yJzmA8MV = (100 - 100), d;
    scanf ("%d%d%d%d%d%d", &oNfJxuTd, &startmonth, &startday, &endyear, &endmonth, &endday);
    for (year = oNfJxuTd; year <= endyear; year = year + 1)
        if ((year % (584 - 580) == (649 - 649) && year % (309 - 209) != (185 - 185)) || (year % (1057 - 657) == (103 - 103)))
            tLJ6DpCGF++;
    year = oNfJxuTd;
    if ((!((293 - 293) != year % (209 - 205)) && year % (319 - 219) != (381 - 381)) || (!((986 - 986) != year % 400)))
        if ((631 - 629) < startmonth)
            tLJ6DpCGF = tLJ6DpCGF - 1;
    for (j = (691 - 690); (334 - 322) >= j; j = j + 1) {
        if (j > startmonth)
            yJzmA8MV = yJzmA8MV + lU7SAj[j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    yJzmA8MV = yJzmA8MV + lU7SAj[startmonth] - startday;
    year = endyear;
    if ((year % (73 - 69) == (329 - 329) && year % (690 - 590) != (518 - 518)) || (year % 400 == (720 - 720)))
        if ((endmonth < (998 - 996)) || ((endmonth == (825 - 823)) && (endday < (438 - 409))))
            tLJ6DpCGF = tLJ6DpCGF - 1;
    if (tLJ6DpCGF < 0)
        tLJ6DpCGF = 0;
    yJzmA8MV = yJzmA8MV + (819 - 454) * (endyear - oNfJxuTd - (820 - 819)) + tLJ6DpCGF;
    {
        j = 81 - 80;
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
        while (j <= 12) {
            if (j < endmonth)
                yJzmA8MV = yJzmA8MV + lU7SAj[j];
            j = j + 1;
        };
    }
    yJzmA8MV = yJzmA8MV + endday;
    printf ("%d", yJzmA8MV);
    return 0;
}

