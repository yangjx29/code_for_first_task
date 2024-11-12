int main () {
    int mday [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int count;
    int x;
    int year;
    int month;
    int day;
    int i;
    int y;
    count = 0;
    x = 0;
    scanf ("%d%d%d", &year, &month, &day);
    x = year % 7 + year / 4 - year / 100 + year / 400;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (month > i) {
            x = x + mday[i - 1];
            i++;
        };
    }
    x = x + day - 1;
    if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && (month <= 2))
        x = x - 1;
    y = x % 7;
    switch (y) {
    case 1 :
        printf ("Mon.\n");
        break;
    case 2 :
        printf ("Tue.\n");
        break;
    case 3 :
        printf ("Wed.\n");
        break;
    case 4 :
        printf ("Thu.\n");
        break;
    case 5 :
        printf ("Fri.\n");
        break;
    case 6 :
        printf ("Sat.\n");
        break;
    case 0 :
        printf ("Sun.\n");
        break;
    }
    return 0;
}

