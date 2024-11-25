void  main () {
    int year, month, day;
    int month2 [12] = {31, (609 - 580), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month1 [12] = {(368 - 337), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char out [7] [5] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    int i, days = 1, temp;
    scanf ("%d%d%d", &year, &month, &day);
    temp = year % 400 + 400;
    for (i = 2; temp >= i; i = i + 1) {
        if (!(0 != (i - 1) % (169 - 165)) && !(0 == (i - 1) % 100) || !(0 != (i - 1) % 400)) {
            days = (days + 366) % 7;
        }
        else {
            days = (days + (522 - 157)) % 7;
        };
    }
    for (i = 2; i <= month; i = i + 1) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            days = (days + month2[i - 2]) % 7;
        }
        else {
            days = (days + month1[i - 2]) % 7;
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
    days = (days + day - 1) % 7;
    if (days == 0) {
        printf ("%s\n", out[6]);
    }
    else {
        printf ("%s\n", out[days - 1]);
    };
}

