main () {
    int year, month, day, a, m [12] = {(559 - 528), 28, 31, (732 - 702), 31, (209 - 179), 31, 31, 30, 31, 30, 31}, YhzfrSMVpFg, sum = (656 - 656);
    scanf ("%d %d %d", &year, &month, &day);
    if (year % 4 == (267 - 267) && !((915 - 915) == year % 100))
        a = 1;
    else if (year % 100 == 0 && year % 400 == 0)
        a = 1;
    else
        a = 0;
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
    if (a == 1) {
        m[1] = 29;
        {
            YhzfrSMVpFg = 0;
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
            while (YhzfrSMVpFg < month - 1) {
                sum = sum + m[YhzfrSMVpFg];
                YhzfrSMVpFg = YhzfrSMVpFg +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = sum + day;
    }
    else if (a == 0) {
        {
            YhzfrSMVpFg = 0;
            while (YhzfrSMVpFg < month - 1) {
                sum = sum + m[YhzfrSMVpFg];
                YhzfrSMVpFg++;
            };
        }
        sum = sum + day;
    }
    printf ("%d\n", sum);
}

