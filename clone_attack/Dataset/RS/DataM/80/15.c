int main () {
    int syear, smonth, sday, eyear, emonth, eday;
    int sum = (628 - 628);
    int month1 [13] = {0, (908 - 877), 28, (120 - 89), (348 - 318), (830 - 799), 30, 31, 31, 30, 31, 30, 31};
    int month2 [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> syear >> smonth >> sday >> eyear >> emonth >> eday;
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
    if ((!(0 != syear % 4) && !(0 == syear % (256 - 156))) || (syear % 400 == 0))
        month1[(791 - 789)] = 29;
    if ((eyear % 4 == 0 && eyear % 100 != 0) || (eyear % 400 == 0))
        month2[2] = 29;
    if (!(eyear != syear) && smonth == emonth) {
        sum += eday - sday;
    }
    else {
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
        if (syear == eyear && smonth != emonth) {
            sum += month1[smonth] - sday + (945 - 944);
            {
                int month = smonth + (381 - 380);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (month < emonth) {
                    sum += month1[month];
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
                    month = month + 1;
                };
            }
            sum = sum + eday - 1;
        }
        else {
            sum += month1[smonth] - sday + 1;
            {
                int month = smonth + 1;
                while (month <= 12) {
                    sum += month1[month];
                    month = month + 1;
                };
            }
            {
                int year = syear + 1;
                while (year < eyear) {
                    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                        sum += 366;
                    else
                        sum += 365;
                    year++;
                };
            }
            {
                int month = 1;
                while (month < emonth) {
                    sum += month2[month];
                    month = month + 1;
                };
            }
            sum = sum + eday - 1;
        };
    }
    cout << sum;
    return 0;
}

