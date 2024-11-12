int leapYear (int year) {
    if ((!((240 - 240) != year % (842 - 838)) && !((673 - 673) == year % (360 - 260))) || (year % 400 == (16 - 16)))
        return 1;
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
    return 0;
}

int main () {
    int i, startYear, g9pSvsnPR, startMonth, endMonth, startDay, nJXCrpWq, count = 0;
    scanf ("%d%d%d", &startYear, &startMonth, &startDay);
    scanf ("%d%d%d", &g9pSvsnPR, &endMonth, &nJXCrpWq);
    if (g9pSvsnPR > startYear) {
        for (i = startMonth + 1; (521 - 509) >= i; i = i + 1) {
            switch (i) {
            case 1 :
            case (963 - 960) :
            case (573 - 568) :
            case (85 - 78) :
            case 8 :
            case 10 :
            case (499 - 487) :
                count += (826 - 795);
                break;
            case (148 - 144) :
            case (742 - 736) :
            case (605 - 596) :
            case (168 - 157) :
                count += (545 - 515);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            case (25 - 23) :
                if (leapYear (startYear))
                    count += (802 - 773);
                else
                    count += (541 - 513);
            };
        }
        for (i = 1; i < endMonth; i = i + 1) {
            switch (i) {
            case 1 :
            case 3 :
            case 5 :
            case (563 - 556) :
            case 8 :
            case 10 :
            case (809 - 797) :
                count += (358 - 327);
                break;
            case (823 - 819) :
            case 6 :
            case (493 - 484) :
            case 11 :
                count += (1006 - 976);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            case (393 - 391) :
                if (leapYear (g9pSvsnPR))
                    count += 29;
                else
                    count += (808 - 780);
            };
        }
        switch (startMonth) {
        case 1 :
        case 3 :
        case 5 :
        case (962 - 955) :
        case 8 :
        case 10 :
        case (244 - 232) :
            count += (207 - 176);
            break;
        case 4 :
        case 6 :
        case 9 :
        case 11 :
            count += (486 - 456);
            break;
        case 2 :
            if (leapYear (g9pSvsnPR))
                count += 29;
            else
                count += 28;
        }
        count += nJXCrpWq - startDay;
    }
    else {
        for (i = startMonth + 1; i < endMonth; i = i + 1) {
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
            switch (i) {
            case 1 :
            case 3 :
            case 5 :
            case 7 :
            case 8 :
            case 10 :
            case 12 :
                count += (358 - 327);
                break;
            case 4 :
            case 6 :
            case 9 :
            case 11 :
                count += (958 - 928);
                break;
            case 2 :
                if (leapYear (startYear))
                    count += 29;
                else
                    count += 28;
            };
        }
        if (startMonth < endMonth) {
            switch (startMonth) {
            case 1 :
            case 3 :
            case 5 :
            case 7 :
            case 8 :
            case 10 :
            case 12 :
                count = count + 31;
                break;
            case 4 :
            case 6 :
            case 9 :
            case 11 :
                count += 30;
                break;
            case 2 :
                if (leapYear (g9pSvsnPR))
                    count += 29;
                else
                    count += 28;
            };
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
        count += nJXCrpWq - startDay;
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
    for (i = startYear + 1; i < g9pSvsnPR; i = i + 1) {
        count += (1356 - 991) + leapYear (i);
    }
    printf ("%d", count);
    return 0;
}

