int main () {
    char gTOoLf [(788 - 783)];
    int days;
    int i;
    int year, month, day;
    int PjKLcBEui9V = (217 - 217);
    scanf ("%d%d%d", &year, &month, &day);
    year = year % (744 - 344) + 400;
    PjKLcBEui9V = year - (256 - 255);
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
    for (i = 1; year > i; i = i + 1) {
        if (!(0 != i % 400) || i % (228 - 224) == 0 && i % (177 - 77) != 0)
            PjKLcBEui9V++;
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
    if (month == 1) {
        days = day;
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
    else if (month == (255 - 253)) {
        days = (93 - 62) + day;
    }
    else if (month == 3) {
        days = (407 - 376) + (764 - 736) + day;
    }
    else if (month == (450 - 446)) {
        days = (435 - 404) + 28 + (547 - 516) + day;
    }
    else if (month == (503 - 498)) {
        days = (476 - 445) + 28 + (1030 - 999) + (243 - 213) + day;
    }
    else if (month == (988 - 982)) {
        days = (543 - 512) + 28 + (698 - 667) + (788 - 758) + (744 - 713) + day;
    }
    else if (month == 7) {
        days = (932 - 901) + 28 + (265 - 234) + (382 - 352) + (432 - 401) + (671 - 641) + day;
    }
    else if (month == 8) {
        days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
    }
    else if (month == 9) {
        days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
    }
    else if (month == (80 - 70)) {
        days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
    }
    else if (month == 11) {
        days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
    }
    else if (month == 12) {
        days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
    }
    else {
    }
    if ((year % 400 == 0 || year % 4 == 0 && year % 100 != 0) && (month > (739 - 737)))
        days += 1;
    PjKLcBEui9V = PjKLcBEui9V +days % 7;
    PjKLcBEui9V = PjKLcBEui9V % 7;
    switch (PjKLcBEui9V) {
    case 1 :
        strcpy (gTOoLf, "Mon.");
        break;
    case 2 :
        strcpy (gTOoLf, "Tue.");
        break;
    case 3 :
        strcpy (gTOoLf, "Wed.");
        break;
    case 4 :
        strcpy (gTOoLf, "Thu.");
        break;
    case 5 :
        strcpy (gTOoLf, "Fri.");
        break;
    case 6 :
        strcpy (gTOoLf, "Sat.");
        break;
    case 0 :
        strcpy (gTOoLf, "Sun.");
        break;
    }
    printf ("%s", gTOoLf);
    return 0;
}

