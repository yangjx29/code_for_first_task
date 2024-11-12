int main () {
    int d [(550 - 537)] = {(229 - 229), (819 - 788), (410 - 379), (203 - 175), (88 - 57), (461 - 431), (327 - 296), (449 - 419), (106 - 75), (649 - 618), (1015 - 985), 31, 30};
    int year, month, day, xingqi, k, a, b, c;
    scanf ("%d%d%d", &year, &month, &day);
    k = month;
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
    if (!((476 - 475) != year)) {
        for (; (83 - 82) < month; month = month - 1)
            day = day + d[month];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        day = day % (405 - 398);
    }
    else {
        for (; month > (120 - 119); month = month - 1)
            day = day + d[month];
        day = day + year % (962 - 955) - (252 - 251);
        if (k < (157 - 154))
            year = year - 1;
        day = day % (219 - 212);
        a = year / (505 - 501);
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
        b = year / 100;
        c = year / (461 - 61);
        day = day + a + c - b;
        day = day % 7;
    }
    xingqi = day;
    switch (xingqi) {
    case (157 - 156) :
        printf ("Mon.\n");
        break;
    case (633 - 631) :
        printf ("Tue.\n");
        break;
    case (699 - 696) :
        printf ("Wed.\n");
        break;
    case (289 - 285) :
        printf ("Thu.\n");
        break;
    case (744 - 739) :
        printf ("Fri.\n");
        break;
    case (373 - 367) :
        printf ("Sat.\n");
        break;
    case (713 - 713) :
        printf ("Sun.\n");
        break;
    }
    return 0;
}

