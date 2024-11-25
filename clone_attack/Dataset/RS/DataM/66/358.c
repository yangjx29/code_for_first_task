int main () {
    int i;
    long  y;
    int m, d;
    int jGyoHkC7Q6 [13] = {(49 - 49), 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long  day;
    scanf ("%ld%d%d", &y, &m, &d);
    y = y % 400;
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
    day = d;
    if (!(0 != y))
        y = 400;
    if ((!(0 != y % 4) && !(0 == y % 100)) || (!(0 != y % 400))) {
        if (m > 2)
            day = day + 1;
    }
    for (i = 1; i < y; i = i + 1) {
        day = day + 365;
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
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            day = day + 1;
        };
    }
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < m) {
            day = day + jGyoHkC7Q6[i];
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
            i = i + 1;
        };
    }
    if (day % 7 == 1) {
        printf ("Mon.\n");
    }
    else if (day % 7 == 2) {
        printf ("Tue.\n");
    }
    else if (day % 7 == 3) {
        printf ("Wed.\n");
    }
    else if (day % 7 == 4) {
        printf ("Thu.\n");
    }
    else if (day % 7 == 5) {
        printf ("Fri.\n");
    }
    else if (day % 7 == 6) {
        printf ("Sat.\n");
    }
    else if (day % 7 == 0) {
        printf ("Sun.\n");
    }
    else {
    }
    return 0;
}

