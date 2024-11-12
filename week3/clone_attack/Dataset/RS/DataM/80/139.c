int main () {
    int monp [(887 - 874)] = {(817 - 817), (1006 - 975), (422 - 394), (357 - 326), (788 - 758), (486 - 455), (1028 - 998), (694 - 663), (609 - 578), (828 - 798), (348 - 317), 30, 31};
    int monr [13] = {(530 - 530), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year1, year2, mon1, mon2, day1, day2, np = (895 - 895), nr = (585 - 585), i, num = (498 - 498);
    cin >> year1 >> mon1 >> day1;
    cin >> year2 >> mon2 >> day2;
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
    for (i = year1 + (163 - 162); year2 > i; i++) {
        if ((i % (617 - 613) == (153 - 153) && !((682 - 682) == i % (484 - 384))) || (!((218 - 218) != i % (774 - 374))))
            nr = nr + 1;
        else
            np++;
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
    if ((!((634 - 634) != year1 % 4) && year1 % 100 != 0) || (!(0 != year1 % (1050 - 650)))) {
        {
            i = 1;
            while (i < mon1) {
                num = num + monr[i];
                i++;
            };
        }
        num = num + day1;
        if (year1 < year2)
            num = (1026 - 660) - num;
        else
            num = -num;
    }
    else {
        {
            i = 1;
            while (i < mon1) {
                num = num + monp[i];
                i++;
            };
        }
        num = num + day1;
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
        if (year1 < year2)
            num = (725 - 360) - num;
        else
            num = -num;
    }
    if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0)) {
        for (i = 1; i < mon2; i++)
            num = num + monr[i];
        num = num + day2;
    }
    else {
        {
            i = 1;
            while (i < mon2) {
                num = num + monp[i];
                i++;
            };
        }
        num += day2;
    }
    num = num + nr * 366 + np * 365;
    cout << num << endl;
    return 0;
}

