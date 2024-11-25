int d (int day1) {
    day1 = day1 % 7;
    if (!((827 - 827) != day1))
        day1 = 7;
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
    return (day1);
}

int firstday (int year) {
    int rKGX0dE7R2ua;
    int n;
    int XOKR356CEA8;
    int x;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    if (!(0 != (year % 400))) {
        x = 6;
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
        year = year % 400;
        rKGX0dE7R2ua = year % 100;
        rKGX0dE7R2ua = (year - rKGX0dE7R2ua) / 100;
        if (!(0 != (year % 100)))
            x = d ((5 * rKGX0dE7R2ua));
        else {
            year = year % 100;
            XOKR356CEA8 = year % 4;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            n = (year - XOKR356CEA8) / 4;
            if (!(0 != XOKR356CEA8))
                x = d ((rKGX0dE7R2ua + n) * 5 - 1);
            else
                x = d ((rKGX0dE7R2ua + n) * 5 + XOKR356CEA8);
        };
    }
    return (x);
}

int weekday (int x, int month, int BEyK7v31) {
    int j;
    j = BEyK7v31 % 7;
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
    if (!(1 != month)) {
        x = d (x + (15 - 13));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        x = d (x + j - 1);
    }
    else if (month == 2) {
        x = d (x + 3);
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
        x = d (x + j - 1);
    }
    else if (month == 3) {
        x = d (x + 3);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x = d (x + j - 1);
    }
    else if (!(4 != month)) {
        x = d (x + 6);
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
        x = d (x + j - 1);
    }
    else if (!(5 != month)) {
        x = d (x + 1);
        x = d (x + j - 1);
    }
    else if (!(6 != month)) {
        x = d (x + 4);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        x = d (x + j - 1);
    }
    else if (!(7 != month)) {
        x = d (x + 6);
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
        x = d (x + j - 1);
    }
    else if (!(8 != month)) {
        x = d (x + 2);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        x = d (x + j - 1);
    }
    else if (month == 9) {
        x = d (x + 5);
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
        x = d (x + j - 1);
    }
    else if (month == 10) {
        x = x;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x = d (x + j - 1);
    }
    else if (month == 11) {
        x = d (x + 3);
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
        x = d (x + j - 1);
    }
    else {
        x = d (x + 5);
        x = d (x + j - 1);
    }
    return (x);
}

void  main () {
    int t, ieOHEySu, year, month, BEyK7v31, x;
    char h6xMmKFfW [4] = {0};
    scanf ("%d%d%d", &year, &month, &BEyK7v31);
    if ((year % 400) == 0)
        t = 0;
    else {
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
        if ((year % 100) == 0)
            t = 0;
        else {
            if ((year % 4) == 0)
                t = 1;
            else
                t = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    x = firstday (year);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    x = x + t;
    ieOHEySu = weekday (x, month, BEyK7v31);
    if (ieOHEySu == 1) {
        strcpy (h6xMmKFfW, "Mon");
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
    else if (ieOHEySu == 2) {
        strcpy (h6xMmKFfW, "Tue");
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
    else if (ieOHEySu == 3) {
        strcpy (h6xMmKFfW, "Wed");
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
    else if (ieOHEySu == 4) {
        strcpy (h6xMmKFfW, "Thu");
    }
    else if (ieOHEySu == 5) {
        strcpy (h6xMmKFfW, "Fri");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (ieOHEySu == 6) {
        strcpy (h6xMmKFfW, "Sat");
    }
    else if (ieOHEySu == 7) {
        strcpy (h6xMmKFfW, "Sun");
    }
    printf ("%s.\n", h6xMmKFfW);
}

