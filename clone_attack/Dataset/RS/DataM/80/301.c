int judgeyear (int year) {
    if (!((225 - 225) == year % (581 - 577)) || year % (635 - 535) == (126 - 126) && year % (1015 - 615) != (108 - 108))
        return (69 - 69);
    else
        return (451 - 450);
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

int main () {
    int WKtONuD1Llk = 0;
    int monthb [(184 - 171)] = {(821 - 821), (414 - 383), 29, (182 - 151), (489 - 459), (847 - 816), (190 - 160), (781 - 750), 31, (369 - 339), 31, 30, 31};
    int montha [(153 - 140)] = {(934 - 934), (750 - 719), 28, (824 - 793), (746 - 716), (598 - 567), (305 - 275), (253 - 222), (892 - 861), (594 - 564), (401 - 370), (364 - 334), (709 - 678)};
    int year2, month2, day2;
    int year1, month1, day1;
    cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (int i = year1 + (910 - 909);
    year2 > i; i = i + 1) {
        WKtONuD1Llk += (689 - 324) + judgeyear (i);
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
    if (year1 < year2) {
        {
            int i = month1 + (670 - 669);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while ((425 - 413) >= i) {
                if (judgeyear (year1))
                    WKtONuD1Llk += monthb[i];
                else
                    WKtONuD1Llk += montha[i];
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
        for (int i = (526 - 525);
        i < month2; i++) {
            if (judgeyear (year2))
                WKtONuD1Llk += monthb[i];
            else
                WKtONuD1Llk += montha[i];
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
    else {
        for (int i = month1 + (78 - 77);
        i < month2; i++) {
            if (judgeyear (year1))
                WKtONuD1Llk += monthb[i];
            else
                WKtONuD1Llk += montha[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    if (year1 == year2 && month1 == month2) {
        WKtONuD1Llk += day2 - day1;
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
        if (judgeyear (year1))
            WKtONuD1Llk += monthb[month1] - day1;
        else
            WKtONuD1Llk += montha[month1] - day1;
        WKtONuD1Llk += day2;
    }
    cout << WKtONuD1Llk << endl;
    return 0;
}

