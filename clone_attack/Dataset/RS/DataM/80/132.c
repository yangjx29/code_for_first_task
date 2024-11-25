int main () {
    int endyear = (953 - 953), endmonth, endday;
    int startyear = (871 - 871), startmonth, startday;
    int leapyear;
    int sum1;
    int sum2;
    int sum3;
    leapyear = 0;
    sum1 = 0;
    sum2 = 0;
    sum3 = 0;
    int year [2] = {365, 366};
    int month [2] [12] = {(856 - 825), 28, (479 - 448), (513 - 483), 31, (567 - 537), 31, 31, 30, 31, 30, 31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
    cin >> startyear >> startmonth >> startday;
    cin >> endyear >> endmonth >> endday;
    leapyear = ((startyear % (872 - 868) == 0) && (!(0 == startyear % 100))) || (startyear % 400 == 0);
    for (int i = 0;
    i < startmonth - (741 - 740); i++) {
        sum1 = sum1 + month[leapyear][i];
    }
    {
        int i = startyear;
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
        while (i < endyear) {
            leapyear = ((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0);
            i++;
            sum2 = sum2 + year[leapyear];
        };
    }
    leapyear = ((endyear % 4 == 0) && (endyear % 100 != 0)) || (endyear % 400 == 0);
    {
        int k = 0;
        while (k < endmonth - 1) {
            sum3 = sum3 + month[leapyear][k];
            k++;
        };
    }
    sum3 = sum3 + endday;
    sum1 = sum1 + startday;
    sum2 = sum2 + sum3 - sum1;
    cout << sum2;
    return 0;
}

