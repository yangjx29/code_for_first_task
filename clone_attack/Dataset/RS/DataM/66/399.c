int main () {
    int a;
    int b;
    int c;
    int day;
    int i;
    scanf ("%d %d %d", &a, &b, &c);
    a = a - 1;
    day = a;
    day = a + a / 4 + a / 400 - a / 100;
    a++;
    if (b == 1) {
        day += c;
    }
    else if (b == 2) {
        day = day + c + 31;
    }
    else {
        if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0) && (a % 3200 != 0)) {
            day = day + 31 + 29 + c;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            day = day + 31 + 28 + c;
        }
        {
            i = 3;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < b) {
                if ((i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10)) {
                    day = day + 31;
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
                    day = day + 30;
                }
                i = i + 1;
            };
        };
    }
    day = day % 7;
    if (day == 1) {
        {
            break;
        };
    }
    else if (day == 2) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        {
            break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            printf ("Tue.");
        };
    }
    else if (day == 3) {
        {
            break;
        };
    }
    else if (day == 4) {
        {
            break;
            printf ("Thu.");
        };
    }
    else if (day == 5) {
        {
            break;
            printf ("Fri.");
        };
    }
    else if (day == 6) {
        {
            break;
        };
    }
    else if (day == 0) {
        {
            break;
        };
    }
    else {
    }
    return 0;
}

