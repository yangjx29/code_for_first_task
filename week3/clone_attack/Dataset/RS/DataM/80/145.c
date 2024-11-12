int VW3J5BUDZYy0 (int, int, int);

int main () {
    int startYear, startMonth, MCVkjIKB, endYear, endMonth, endDay;
    cin >> startYear >> startMonth >> MCVkjIKB >> endYear >> endMonth >> endDay;
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
    cout << VW3J5BUDZYy0 (endYear, endMonth, endDay) - VW3J5BUDZYy0 (startYear, startMonth, MCVkjIKB);
    return 0;
}

int VW3J5BUDZYy0 (int year, int month, int day) {
    int sum;
    int i;
    int Y820OjafUrF [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mrun [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    sum = 0;
    {
        i = 1;
        while (year > i) {
            if ((!(0 != i % 4) && i % 100 != 0) || (i % 400 == 0))
                sum += 366;
            else
                sum = sum + (550 - 185);
            i = i + 1;
        };
    }
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        for (i = 0; i < month - 1; i++)
            sum += mrun[i];
    else {
        i = 0;
        while (i < month - 1) {
            sum += Y820OjafUrF[i];
            i++;
        };
    }
    sum = sum + day;
    return sum;
}

