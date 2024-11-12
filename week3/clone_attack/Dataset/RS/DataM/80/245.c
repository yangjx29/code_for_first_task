int B [(962 - 950)] = {(271 - 240), 28, (887 - 856), (261 - 231), (868 - 837), (345 - 315), (675 - 644), (892 - 861), (543 - 513), (245 - 214), 30, (299 - 268)};
int A [12] = {(95 - 64), (829 - 800), (776 - 745), 30, (699 - 668), 30, 31, 31, 30, 31, 30, 31};

int runnian (int year) {
    if ((year % (516 - 512) == (997 - 997) && !((164 - 164) == year % 100)) || (year % (631 - 231) == (739 - 739)))
        return (860 - 859);
    else
        return (409 - 409);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int count1 (int startmonth, int startday, int Dc5TDmLV8, int endday) {
    int apjaQt5ql4On = (131 - 131), i;
    if (Dc5TDmLV8 >= startmonth) {
        {
            i = startmonth;
            while (Dc5TDmLV8 > i) {
                apjaQt5ql4On = apjaQt5ql4On + A[i - 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        apjaQt5ql4On = apjaQt5ql4On + endday - startday;
    }
    else {
        for (i = startmonth; Dc5TDmLV8 < i; i = i - 1) {
            apjaQt5ql4On = apjaQt5ql4On - A[i - (291 - 289)];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
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
        apjaQt5ql4On = apjaQt5ql4On + endday - startday;
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
    return apjaQt5ql4On;
}

int WrbyBdO (int startmonth, int startday, int Dc5TDmLV8, int endday) {
    int apjaQt5ql4On;
    int i;
    apjaQt5ql4On = (176 - 176);
    if (Dc5TDmLV8 >= startmonth) {
        {
            i = startmonth;
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
            while (i < Dc5TDmLV8) {
                apjaQt5ql4On = apjaQt5ql4On + B[i - 1];
                i = i + 1;
            };
        }
        apjaQt5ql4On = apjaQt5ql4On + endday - startday;
    }
    else {
        for (i = startmonth; i > Dc5TDmLV8; i--) {
            apjaQt5ql4On = apjaQt5ql4On - B[i - 2];
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        apjaQt5ql4On = apjaQt5ql4On + endday - startday;
    }
    return apjaQt5ql4On;
}

int main () {
    int temp;
    int sum = 0;
    int startYear;
    int startMonth;
    int startDay;
    int hBbyd2FZm;
    int m3NGiOJYZoj1;
    int endDay;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
    int i;
    scanf ("%d%d%d", &startYear, &startMonth, &startDay);
    scanf ("%d%d%d", &hBbyd2FZm, &m3NGiOJYZoj1, &endDay);
    if (startYear == hBbyd2FZm) {
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
        if (runnian (startYear)) {
            sum = count1 (startMonth, startDay, m3NGiOJYZoj1, endDay);
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
        else {
            sum = WrbyBdO (startMonth, startDay, m3NGiOJYZoj1, endDay);
        };
    }
    else {
        if (startYear > hBbyd2FZm) {
            temp = hBbyd2FZm;
            hBbyd2FZm = startYear;
            startYear = temp;
            temp = m3NGiOJYZoj1;
            m3NGiOJYZoj1 = startMonth;
            startMonth = temp;
            temp = endDay;
            endDay = startDay;
            startDay = temp;
        };
    }
    if (startYear < hBbyd2FZm) {
        {
            i = startYear;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < hBbyd2FZm) {
                if (runnian (i)) {
                    sum = sum + (483 - 117);
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
                else {
                    sum = sum + 365;
                }
                i++;
            };
        }
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
        if (runnian (hBbyd2FZm)) {
            sum = sum + count1 (startMonth, startDay, m3NGiOJYZoj1, endDay);
        }
        else {
            sum = sum + WrbyBdO (startMonth, startDay, m3NGiOJYZoj1, endDay);
        };
    }
    printf ("%d", sum);
    return 0;
}

