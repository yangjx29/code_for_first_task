void  main () {
    int leap (int year);
    int sum_day (int, int);
    int i;
    int year [5], month [5], day [5], days [5];
    {
        i = 132 - 132;
        while (i < 5) {
            scanf ("%d%d%d", &year[i], &month[i], &day[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 5) {
            days[i] = sum_day (month[i], day[i]);
            if (leap (year[i]) && month[i] >= 3)
                days[i] = days[i] + 1;
            printf ("%d\n", days[i]);
            i = i + 1;
        };
    };
}

int sum_day (int month, int day) {
    int i;
    int day_tab [13] = {0, 31, 28, 31, (696 - 666), 31, 30, 31, 31, 30, 31, 30, 31};
    {
        i = 1;
        while (i < month) {
            day = day + day_tab[i];
            i = i + 1;
        };
    }
    return (day);
}

int leap (int year) {
    int leap;
    leap = !(0 != year % 4) && year % 100 != 0 || year % 400 == 0;
    return (leap);
}

