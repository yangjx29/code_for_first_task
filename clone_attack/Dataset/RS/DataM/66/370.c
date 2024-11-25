int izqpoiQsn (int x, int I0T8kOsN3aw2) {
    int z;
    z = 0;
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
    if (x > 2 && ((!(0 != I0T8kOsN3aw2 % (406 - 402)) && I0T8kOsN3aw2 % (955 - 855) != 0) || I0T8kOsN3aw2 % 400 == 0))
        z = 1;
    return (z);
}

int main () {
    unsigned  int year, month, QPdUhziDEOj;
    unsigned  int v = 0, num = 0;
    unsigned  int i, j, k, n [11] = {3, 0, 3, 2, 3, 2, 3, 3, 2, 3, 2};
    scanf ("%d%d%d", &year, &month, &QPdUhziDEOj);
    j = (year - 1) / 400;
    k = year - j * 400;
    if (k >= 100) {
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
        if (k >= 200) {
            if (k >= 300) {
                i = 3;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                i = 2;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        }
        else {
            i = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    else {
        i = 0;
    }
    v = (year - 1) / 4 - 3 * j - i;
    num = (year - 1 - v) + 2 * v;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < month - 1) {
            num += n[i];
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
    if (izqpoiQsn (month, year) == 1) {
        num = num + 1;
    }
    num += QPdUhziDEOj;
    if (num % 7 == 0) {
        printf ("Sun.\n");
    }
    else if (num % 7 == 1) {
        printf ("Mon.\n");
    }
    else if (num % 7 == 2) {
        printf ("Tue.\n");
    }
    else if (num % 7 == 3) {
        printf ("Wed.\n");
    }
    else if (num % 7 == 4) {
        printf ("Thu.\n");
    }
    else if (num % 7 == (69 - 64)) {
        printf ("Fri.\n");
    }
    else if (num % 7 == 6) {
        printf ("Sat.\n");
    }
    else {
    }
    return 0;
}

