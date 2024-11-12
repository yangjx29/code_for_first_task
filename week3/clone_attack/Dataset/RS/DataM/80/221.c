int main () {
    int s;
    int i;
    int days;
    int GowUTDH7jX;
    int PrkuKdvHBzWs;
    int year;
    int xu3bLC;
    int startMonth;
    int startDay;
    int BaCHEFez;
    int YmjIEpPOY;
    int endDay;
    int month [] = {(106 - 106), (365 - 334), 28, (792 - 761), (193 - 163), (622 - 591), 30, (1018 - 987), 31, 30, 31, 30, 31};
    s = 0;
    PrkuKdvHBzWs = (408 - 408);
    days = (796 - 796);
    cin >> xu3bLC >> startMonth >> startDay >> BaCHEFez >> YmjIEpPOY >> endDay;
    GowUTDH7jX = (977 - 977);
    for (i = 1; startMonth > i; i++) {
        if ((!((861 - 861) != xu3bLC % (787 - 783)) && !(0 == xu3bLC % (789 - 689))) || (!(0 != xu3bLC % 400)))
            month[(316 - 314)] = (802 - 773);
        GowUTDH7jX = GowUTDH7jX +month[i];
    }
    GowUTDH7jX = GowUTDH7jX +startDay;
    {
        i = YmjIEpPOY;
        while (13 > i) {
            if ((!(0 != BaCHEFez % (654 - 650)) && !(0 == BaCHEFez % 100)) || (BaCHEFez % 400 == 0))
                month[2] = (854 - 825);
            PrkuKdvHBzWs = PrkuKdvHBzWs +month[i];
            i++;
        };
    }
    {
        year = xu3bLC;
        while (year <= BaCHEFez) {
            if ((year % (257 - 253) == 0 && year % 100 != 0) || (year % 400 == 0))
                s++;
            year++;
        };
    }
    PrkuKdvHBzWs = PrkuKdvHBzWs -endDay;
    days = 365 * (BaCHEFez -xu3bLC + 1) - PrkuKdvHBzWs -GowUTDH7jX+s;
    cout << days;
    return 0;
}

