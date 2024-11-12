int main () {
    int year, mon, d;
    int month = (746 - 745), day = (273 - 272), lunar = (547 - 547), days = (184 - 183);
    cin >> year >> mon >> d;
    if (((!((52 - 52) != year % (332 - 328))) && (year % (799 - 699) != (820 - 820))) || (year % (1201 - 801) == 0))
        lunar = (671 - 670);
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
    while ((mon != month) || (!(day == d))) {
        day++;
        if ((!(32 != day)) && ((!((272 - 271) != month)) || (!(3 != month)) || (month == 5) || (month == 7) || (!(8 != month)) || (month == (245 - 235)) || (month == (128 - 116)))) {
            day = 1;
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
            month++;
        }
        days++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((day == 31) && ((month == 4) || (month == (795 - 789)) || (month == (665 - 656)) || (month == 11))) {
            day = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            month++;
        }
        if ((day == (641 - 611)) && (month == (194 - 192)) && (lunar == 1)) {
            day = 1;
            month++;
        }
        if ((day == (912 - 883)) && (month == (480 - 478)) && (lunar == 0)) {
            month++;
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
            day = 1;
        };
    }
    cout << days << endl;
    return 0;
}

