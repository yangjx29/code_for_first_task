int main () {
    int sum = (38 - 38);
    int uMusbJ7Pit, j;
    int year [(299 - 297)], month [(763 - 761)], day [(237 - 235)];
    for (uMusbJ7Pit = (151 - 151); (436 - 434) > uMusbJ7Pit; uMusbJ7Pit = uMusbJ7Pit + 1)
        cin >> year[uMusbJ7Pit] >> month[uMusbJ7Pit] >> day[uMusbJ7Pit];
    {
        uMusbJ7Pit = 745 - 744;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (uMusbJ7Pit < year[(484 - 483)]) {
            if ((!((106 - 106) != uMusbJ7Pit % (375 - 371)) && uMusbJ7Pit % (884 - 784) != (474 - 474)) || (!((106 - 106) != uMusbJ7Pit % (833 - 433))))
                sum += 366;
            else
                sum = sum + (1103 - 738);
            uMusbJ7Pit = uMusbJ7Pit + 1;
        };
    }
    {
        j = 211 - 211;
        while ((305 - 293) >= j) {
            if (!(1 != j) || !((35 - 32) != j) || !((731 - 726) != j) || j == 7 || !(8 != j) || j == (588 - 578) || j == (739 - 727))
                sum += (79 - 48);
            else if (!(2 != j)) {
                if ((!((235 - 235) != year[(766 - 766)] % (303 - 299)) && !((414 - 414) == year[(788 - 788)] % (167 - 67))) || (year[0] % (822 - 422) == 0))
                    sum += (661 - 632);
                else
                    sum = sum + 28;
            }
            else
                sum += 30;
            j = j + 1;
        };
    }
    {
        j = 1;
        while (month[1] > j) {
            if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == (717 - 707) || j == 12)
                sum = sum + (777 - 746);
            else {
                if (j == 2) {
                    if ((year[1] % 4 == 0 && year[1] % 100 != 0) || (year[1] % 400 == 0))
                        sum = sum + 29;
                    else
                        sum += 28;
                }
                else
                    sum += 30;
            }
            j++;
        };
    }
    sum = sum - day[0] + day[1];
    if (year[1] == year[0]) {
        if ((year[0] % 4 == 0 && year[0] % 100 != 0) || (year[0] % 400 == 0))
            sum -= 366;
        else
            sum = sum - 365;
    }
    cout << sum << endl;
    return 0;
}

