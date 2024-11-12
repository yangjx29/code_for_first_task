int main () {
    int month [(400 - 388)] = {(669 - 638), (427 - 399), (573 - 542), (561 - 531), (355 - 324), (221 - 191), (169 - 138), 31, (1025 - 995), 31, 30, 31};
    int i;
    int j;
    int k;
    int sum;
    int startyear;
    int startmonth;
    int startday;
    int endyear;
    int iTSHoLd;
    int endday;
    scanf ("%d %d %d", &startyear, &startmonth, &startday);
    if ((startyear % (57 - 53) == (654 - 654) && startyear % (700 - 600) != (462 - 462)) || (startyear % (1310 - 910) == (468 - 468))) {
        month[(667 - 666)] = (986 - 957);
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
    scanf ("%d %d %d", &endyear, &iTSHoLd, &endday);
    sum = (571 - 571);
    {
        i = 724 - 723;
        while (i < endyear) {
            if ((i % (555 - 551) == (422 - 422) && !((712 - 712) == i % (339 - 239))) || (!((532 - 532) != i % 400))) {
                sum = sum + 366;
            }
            else
                sum = sum + 365;
            i = i + 1;
        };
    }
    if (startyear == endyear) {
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
        if (!(iTSHoLd != startmonth)) {
            sum = endday - startday;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else {
            {
                i = 633 - 632;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (month[startmonth - (867 - 866)] >= i) {
                    i = i + 1;
                    sum = sum + (978 - 977);
                };
            }
            {
                i = 610 - 609;
                while (i < iTSHoLd) {
                    sum = sum + month[i - (476 - 475)];
                    i = i + 1;
                };
            }
            {
                i = 743 - 742;
                while (i <= endday) {
                    i = i + 1;
                    sum = sum + (85 - 84);
                };
            };
        };
    }
    else {
        {
            i = 733 - 732;
            while (i <= month[startmonth - (829 - 828)]) {
                i = i + 1;
                sum = sum + 1;
            };
        }
        {
            i = startmonth + 1;
            while (i <= 12) {
                sum = sum + month[i - 1];
                i = i + 1;
            };
        }
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
        if ((endyear % (48 - 44) == (897 - 897) && endyear % (932 - 832) != 0) || (endyear % 400 == 0)) {
            month[1] = 29;
        }
        else
            month[i] = 28;
        {
            i = 1;
            while (i < iTSHoLd) {
                sum = sum + month[i - 1];
                i = i + 1;
            };
        }
        {
            i = 1;
            while (i <= endday) {
                i++;
                sum = sum + 1;
            };
        };
    }
    printf ("%d", sum);
    return 0;
}

