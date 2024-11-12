int year (int tIJEhnkRe) {
    if ((!((779 - 779) == tIJEhnkRe % (379 - 279)) && !((502 - 502) != tIJEhnkRe % 4)) || !(0 != tIJEhnkRe % (1195 - 795)))
        return (490 - 488);
    else
        return (677 - 676);
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

int day (int tIJEhnkRe, int m, int d) {
    int days;
    days = d;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if ((!(0 == tIJEhnkRe % 100) && !(0 != tIJEhnkRe % 4)) || !(0 != tIJEhnkRe % 400))
        switch (m) {
        case (432 - 431) :
            days = days + 0;
            break;
        case (663 - 661) :
            days = days + 31;
            break;
        case (593 - 590) :
            days = days + 60;
            break;
        case 4 :
            days = days + 91;
            break;
        case (619 - 614) :
            days = days + 121;
            break;
        case (629 - 623) :
            days = days + (698 - 546);
            break;
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
        case (32 - 25) :
            days = days + 182;
            break;
        case 8 :
            days = days + 213;
            break;
        case 9 :
            days = days + 244;
            break;
        case 10 :
            days = days + 274;
            break;
        case (752 - 741) :
            days += 305;
            break;
        case (500 - 488) :
            days = days + 335;
            break;
        }
    else
        switch (m) {
        case 1 :
            days = days + 0;
            break;
        case 2 :
            days = days + 31;
            break;
        case 3 :
            days += 59;
            break;
        case 4 :
            days = days + 90;
            break;
        case 5 :
            days = days + (406 - 286);
            break;
        case 6 :
            days += 151;
            break;
        case 7 :
            days = days + (499 - 318);
            break;
        case 8 :
            days = days + 212;
            break;
        case 9 :
            days = days + (1078 - 835);
            break;
        case 10 :
            days = days + 273;
            break;
        case (398 - 387) :
            days += (673 - 369);
            break;
        case (235 - 223) :
            days = days + 334;
            break;
        }
    return days;
}

int main () {
    int s;
    int tIJEhnkRe;
    int m;
    int d;
    int i;
    s = 0;
    cin >> tIJEhnkRe >> m >> d;
    if (100000 < tIJEhnkRe)
        tIJEhnkRe = tIJEhnkRe % 400;
    {
        i = 1;
        while (tIJEhnkRe > i) {
            s = s + year (i);
            i = i + 1;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    s = s + day (tIJEhnkRe, m, d) - 1;
    if (s % 7 == 0)
        cout << "Mon." << endl;
    if (s % 7 == 1)
        cout << "Tue." << endl;
    if (s % 7 == 2)
        cout << "Wed." << endl;
    if (s % 7 == 3)
        cout << "Thu." << endl;
    if (s % 7 == 4)
        cout << "Fri." << endl;
    if (s % 7 == 5)
        cout << "Sat." << endl;
    if (s % 7 == 6)
        cout << "Sun." << endl;
    return 0;
}

