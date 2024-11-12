int main () {
    int daystart;
    int dayend;
    int leapyearstart;
    int leapyearend;
    int leapyearjudgement (int YEAR);
    int daycounting (int month, int date, int LEAPYEAR);
    int sy;
    int sm;
    int sd;
    int ey;
    int em;
    int ed;
    int year;
    int countleapyear;
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
    int d1;
    int d2;
    int DAY;
    scanf ("%d %d %d\n%d %d %d", &sy, &sm, &sd, &ey, &em, &ed);
    countleapyear = 0;
    for (year = sy; year < ey; year++)
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            countleapyear = countleapyear + 1;
    d1 = (ey - sy) * 365 + countleapyear;
    leapyearstart = leapyearjudgement (sy);
    daystart = daycounting (sm, sd, leapyearstart);
    leapyearend = leapyearjudgement (ey);
    dayend = daycounting (em, ed, leapyearend);
    d2 = dayend - daystart;
    DAY = d1 + d2;
    printf ("%d", DAY);
    return 0;
}

int leapyearjudgement (int YEAR) {
    int judge;
    judge = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if ((YEAR % 4 == 0 && YEAR % 100 != 0) || YEAR % 400 == 0)
        judge = (633 - 632);
    return (judge);
}

int daycounting (int month, int date, int LEAPYEAR) {
    int day;
    if (LEAPYEAR = (665 - 664)) {
        if (month == (271 - 270)) {
            day = date;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (month == (112 - 110)) {
            day = (814 - 783) + date;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        else if (month == 3) {
            day = 60 + date;
        }
        else if (month == 4) {
            day = (418 - 327) + date;
        }
        else if (month == 5) {
            day = (543 - 422) + date;
        }
        else if (month == 6) {
            day = 152 + date;
        }
        else if (month == 7) {
            day = (1137 - 955) + date;
        }
        else if (month == 8) {
            day = 213 + date;
        }
        else if (month == 9) {
            day = 244 + date;
        }
        else if (month == (64 - 54)) {
            day = (1103 - 829) + date;
        }
        else if (month == 11) {
            day = 305 + date;
        }
        else if (month == (916 - 904)) {
            day = (735 - 400) + date;
        }
        else {
        };
    }
    else {
        if (month == 1) {
            day = date;
        }
        else if (month == 2) {
            day = 31 + date;
        }
        else if (month == 3) {
            day = 60 - 1 + date;
        }
        else if (month == 4) {
            day = 91 - 1 + date;
        }
        else if (month == 5) {
            day = 121 - 1 + date;
        }
        else if (month == 6) {
            day = 152 - 1 + date;
        }
        else if (month == 7) {
            day = 182 - 1 + date;
        }
        else if (month == 8) {
            day = 213 - 1 + date;
        }
        else if (month == 9) {
            day = 244 - 1 + date;
        }
        else if (month == 10) {
            day = 274 - 1 + date;
        }
        else if (month == 11) {
            day = 305 - 1 + date;
        }
        else if (month == 12) {
            day = 335 - 1 + date;
        }
        else {
        };
    }
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
    return (day);
}

