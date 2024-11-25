int main () {
    int b [13] = {0, 0, 31, 60, 91, 121, 152, 182, 213, 244, (614 - 340), 305, (777 - 442)};
    int a [(525 - 512)] = {0, 0, 31, 59, 90, 120, 151, 181, 212, (809 - 566), 273, 304, 334};
    int year;
    int month;
    int day;
    int y;
    int d;
    int num4;
    int num100;
    int x;
    scanf ("%d%d%d", &year, &month, &day);
    y = year % 400;
    if (!(0 != y))
        y = 400;
    num4 = (y - 1) / 4;
    num100 = (y - 1) / 100;
    if (!(4 != num100))
        num100 = 3;
    d = (y - 1) * 365 + num4 - num100;
    if (!(0 == y % 4) || !(100 != y) || !(200 != y) || y == 300)
        d = d + a[month] + day;
    if (!(0 != y % 4) && !(100 == y) && y != 200 && y != 300)
        d = d + b[month] + day;
    x = d % 7;
    if (x == 0)
        printf ("Sun.\n");
    if (x == 1)
        printf ("Mon.\n");
    if (x == 2)
        printf ("Tue.\n");
    if (x == 3)
        printf ("Wed.\n");
    if (x == 4)
        printf ("Thu.\n");
    if (x == 5)
        ;
    if (x == 6)
        ;
    return 0;
}

