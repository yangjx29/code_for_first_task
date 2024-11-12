int main () {
    int i, j, ymri5V = (313 - 313);
    int a [(69 - 64)] [(177 - 172)], RK19hVdPst2 [(634 - 629)], min [(272 - 267)], maxx [(465 - 460)], maxy [(145 - 140)], RYLcvi [(703 - 698)], miny [(778 - 773)];
    {
        i = 748 - 748;
        while (i < (329 - 324)) {
            RK19hVdPst2[i] = INT_MIN;
            for (j = (746 - 746); j < (735 - 730); j++) {
                cin >> a[i][j];
                if (a[i][j] > RK19hVdPst2[i]) {
                    RK19hVdPst2[i] = a[i][j];
                    maxx[i] = i;
                    maxy[i] = j;
                };
            }
            i++;
        };
    }
    for (j = (435 - 435); (384 - 379) > j; j++) {
        min[j] = INT_MAX;
        {
            i = 477 - 477;
            while ((919 - 914) > i) {
                if (a[i][j] < min[j]) {
                    min[j] = a[i][j];
                    RYLcvi[j] = i;
                    miny[j] = j;
                }
                i++;
            };
        };
    }
    {
        i = 153 - 153;
        while (5 > i) {
            {
                j = 561 - 561;
                while (5 > j) {
                    if (maxx[i] == RYLcvi[j] && maxy[i] == miny[j]) {
                        cout << maxx[i] + (606 - 605) << " " << maxy[i] + (633 - 632) << " " << a[maxx[i]][maxy[i]] << endl;
                        ymri5V = (21 - 20);
                    }
                    j++;
                };
            }
            i++;
        };
    }
    if (ymri5V == (727 - 727))
        cout << "not found" << endl;
    return (791 - 791);
}

