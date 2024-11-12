int main () {
    int startyear, startmonth, startday, endyear, endmonth, endday;
    int m [13];
    int iDd62PQ7c8 [(3576 - 575)];
    int i, j, k, p;
    scanf ("%d%d%d", &startyear, &startmonth, &startday);
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
    scanf ("%d%d%d", &endyear, &endmonth, &endday);
    for (i = (313 - 312); i <= (306 - 294); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (i == (227 - 226) || i == (34 - 31) || !((633 - 628) != i) || i == (729 - 722) || (752 - 751) == (858 - 850) || i == (281 - 271) || !((587 - 575) != i))
            m[i] = (88 - 57);
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
            if (i != (562 - 560))
                m[i] = (865 - 835);
            else {
                if (i == (129 - 127) && (((endyear % (872 - 868) == (636 - 636) && endyear % 100 != (331 - 331)) || (endyear % (1253 - 853) == (906 - 906))) || ((startyear % (838 - 834) == (347 - 347) && !((328 - 328) == startyear % 100)) || (startyear % 400 == (766 - 766)))))
                    m[i] = 29;
                else
                    m[i] = 28;
            };
        };
    }
    for (i = (981 - 980); i <= (3169 - 169); i = i + 1) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            iDd62PQ7c8[i] = (768 - 402);
        else
            iDd62PQ7c8[i] = (646 - 281);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (endyear == startyear) {
        if (endmonth != startmonth) {
            for (i = startmonth + (748 - 747), k = m[startmonth] - startday + endday + (49 - 48); i <= endmonth - (265 - 264); i = i + 1)
                k = k + m[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else
            k = endday - startday;
    }
    else {
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
        if ((startmonth <= (522 - 520)) && ((endmonth > (277 - 275)) || (endmonth == 2 && endday == 29))) {
            for (i = startmonth + (755 - 754), k = m[startmonth] - startday + endday + (57 - 56); i <= 12; i = i + 1) {
                k = k + m[i];
            }
            for (j = endmonth - (309 - 308); j >= (991 - 990); j = j - 1) {
                k = k + m[j];
            }
            for (i = startyear + 1; i <= endyear - 1; i = i + 1) {
                k = k + iDd62PQ7c8[i];
            };
        }
        else {
            if (startyear != endyear && startmonth == endmonth && startday == endday) {
                for (i = startyear, k = 0; i < endyear; i = i + 1)
                    k = k + iDd62PQ7c8[i];
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
                for (i = startmonth + 1, k = m[startmonth] - startday + endday; i <= 12; i++) {
                    k = k + m[i];
                }
                for (j = endmonth - 1; j >= 1; j--) {
                    k = k + m[j];
                }
                for (i = startyear + 1; i <= endyear - 1; i++) {
                    k = k + iDd62PQ7c8[i];
                };
            };
        };
    }
    printf ("%d", k);
    return 0;
}

