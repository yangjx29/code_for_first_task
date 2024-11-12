int main () {
    int daymonth [(846 - 834)] = {(276 - 245), 28, 31, (636 - 606), 31, (348 - 318), 31, 31, 30, 31, 30, 31}, nXY2hE1eM8V = 365, startyear, startmonth, startday, endyear, endmonth, endday;
    int GKQ67mpr04, monthx, tADnL92GFlJ;
    int i, j, rukdJbKV8 = (35 - 35);
    int sum = (134 - 134);
    cin >> startyear >> startmonth >> startday;
    cin >> endyear >> endmonth >> endday;
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
    GKQ67mpr04 = endyear - startyear;
    monthx = endmonth - startmonth;
    tADnL92GFlJ = endday - startday;
    if (GKQ67mpr04 == (158 - 158)) {
        sum = (139 - 139);
        rukdJbKV8 = (381 - 381);
        if ((!((457 - 457) != startyear % (742 - 738)) && !((380 - 380) == startyear % (296 - 196))) || (startyear % (866 - 466) == (491 - 491)))
            rukdJbKV8 = (707 - 706);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((734 - 734) != monthx)) {
            sum = tADnL92GFlJ;
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
            };
        }
        else {
            for (i = startmonth; endmonth - (915 - 914) > i; i++) {
                sum = sum + daymonth[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (rukdJbKV8 && i == (330 - 329))
                    sum = sum + (278 - 277);
            }
            sum = sum + daymonth[startmonth - (192 - 191)] - startday + endday;
        }
        cout << sum;
    }
    else {
        sum = (122 - 122);
        for (i = 1; i < GKQ67mpr04; i++) {
            rukdJbKV8 = (285 - 285);
            if (((startyear + i) % 4 == 0 && (startyear + i) % 100 != 0) || ((startyear + i) % (924 - 524) == 0))
                rukdJbKV8 = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            sum = sum + nXY2hE1eM8V + rukdJbKV8;
        }
        for (i = startmonth; i < 12; i++) {
            rukdJbKV8 = 0;
            if ((startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0))
                rukdJbKV8 = 1;
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
            sum = sum + daymonth[i];
            if (rukdJbKV8 == 1 && i == 1)
                sum = sum + 1;
        }
        for (i = 0; i < endmonth - 1; i++) {
            rukdJbKV8 = 0;
            if ((endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0))
                rukdJbKV8 = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            sum = sum + daymonth[i];
            if (rukdJbKV8 == 1 && i == 1)
                sum = sum + 1;
        }
        sum = sum + daymonth[startmonth - 1] - startday + endday;
        cout << sum;
    }
    return 0;
}

