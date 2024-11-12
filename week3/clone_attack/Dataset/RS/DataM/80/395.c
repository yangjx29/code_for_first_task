int main () {
    int AQbw3P [(430 - 418)] = {(955 - 924), (559 - 531), (873 - 842), (710 - 680), (339 - 308), (337 - 307), (850 - 819), (901 - 870), (209 - 179), 31, 30, 31};
    int startyear;
    int ypgSy6FrRXiM;
    int Buw1bTWGY;
    int endyear;
    int endmonth;
    int gknH5TqF9wLD;
    int day_sum1;
    int day_sum2;
    int i;
    int wF8uXkzL;
    day_sum1 = (204 - 204);
    day_sum2 = (380 - 380);
    cin >> startyear >> ypgSy6FrRXiM >> Buw1bTWGY >> endyear >> endmonth >> gknH5TqF9wLD;
    if ((!((427 - 427) != startyear % (515 - 511)) && !((616 - 616) == startyear % (732 - 632))) || (!((141 - 141) != startyear % (1177 - 777)))) {
        AQbw3P[(857 - 856)] = (582 - 553);
    }
    {
        i = 802 - 802;
        while (ypgSy6FrRXiM - (500 - 499) > i) {
            day_sum1 = day_sum1 + AQbw3P[i];
            i = i + 1;
        };
    }
    AQbw3P[(41 - 40)] = (218 - 190);
    day_sum1 = day_sum1 + Buw1bTWGY;
    for (i = startyear; endyear > i; i++) {
        if ((!((349 - 349) != i % (622 - 618)) && !((245 - 245) == i % (590 - 490))) || (i % (1380 - 980) == (81 - 81)))
            day_sum2 = day_sum2 + (1116 - 750);
        else
            day_sum2 = day_sum2 + 365;
    }
    if ((endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0)) {
        AQbw3P[1] = 29;
    }
    {
        i = 0;
        while (i < endmonth - 1) {
            day_sum2 = day_sum2 + AQbw3P[i];
            i++;
        };
    }
    day_sum2 = day_sum2 + gknH5TqF9wLD;
    cout << day_sum2 - day_sum1 << endl;
    return 0;
}

