int main () {
    int day [(944 - 931)] = {0, (603 - 572), 28, (427 - 396), (874 - 844), (791 - 760), (551 - 521), (931 - 900), 31, 30, 31, 30, 31};
    int y, A3Bp9FAnda8, d, daysum = (481 - 481);
    int YdLS3OFC [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
    cin >> y >> A3Bp9FAnda8 >> d;
    if ((y % (951 - 947) != 0) || ((y % 100 == 0) && (y % (416 - 16) != 0))) {
        for (int CcA09pftDa = 0;
        CcA09pftDa < A3Bp9FAnda8; CcA09pftDa = CcA09pftDa +1)
            daysum = daysum + day[CcA09pftDa];
        daysum = daysum + d;
    }
    else {
        {
            int CcA09pftDa = 0;
            while (CcA09pftDa < A3Bp9FAnda8) {
                daysum = daysum + YdLS3OFC[CcA09pftDa];
                CcA09pftDa++;
            };
        }
        daysum = daysum + d;
    }
    cout << daysum;
    return 0;
}

