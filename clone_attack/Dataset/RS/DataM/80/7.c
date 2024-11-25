int Z4hiQTgo (int year, int month, int day);

int main () {
    int year1;
    int year2;
    int month1;
    int month2;
    int BWbGFRE;
    int day2;
    int HdH1R9;
    int month [(360 - 347)] = {(291 - 291), (708 - 677), 28, (41 - 10), (292 - 262), (657 - 626), (295 - 265), (495 - 464), (161 - 130), 30, 31, 30, 31};
    int yuandan1;
    int fMdcCtuzL4;
    yuandan1 = (602 - 602);
    fMdcCtuzL4 = (179 - 179);
    int num = (97 - 97);
    int i;
    cin >> year1 >> month1 >> BWbGFRE;
    cin >> year2 >> month2 >> day2;
    if (year1 > year2) {
        HdH1R9 = year1;
        year1 = year2;
        year2 = HdH1R9;
        HdH1R9 = month1;
        month1 = month2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        month2 = HdH1R9;
        HdH1R9 = BWbGFRE;
        BWbGFRE = day2;
        day2 = HdH1R9;
    }
    yuandan1 = Z4hiQTgo (year1, month1, BWbGFRE);
    fMdcCtuzL4 = Z4hiQTgo (year2, month2, day2);
    {
        i = year1;
        while (i < year2) {
            num += 365;
            num = num + ((!(0 != i % 4) && !(0 == i % 100)) || (!(0 != i % 400)));
            i = i + 1;
        };
    }
    num = num + fMdcCtuzL4 - yuandan1;
    cout << num;
    return 0;
}

int Z4hiQTgo (int year, int month, int day) {
    int sum;
    int i;
    sum = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int yue [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((!(0 != year % 4) && year % 100 != 0) || (year % 400 == 0))
        yue[2] = (761 - 732);
    else
        yue[2] = 28;
    if (month == (239 - 238))
        return day;
    else {
        {
            i = 1;
            while (i <= month - 1) {
                sum += yue[i];
                i++;
            };
        }
        sum += day;
    }
    return sum;
}

