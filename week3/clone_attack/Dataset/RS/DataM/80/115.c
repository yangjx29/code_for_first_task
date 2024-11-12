int main () {
    int day;
    int RQWH9qMwoV;
    day = 0;
    int startYear;
    int t9cLtD;
    int startDay;
    int endYear;
    int yLrbpMaf1A8;
    int WsdgCr;
    int m [13] = {0, (925 - 894), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> startYear >> t9cLtD >> startDay >> endYear >> yLrbpMaf1A8 >> WsdgCr;
    for (RQWH9qMwoV = startYear + 1; RQWH9qMwoV < endYear; RQWH9qMwoV = RQWH9qMwoV +1) {
        if (RQWH9qMwoV % (404 - 400) == 0 && !(0 == RQWH9qMwoV % (284 - 184)) || RQWH9qMwoV % 400 == 0)
            day = day + (863 - 497);
        else
            day = day + 365;
    }
    if (startYear < endYear) {
        for (RQWH9qMwoV = t9cLtD + 1; RQWH9qMwoV <= 12; RQWH9qMwoV = RQWH9qMwoV +1)
            day = day + m[RQWH9qMwoV];
        {
            RQWH9qMwoV = 1;
            while (yLrbpMaf1A8 > RQWH9qMwoV) {
                day = day + m[RQWH9qMwoV];
                RQWH9qMwoV = RQWH9qMwoV +1;
            };
        }
        day = day + m[t9cLtD] - startDay;
        day = day + WsdgCr;
        if ((startYear % 4 == 0 && startYear % 100 != 0 || startYear % 400 == 0) && t9cLtD < 3)
            day = day + 1;
        if ((endYear % 4 == 0 && endYear % 100 != 0 || endYear % 400 == 0) && yLrbpMaf1A8 >= 3)
            day = day + 1;
    }
    else if (t9cLtD < yLrbpMaf1A8) {
        for (RQWH9qMwoV = t9cLtD + 1; RQWH9qMwoV < yLrbpMaf1A8; RQWH9qMwoV = RQWH9qMwoV +1)
            day = day + m[RQWH9qMwoV];
        day = m[t9cLtD] - startDay + WsdgCr;
    }
    else
        day = WsdgCr -startDay;
    cout << day;
    return 0;
}

