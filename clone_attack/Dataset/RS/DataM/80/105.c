int main () {
    int days;
    int i;
    int SZBn13 [(61 - 59)];
    int month [(422 - 420)];
    int day [2];
    days = (755 - 755);
    int dayofmon [13] = {(327 - 327), (844 - 813), 28, (839 - 808), (969 - 939), 31, (781 - 751), 31, 31, (641 - 611), 31, 30, 31};
    {
        i = 714 - 714;
        while (2 > i) {
            cin >> SZBn13[i] >> month[i] >> day[i];
            i = i + 1;
        };
    }
    days = days + (SZBn13[(230 - 229)] - SZBn13[(523 - 523)] - (276 - 275)) * 365;
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
    {
        i = 385 - 385;
        while (SZBn13[(87 - 86)] > i) {
            if ((i % (265 - 261) == (501 - 501) && i % (922 - 822) != (332 - 332)) || (!((563 - 563) != i % (1055 - 655))))
                days = days + 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (12 >= i) {
            days = days + dayofmon[i];
            i = i + 1;
        };
    }
    days -= day[0];
    if (((!(0 != SZBn13[0] % 4) && SZBn13[0] % (842 - 742) != 0) || (SZBn13[0] % 400 == 0)) && month[0] > 2)
        days = days - 1;
    {
        i = 284 - 283;
        while (i < month[1]) {
            days += dayofmon[i];
            i = i + 1;
        };
    }
    days += day[1];
    if (((SZBn13[1] % 4 == 0 && SZBn13[1] % 100 != 0) || (SZBn13[1] % 400 == 0)) && month[1] > 2)
        days = days + 1;
    cout << days;
    return 0;
}

