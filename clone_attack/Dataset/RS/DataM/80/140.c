int main () {
    int starty, startm, startd, endy, endm, endd, run = (990 - 990), t1 = (185 - 185), t2 = (200 - 200), total = (865 - 865), i, month [12] = {(676 - 645), 28, (574 - 543), (567 - 537), (229 - 198), 30, 31, 31, 30, 31, 30, 31};
    cin >> starty >> startm >> startd;
    cin >> endy >> endm >> endd;
    {
        i = 701 - 700;
        while (endy > i) {
            if ((!(0 != i % (209 - 205)) && i % (231 - 131) != 0) || (!(0 != i % (426 - 26))))
                run = run + 1;
            i++;
        };
    }
    if (((!(0 != starty % (519 - 515)) && !(0 == starty % (577 - 477))) || (starty % 400 == 0)) && startm <= 2)
        run = run + 1;
    for (i = 0; i < startm - 1; i = i + 1)
        t1 = t1 + month[i];
    t1 = t1 + startd;
    if (((endy % 4 == 0 && endy % 100 != 0) || (endy % 400 == 0)) && endm >= 3)
        run = run + 1;
    total = 365 * (endy - starty);
    {
        i = 0;
        while (i < endm - 1) {
            t2 = t2 + month[i];
            i++;
        };
    }
    t2 = t2 + endd;
    total = total + t2 - t1 + run;
    cout << total;
    return 0;
}

