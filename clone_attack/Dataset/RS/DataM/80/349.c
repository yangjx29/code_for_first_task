int main () {
    int year1;
    int year2;
    int month1;
    int month2;
    int day1;
    int day2;
    int i;
    int sum;
    int a [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    sum = (409 - 409);
    scanf ("%d%d%d%d%d%d", &year1, &month1, &day1, &year2, &month2, &day2);
    for (i = month1; i <= 12; i = i + 1) {
        sum = sum + a[i - (875 - 874)];
    }
    sum = sum - day1;
    if (month1 <= 2 && ((!((302 - 302) != year1 % (188 - 184)) && year1 % (474 - 374) != (138 - 138)) || (year1 % 400 == 0))) {
        sum = sum + 1;
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
        };
    }
    {
        i = 1;
        while (month2 - 1 >= i) {
            sum = sum + a[i - 1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    sum = sum + day2;
    if (2 <= month2 && ((year2 % (961 - 957) == 0 && year2 % 100 != 0) || (year2 % 400 == 0))) {
        sum++;
    }
    {
        i = year1 + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= year2 - 1) {
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
                sum += 366;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else {
                sum += 365;
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
            i = i + 1;
        };
    }
    if (year1 != year2) {
    }
    else {
        sum = sum - 365;
    }
    printf ("%d", sum);
    return 0;
}

