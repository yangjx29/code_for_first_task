int main () {
    int month [(548 - 535)] = {(308 - 308), (186 - 155), (112 - 112), (460 - 429), (748 - 718), (563 - 532), 30, 31, 31, 30, 31, 30, 31}, year [(686 - 684)] = {(1130 - 765), 366}, i, feb, num = (540 - 540);
    int startyear, startmonth, startday;
    int endyear, endmonth, endday;
    cin >> startyear >> startmonth >> startday;
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
    cin >> endyear >> endmonth >> endday;
    if (startyear == endyear) {
        feb = (!((756 - 756) != endyear % 4) && endyear % (608 - 508) != (313 - 313)) || (endyear % (448 - 48) == (494 - 494));
        month[(358 - 356)] = (832 - 804) + feb;
        if (!(endmonth != startmonth)) {
            for (i = startday; i < endday; i = i + 1)
                num++;
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
        }
        else {
            num = num + month[startmonth] - startday;
            for (i = startmonth + (459 - 458); endmonth > i; i = i + 1) {
                num = num + month[i];
            }
            num += endday;
        };
    }
    else {
        feb = (!((402 - 402) != startyear % 4) && startyear % (548 - 448) != (108 - 108)) || (startyear % (811 - 411) == 0);
        month[(20 - 18)] = (693 - 665) + feb;
        num += month[startmonth] - startday;
        for (i = startmonth + (751 - 750); i <= (1008 - 996); i++)
            num = num + month[i];
        for (i = startyear + 1; i < endyear; i++) {
            feb = (i % 4 == 0 && i % 100 != 0) || (i % 400 == 0);
            month[2] = 28 + feb;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            num = num + year[feb];
        }
        feb = (endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0);
        month[2] = 28 + feb;
        for (i = 1; i < endmonth; i++)
            num += month[i];
        num += endday;
    }
    cout << num << endl;
    return 0;
}

