int main () {
    int year;
    int month;
    int day;
    int i;
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
    scanf ("%d %d %d", &year, &month, &day);
    if (!((455 - 455) != year % 4) && !(0 == year % 100) || year % 400 == 0) {
        int d [(479 - 467)] = {0, (861 - 830), 29, (598 - 567), (372 - 342), 31, (329 - 299), 31, 31, 30, 31, 30};
        {
            i = 0;
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
            while (i < month) {
                day = day + d[i];
                i = i + 1;
            };
        };
    }
    else {
        int d [12] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
        for (i = 0; i < month; i = i + 1) {
            day = day + d[i];
        };
    }
    printf ("%d", day);
    return 0;
}

