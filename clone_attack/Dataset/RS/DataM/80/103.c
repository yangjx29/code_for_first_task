int main () {
    int days1 [12] = {(466 - 435), 28, (250 - 219), 30, (521 - 490), 30, (753 - 722), 31, 30, 31, 30, 31};
    int startyear, startmonth, startday, hCHYBwg80 = (440 - 440);
    int AE9Rh5jarXb, uVnG35N, endday, Ld1ySrUR8u = 0;
    int sum = 0, wg1rBv26H30P = 0, month;
    int DT7YSrD [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> startyear >> startmonth >> startday;
    cin >> AE9Rh5jarXb >> uVnG35N >> endday;
    if (!(AE9Rh5jarXb != startyear)) {
        if ((!(0 != startyear % (687 - 683)) && startyear % 100 != 0) || (!(0 != startyear % 400))) {
            for (month = (486 - 485); startmonth > month; month++) {
                hCHYBwg80 = hCHYBwg80 + DT7YSrD[month - (190 - 189)];
            }
            hCHYBwg80 = hCHYBwg80 + startday;
            for (month = (338 - 337); month < uVnG35N; month++) {
                Ld1ySrUR8u = Ld1ySrUR8u +DT7YSrD[month - (29 - 28)];
            }
            Ld1ySrUR8u = Ld1ySrUR8u +endday;
        }
        if (!((!(0 != startyear % 4) && startyear % 100 != 0) || (!(0 != startyear % 400)))) {
            {
                month = 1;
                while (startmonth > month) {
                    hCHYBwg80 = hCHYBwg80 + days1[month - 1];
                    month++;
                };
            }
            hCHYBwg80 = hCHYBwg80 + startday;
            {
                month = 1;
                while (month < uVnG35N) {
                    Ld1ySrUR8u = Ld1ySrUR8u +days1[month - 1];
                    month++;
                };
            }
            Ld1ySrUR8u = Ld1ySrUR8u +endday;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = Ld1ySrUR8u -hCHYBwg80;
    }
    if (startyear < AE9Rh5jarXb) {
        if ((!(0 != startyear % 4) && startyear % 100 != 0) || (!(0 != startyear % 400))) {
            for (month = 1; month < startmonth; month++) {
                hCHYBwg80 = hCHYBwg80 + DT7YSrD[month - 1];
            }
            hCHYBwg80 = hCHYBwg80 + startday;
            sum = 366 - hCHYBwg80;
        }
        if (!((startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0))) {
            {
                month = 1;
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
                while (month < startmonth) {
                    hCHYBwg80 = hCHYBwg80 + days1[month - 1];
                    month++;
                };
            }
            hCHYBwg80 = hCHYBwg80 + startday;
            sum = (465 - 100) - hCHYBwg80;
        }
        for (wg1rBv26H30P = startyear + 1; wg1rBv26H30P < AE9Rh5jarXb; wg1rBv26H30P++) {
            if ((wg1rBv26H30P % 4 == 0 && wg1rBv26H30P % 100 != 0) || (wg1rBv26H30P % 400 == 0)) {
                sum = sum + 366;
            }
            else
                sum = sum + 365;
        }
        if ((AE9Rh5jarXb % 4 == 0 && AE9Rh5jarXb % 100 != 0) || (AE9Rh5jarXb % 400 == 0)) {
            for (month = 1; month < uVnG35N; month++) {
                Ld1ySrUR8u = Ld1ySrUR8u +DT7YSrD[month - 1];
            }
            Ld1ySrUR8u = Ld1ySrUR8u +endday;
            sum = sum + Ld1ySrUR8u;
        }
        if (!((AE9Rh5jarXb % 4 == 0 && AE9Rh5jarXb % 100 != 0) || (AE9Rh5jarXb % 400 == 0))) {
            for (month = 1; month < uVnG35N; month++) {
                Ld1ySrUR8u = Ld1ySrUR8u +days1[month - 1];
            }
            Ld1ySrUR8u = Ld1ySrUR8u +endday;
            sum = sum + Ld1ySrUR8u;
        };
    }
    cout << sum << endl;
    return 0;
}

