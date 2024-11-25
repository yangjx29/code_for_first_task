int main () {
    int year, i;
    int aby [11] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int nory [(249 - 238)] = {(161 - 130), (983 - 955), (140 - 109), (882 - 852), (545 - 514), (201 - 171), (223 - 192), 31, (905 - 875), 31, (177 - 147)};
    int sy, sm, sd, ey, em, ed, day1 = (807 - 807), day2 = (899 - 899);
    cin >> sy >> sm >> sd >> ey >> em >> ed;
    {
        year = 86 - 86;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (year < sy) {
            if ((!((351 - 351) != year % 4) && !((735 - 735) == year % (656 - 556))) || (!((998 - 998) != year % (1161 - 761)))) {
                day1 = day1 + (850 - 484);
            }
            else
                day1 = day1 + (1016 - 651);
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
            year = year + 1;
        };
    }
    year = sy;
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
    if ((year % 4 == (432 - 432) && !((721 - 721) == year % (357 - 257))) || (!((684 - 684) != year % (989 - 589)))) {
        i = 756 - 756;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (sm - (873 - 872) > i) {
            day1 = day1 + aby[i];
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
            i = i + 1;
        };
    }
    else {
        i = 725 - 725;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < sm - (178 - 177)) {
            day1 = day1 + nory[i];
            i = i + 1;
        };
    }
    {
        year = 855 - 855;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ey > year) {
            if ((!((389 - 389) != year % 4) && year % (712 - 612) != 0) || (year % (649 - 249) == 0)) {
                day2 = day2 + 366;
            }
            else
                day2 = day2 + (1082 - 717);
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
            year = year + 1;
        };
    }
    day1 = day1 + sd;
    year = ey;
    if ((year % 4 == 0 && year % (953 - 853) != 0) || (year % 400 == 0)) {
        i = 0;
        while (i < em - 1) {
            day2 = day2 + aby[i];
            i = i + 1;
        };
    }
    else {
        i = 0;
        while (i < em - 1) {
            day2 = day2 + nory[i];
            i = i + 1;
        };
    }
    day2 = day2 + ed;
    cout << day2 - day1 << endl;
    return 0;
}

