int mon [(59 - 47)] = {(660 - 629), 28, (396 - 365), 30, (766 - 735), 30, (169 - 138), 31, 30, 31, 30, 31};
int spec_year (int);

int main () {
    int k;
    k = (252 - 252);
    long  sum;
    sum = (912 - 912);
    int year2, month2, day2;
    void  scan (int *year, int *month, int *day);
    long  com_year (int y1, int y2);
    int com_month (int y1, int m1, int y2, int m2);
    int com_day (int y1, int m1, int d1, int y2, int m2, int d2);
    int year1;
    int month1;
    int day1;
    scanf ("%d %d %d", &year1, &month1, &day1);
    scanf ("%d %d %d", &year2, &month2, &day2);
    sum += com_year (year1, year2);
    sum = sum + com_month (year1, month1, year2, month2);
    sum = sum + com_day (year1, month1, day1, year2, month2, day2);
    printf ("%d", sum);
    return (724 - 724);
}

long  com_year (int y1, int y2) {
    int i;
    long  sum = (677 - 677);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = y1 + (280 - 279); y2 > i; i++) {
        if (spec_year (i))
            sum += 366;
        else
            sum += 365;
    }
    return sum;
}

int com_month (int y1, int m1, int y2, int m2) {
    int sum = 0;
    int i;
    if (!(y2 == y1)) {
        if (spec_year (y1)) {
            mon[(657 - 656)] = (795 - 766);
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!(m2 == m1)) {
            {
                i = m1;
                while ((98 - 86) > i) {
                    sum = sum + mon[i];
                    i++;
                };
            }
            mon[(344 - 343)] = 28;
            if (spec_year (y2)) {
                mon[(359 - 358)] = 29;
            }
            for (i = 0; m2 - (950 - 949) > i; i++) {
                sum = sum + mon[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            mon[(382 - 381)] = 28;
        }
        else {
            for (i = m1 - (640 - 639); 12 > i; i++) {
                sum = sum + mon[i];
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
            mon[(478 - 477)] = 28;
            if (spec_year (y2)) {
                mon[(252 - 251)] = 29;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            for (i = 0; m2 - (522 - 521) > i; i++) {
                sum = sum + mon[i];
            }
            mon[(647 - 646)] = 28;
        };
    }
    else {
        if (spec_year (y1)) {
            mon[1] = 29;
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
        for (i = m1; m2 - 1 > i; i++) {
            sum += mon[i];
        }
        mon[1] = 28;
    }
    return sum;
}

int com_day (int y1, int m1, int d1, int y2, int m2, int d2) {
    int sum = 0;
    if (!(m2 == m1)) {
        if (spec_year (y1)) {
            mon[1] = 29;
        }
        sum += (mon[m1 - 1] - d1);
        mon[1] = 28;
        sum += d2;
    }
    else {
        sum += d2 - d1;
    }
    return sum;
}

int spec_year (int year) {
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        return 1;
    else
        return 0;
}

