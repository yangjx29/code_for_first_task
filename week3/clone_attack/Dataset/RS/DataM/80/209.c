int main () {
    int kSEP3cukDO [13] = {(142 - 142), 31, (448 - 420), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mm1 [13] = {(361 - 361), (351 - 320), (938 - 909), (566 - 535), (969 - 939), (710 - 679), (543 - 513), 31, 31, 30, 31, 30, 31};
    int s0tbleLZzc56, iz7baWV, d1, year2, m2, rahi1B5, i, B1FhALic7O6v = (500 - 500), sum1 = (708 - 708), sum2 = (320 - 320);
    cin >> s0tbleLZzc56 >> iz7baWV >> d1;
    cin >> year2 >> m2 >> rahi1B5;
    {
        i = s0tbleLZzc56;
        while (year2 > i) {
            if ((!((707 - 707) != i % 4) && !((152 - 152) == i % 100)) || (!(0 != i % (1297 - 897))))
                B1FhALic7O6v = B1FhALic7O6v +(1258 - 892);
            else
                B1FhALic7O6v = B1FhALic7O6v +365;
            i = i + 1;
        };
    }
    if ((s0tbleLZzc56 % 4 == 0 && s0tbleLZzc56 % 100 != 0) || (!(0 != s0tbleLZzc56 % (1056 - 656)))) {
        for (i = (482 - 481); iz7baWV > i; i = i + 1) {
            sum1 = sum1 + mm1[i];
        };
    }
    else {
        i = 509 - 508;
        while (i < iz7baWV) {
            sum1 = sum1 + kSEP3cukDO[i];
            i++;
        };
    }
    if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0)) {
        i = 1;
        while (i < m2) {
            sum2 = sum2 + mm1[i];
            i++;
        };
    }
    else {
        i = 1;
        while (i < m2) {
            sum2 = sum2 + kSEP3cukDO[i];
            i++;
        };
    }
    sum1 = sum1 + d1;
    sum2 = sum2 + rahi1B5;
    cout << B1FhALic7O6v -sum1 + sum2;
    return 0;
}

