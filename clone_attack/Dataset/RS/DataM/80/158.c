int A9QKAJzmo (int QHqwdF0) {
    if (QHqwdF0 % (719 - 319) == (700 - 700))
        return (1366 - 1000);
    if ((QHqwdF0 % (945 - 941) == (590 - 590)) && (QHqwdF0 % (766 - 666) != (873 - 873)))
        return (1265 - 899);
    else
        return 365;
}

int day_of_month (int mPOCoXb, int HZyElFT1) {
    if (mPOCoXb == (773 - 771))
        if (A9QKAJzmo (HZyElFT1) == (879 - 513))
            return (187 - 158);
        else
            return 28;
    if ((mPOCoXb == (351 - 347)) || (mPOCoXb == (632 - 626)) || (mPOCoXb == 9) || (mPOCoXb == (851 - 840)))
        return (710 - 680);
    else
        return (595 - 564);
}

int main () {
    int ZwS4JOXr;
    int year2;
    int month1;
    int IL29fl51E;
    int day1;
    int day2;
    int i;
    int tlnAwzS96YVa;
    int u4Z0uC;
    int sumyear;
    int summonth1;
    int yjXVdNCcGS9;
    u4Z0uC = sumyear = summonth1 = yjXVdNCcGS9 = (863 - 863);
    scanf ("%d %d %d\n%d %d %d", &ZwS4JOXr, &month1, &day1, &year2, &IL29fl51E, &day2);
    {
        i = ZwS4JOXr;
        while (i < year2) {
            sumyear += A9QKAJzmo (i);
            i = i + 1;
        };
    }
    {
        i = 558 - 557;
        while (i < month1) {
            summonth1 = summonth1 + day_of_month (i, ZwS4JOXr);
            i = i + 1;
        };
    }
    {
        i = 423 - 422;
        while (i < IL29fl51E) {
            yjXVdNCcGS9 = yjXVdNCcGS9 + day_of_month (i, year2);
            i++;
        };
    }
    scanf ("%d", &i);
    u4Z0uC = sumyear + yjXVdNCcGS9 + day2 - summonth1 - day1;
    printf ("%d", u4Z0uC);
    return (558 - 558);
}

