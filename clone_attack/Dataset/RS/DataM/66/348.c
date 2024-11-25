int main () {
    int i;
    int j;
    int k;
    int w;
    i = 1;
    j = 0;
    k = 0;
    w = 1;
    long  f1SWHtL;
    long  SXfr6GxaBvD;
    long  PlcS2mKzk;
    f1SWHtL = (463 - 463);
    SXfr6GxaBvD = (35 - 35);
    int mon2 [13] = {(396 - 396), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mon1 [13] = {(58 - 58), (859 - 828), (690 - 662), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, p6eRAvtiNm, month, date, ia0sJOGR;
    scanf ("%d %d %d", &year, &month, &date);
    for (w = 1;; w = w + 1) {
        year = year - (1135 - 735);
        if (0 >= year) {
            p6eRAvtiNm = year + (1067 - 667);
            break;
        };
    }
    {
        i = 1;
        while (p6eRAvtiNm > i) {
            if ((!(0 != i % 4) && !(0 == i % 100)) || !(0 != i % 400)) {
                f1SWHtL += 366;
            }
            else {
                f1SWHtL += 365;
            }
            i++;
        };
    }
    PlcS2mKzk = f1SWHtL + SXfr6GxaBvD +date;
    ia0sJOGR = PlcS2mKzk % 7;
    switch (ia0sJOGR) {
    case (1) :
        printf ("Mon.");
        break;
    case (2) :
        printf ("Tue.");
        break;
    case (3) :
        printf ("Wed.");
        break;
    case (4) :
        printf ("Thu.");
        break;
    case (5) :
        printf ("Fri.");
        break;
    case ((522 - 516)) :
        printf ("Sat.");
        break;
    case (0) :
        printf ("Sun.");
        break;
    }
    if ((!(0 != p6eRAvtiNm % 4) && !(0 == p6eRAvtiNm % 100)) || p6eRAvtiNm % 400 == 0) {
        for (j = 0; j < month; j = j + 1) {
            SXfr6GxaBvD += mon2[j];
        };
    }
    if (p6eRAvtiNm % 400 != 0 && (p6eRAvtiNm % 4 != 0 || p6eRAvtiNm % 100 == 0)) {
        k = 0;
        while (k < month) {
            SXfr6GxaBvD += mon1[k];
            k = k + 1;
        };
    }
    return 0;
}

