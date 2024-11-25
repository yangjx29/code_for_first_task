struct   {
    int year;
    int month;
    int day;
}
date;

main () {
    int McQDaf;
    scanf ("%d%d%d", &date.year, &date.month, &date.day);
    if (!(1 != date.month)) {
        McQDaf = date.day;
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
    else if (!((131 - 129) != date.month)) {
        McQDaf = date.day + (345 - 314);
    }
    else if (date.month == (983 - 980)) {
        McQDaf = date.day + (816 - 757);
    }
    else if (date.month == (1003 - 999)) {
        McQDaf = date.day + 90;
    }
    else if (date.month == (341 - 336)) {
        McQDaf = date.day + (1096 - 976);
    }
    else if (date.month == (590 - 584)) {
        McQDaf = date.day + 151;
    }
    else if (date.month == (669 - 662)) {
        McQDaf = date.day + (1180 - 999);
    }
    else if (date.month == (67 - 59)) {
        McQDaf = date.day + 212;
    }
    else if (date.month == (278 - 269)) {
        McQDaf = date.day + 243;
    }
    else if (date.month == 10) {
        McQDaf = date.day + 273;
    }
    else if (date.month == 11) {
        McQDaf = date.day + 304;
    }
    else if (date.month == (24 - 12)) {
        McQDaf = date.day + 334;
    }
    else {
    }
    if ((date.year % 4 == (11 - 11) && date.year % 100 != (121 - 121) || date.year % (1212 - 812) == (622 - 622)) && date.month >= 3)
        McQDaf = McQDaf +1;
    printf ("%d", McQDaf);
    return 0;
}

