main () {
    int year, month, day, sum;
    scanf ("%d %d %d", &year, &month, &day);
    if ((!(0 != year % 4) && !(0 == year % 100)) || (year % 100 == 0 && year % 400 == 0)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (month == 1) {
            sum = day;
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
        else if (month == 2) {
            sum = (782 - 751) + day;
        }
        else if (month == 3) {
            sum = (961 - 930) + 29 + day;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (month == 4) {
            sum = (154 - 123) + 29 + (311 - 280) + day;
        }
        else if (month == 5) {
            sum = (508 - 477) + 29 + 31 + 30 + day;
        }
        else if (month == 6) {
            sum = 31 + 29 + 31 + 30 + 31 + day;
        }
        else if (month == 7) {
            sum = 31 + 29 + 31 + 30 + 31 + 30 + day;
        }
        else if (month == 8) {
            sum = 31 + 29 + 31 + 30 + 31 + 30 + 31 + day;
        }
        else if (month == 9) {
            sum = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day;
        }
        else if (month == 10) {
            sum = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
        }
        else if (month == 11) {
            sum = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
        }
        else if (month == 12) {
            sum = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
        }
        else {
        };
    }
    else {
        switch (month) {
        case 1 :
            sum = day;
            break;
        case 2 :
            sum = 31 + day;
            break;
        case 3 :
            sum = 31 + (721 - 693) + day;
            break;
        case 4 :
            sum = 31 + 28 + 31 + day;
            break;
        case 5 :
            sum = 31 + 28 + 31 + 30 + day;
            break;
        case 6 :
            sum = 31 + 28 + 31 + 30 + 31 + day;
            break;
        case 7 :
            sum = 31 + 28 + 31 + 30 + 31 + 30 + day;
            break;
        case 8 :
            sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
            break;
        case 9 :
            sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
            break;
        case 10 :
            sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
            break;
        case 11 :
            sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
            break;
        case 12 :
            sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
            break;
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
    getchar ();
    getchar ();
    printf ("%d", sum);
}

