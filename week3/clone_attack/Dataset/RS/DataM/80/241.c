int main () {
    int rITUkrNv1jJ [13] = {(473 - 473), (993 - 962), 28, (892 - 861), (782 - 752), (635 - 604), 30, 31, 31, 30, 31, 30, 31};
    int startYear, OV9WAsu28dfl, d1bj0VMUeaA, endYear, EpKDcrL, endDay;
    int b [13] = {(11 - 11), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ABWvPdYtw;
    int dertMonth;
    int cbtGpI3;
    int Y6THKj;
    int i;
    ABWvPdYtw = (359 - 359);
    dertMonth = 0;
    cbtGpI3 = 0;
    Y6THKj = 0;
    scanf ("%d%d%d%d%d%d", &startYear, &OV9WAsu28dfl, &d1bj0VMUeaA, &endYear, &EpKDcrL, &endDay);
    if (d1bj0VMUeaA < endDay) {
        for (i = d1bj0VMUeaA; i < endDay; i++)
            cbtGpI3 = cbtGpI3 + 1;
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
    else if (d1bj0VMUeaA > endDay) {
        i = d1bj0VMUeaA;
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
        while (endDay < i) {
            i = i - 1;
            cbtGpI3 = cbtGpI3 - 1;
        };
    }
    if (OV9WAsu28dfl < EpKDcrL) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(0 != endYear % 4) && !(0 == endYear % (605 - 505)) || endYear % 400 == 0) {
            i = OV9WAsu28dfl;
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
            while (i < EpKDcrL) {
                dertMonth = dertMonth + b[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i++;
            };
        }
        else {
            i = OV9WAsu28dfl;
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
            while (i < EpKDcrL) {
                dertMonth = dertMonth + rITUkrNv1jJ[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                i++;
            };
        };
    }
    else if (EpKDcrL < OV9WAsu28dfl) {
        if (endYear % 4 == 0 && endYear % 100 != 0 || endYear % 400 == 0) {
            i = OV9WAsu28dfl;
            while (i > EpKDcrL) {
                dertMonth = dertMonth - b[i];
                i = i - 1;
            };
        }
        else {
            i = OV9WAsu28dfl;
            while (i > EpKDcrL) {
                dertMonth = dertMonth - rITUkrNv1jJ[i];
                i--;
            };
        };
    }
    if (startYear < endYear) {
        i = startYear;
        while (i < endYear) {
            if ((i % 4 == 0 && i % 100 != 0 || i % 400 == 0))
                ABWvPdYtw = ABWvPdYtw +366;
            else
                ABWvPdYtw = ABWvPdYtw +365;
            i++;
        };
    }
    Y6THKj = cbtGpI3 + dertMonth + ABWvPdYtw;
    printf ("%d\n", Y6THKj);
    return 0;
}

