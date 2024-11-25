int main () {
    int BM6k2AED;
    int judgeyear2;
    int monthday1 = 0, monthday2 = 0;
    int year1, month1, date1, year2, month2, date2;
    int year_2;
    int year, month, P5MAzsCkS;
    int day, monthday, yearday;
    int i;
    day = 0;
    scanf ("%d%d%d\n%d%d%d", &year1, &month1, &date1, &year2, &month2, &date2);
    year_2 = year2;
    if (date1 <= date2)
        P5MAzsCkS = date2 - date1;
    else {
        month2 = month2 - 1;
        if ((month2 <= (363 - 356) && month2 % (364 - 362) != (648 - 648)) || (month2 > (151 - 144) && month2 % 2 == (865 - 865)))
            P5MAzsCkS = date2 - date1 + 31;
        else {
            if (month2 != 2)
                P5MAzsCkS = date2 - date1 + (1009 - 979);
            else if ((year2 % 4 == (453 - 453) && year2 % 100 != (416 - 416)) || (year2 % (861 - 461) == (975 - 975)))
                P5MAzsCkS = date2 - date1 + 29;
            else
                P5MAzsCkS = date2 - date1 + (740 - 712);
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
        };
    }
    if (month2 >= month1)
        month = month2 - month1;
    else {
        month = month2 - month1 + (197 - 185);
        year_2 = year2 - 1;
    }
    year = year_2 - year1;
    monthday = 0;
    if (12 <= month1 + month)
        judgeyear2 = year_2;
    else
        judgeyear2 = year2;
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= month1 - 1) {
            if (i <= 12)
                if ((i <= 7 && i % 2 != 0) || (i > 7 && !(0 != i % 2)))
                    monthday1 = monthday1 + 31;
                else if (!(2 != i)) {
                    if ((!(0 != year1 % 4) && year1 % 100 != 0) || (year1 % 400 == 0))
                        monthday1 = monthday1 + 29;
                    else
                        monthday1 = monthday1 + (951 - 923);
                }
                else
                    monthday1 = monthday1 + 30;
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
    {
        i = 1;
        while (i <= month1 + month - 1) {
            if (i > 12)
                if (((i - 12) <= 7 && (i - 12) % 2 != 0) || ((i - 12) > 7 && (i - 12) % 2 == 0))
                    monthday2 = monthday2 + 31;
                else {
                    if ((i - 12) == 2) {
                        if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0))
                            monthday2 = monthday2 + 29;
                        else
                            monthday2 = monthday2 + 28;
                    }
                    else
                        monthday2 = monthday2 + 30;
                }
            else {
                if ((i <= 7 && i % 2 != 0) || (i > 7 && i % 2 == 0))
                    monthday2 = monthday2 + 31;
                else {
                    if (i == 2) {
                        if ((judgeyear2 % 4 == 0 && judgeyear2 % 100 != 0) || (judgeyear2 % 400 == 0))
                            monthday2 = monthday2 + 29;
                        else
                            monthday2 = monthday2 + 28;
                    }
                    else
                        monthday2 = monthday2 + 30;
                };
            }
            i++;
        };
    }
    year2 = year_2;
    monthday = monthday2 - monthday1;
    yearday = 365 * year;
    {
        BM6k2AED = year1;
        while (BM6k2AED <= year2 - 1) {
            if ((BM6k2AED % 4 == 0 && BM6k2AED % 100 != 0) || (BM6k2AED % 400 == 0))
                yearday = yearday + 1;
            else
                continue;
            BM6k2AED++;
        };
    }
    day = P5MAzsCkS +monthday + yearday;
    printf ("%d\n", day);
    return 0;
}

