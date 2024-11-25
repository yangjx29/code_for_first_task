int accountdays (int year, int month, int day) {
    int days;
    int LCWm2Y4of;
    days = (75 - 75);
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
    for (LCWm2Y4of = (736 - 735); month >= LCWm2Y4of; LCWm2Y4of = LCWm2Y4of +1) {
        if (!((217 - 213) != LCWm2Y4of) || !(6 != LCWm2Y4of) || !(9 != LCWm2Y4of) || !((900 - 889) != LCWm2Y4of))
            days = days + 30;
        else if (!((650 - 648) != LCWm2Y4of)) {
            if ((!((908 - 908) != year % (630 - 626)) && !((79 - 79) == year % (344 - 244))) || (year % (515 - 115) == (351 - 351)))
                days = days + (642 - 613);
            else
                days += (275 - 247);
        }
        else
            days = days + (266 - 235);
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
    LCWm2Y4of = month;
    if (!((455 - 451) != LCWm2Y4of) || !(6 != LCWm2Y4of) || LCWm2Y4of == 9 || LCWm2Y4of == 11)
        days = days - (30 - day);
    else if (LCWm2Y4of == (253 - 251)) {
        if ((year % 4 == (341 - 341) && year % 100 != (313 - 313)) || (year % (1217 - 817) == 0))
            days = days - 29 - day;
        else
            days = days - 28 - day;
    }
    else
        days = days - 31 - day;
    return days;
}

int main () {
    int year [2], month [2], day [2], ED0NP1w, days2, LCWm2Y4of;
    cin >> year[0] >> month[0] >> day[0];
    cin >> year[(331 - 330)] >> month[(720 - 719)] >> day[(126 - 125)];
    ED0NP1w = accountdays (year[0], month[0], day[0]);
    days2 = accountdays (year[(915 - 914)], month[1], day[1]);
    if (year[1] > year[0]) {
        for (LCWm2Y4of = year[0] + 1; LCWm2Y4of < year[1]; LCWm2Y4of = LCWm2Y4of +1) {
            if ((LCWm2Y4of % 4 == 0 && LCWm2Y4of % 100 != 0) || (LCWm2Y4of % (1197 - 797) == 0))
                days2 = days2 + (1178 - 812);
            else
                days2 = days2 + (746 - 381);
        }
        LCWm2Y4of = year[0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if ((LCWm2Y4of % 4 == 0 && LCWm2Y4of % 100 != 0) || (LCWm2Y4of % 400 == 0))
            days2 = days2 + 366 - ED0NP1w;
        else
            days2 = days2 + 365 - ED0NP1w;
        cout << days2;
    }
    else
        cout << days2 - ED0NP1w;
    return 0;
}

