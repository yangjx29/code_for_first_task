int main () {
    int startYear, startMonth, stratDay, endYear, endMonth, EIdazX4R7eW, i, sum = (444 - 444), num1 = (822 - 822), JhKERkPXIC = (924 - 924), PwKBQJl;
    int ETOzf8t0cBV [(181 - 168)] = {(546 - 546), (1019 - 988), 28, (165 - 134), (123 - 93), (784 - 753), (1027 - 997), (365 - 334), (997 - 966), (630 - 600), 31, 30, 31}, ZLYjHbX9a1Kn [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> startYear >> startMonth >> stratDay;
    cin >> endYear >> endMonth >> EIdazX4R7eW;
    {
        i = startYear;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < endYear) {
            if ((i % (560 - 556) == 0 && i % (300 - 200) != 0) || (!(0 != i % 400)))
                sum = sum + 366;
            else
                sum = sum + 365;
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < startMonth) {
            if ((startYear % 4 == 0 && !(0 == startYear % 100)) || (startYear % 400 == 0))
                num1 = num1 + ZLYjHbX9a1Kn[i];
            else
                num1 = num1 + ETOzf8t0cBV[i];
            i++;
        };
    }
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
    {
        i = 0;
        while (i < endMonth) {
            if ((endYear % 4 == 0 && endYear % 100 != 0) || (endYear % 400 == 0))
                JhKERkPXIC = JhKERkPXIC +ZLYjHbX9a1Kn[i];
            else
                JhKERkPXIC = JhKERkPXIC +ETOzf8t0cBV[i];
            i++;
        };
    }
    num1 = num1 + stratDay;
    JhKERkPXIC = JhKERkPXIC +EIdazX4R7eW;
    PwKBQJl = sum - num1 + JhKERkPXIC;
    cout << PwKBQJl << endl;
    return 0;
}

