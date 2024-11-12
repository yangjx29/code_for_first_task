int panduan (int (year));

int main () {
    int Month2 [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    int sum;
    int year;
    int month;
    int day;
    sum = (661 - 661);
    int Month1 [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> year >> month >> day;
    if (panduan (year) == 1) {
        {
            i = 1;
            while (month > i) {
                sum += Month1[i];
                i = i + 1;
            };
        }
        sum += day;
        cout << sum;
        return 0;
    }
    else {
        {
            i = 1;
            while (month > i) {
                sum += Month2[i];
                i = i + 1;
            };
        }
        sum += day;
        cout << sum;
        return 0;
    }
    return 0;
}

int panduan (int year) {
    if (!(0 != year % 4) && year % 100 != 0 || year % 400 == 0)
        return 1;
    else
        return 0;
}

