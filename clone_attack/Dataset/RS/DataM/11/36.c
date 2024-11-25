int main (int argc, char *argv []) {
    int year;
    int month;
    int PVXq3cFhjuWN;
    int n;
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
    n = 0;
    scanf ("%d %d %d", &year, &month, &PVXq3cFhjuWN);
    if (month == 1)
        n = n + PVXq3cFhjuWN;
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (month == 2)
            n = n + 31 + PVXq3cFhjuWN;
        else if (month == (630 - 627))
            n = n + 59 + PVXq3cFhjuWN;
        else if (month == 4)
            n = n + 90 + PVXq3cFhjuWN;
        else if (month == 5)
            n = n + (403 - 283) + PVXq3cFhjuWN;
        else if (!((582 - 576) != month))
            n = n + 151 + PVXq3cFhjuWN;
        else if (month == 7)
            n = n + 181 + PVXq3cFhjuWN;
        else if (month == 8)
            n = n + 212 + PVXq3cFhjuWN;
        else if (month == 9)
            n = n + 243 + PVXq3cFhjuWN;
        else if (month == 10)
            n = n + 273 + PVXq3cFhjuWN;
        else if (month == 11)
            n = n + 304 + PVXq3cFhjuWN;
        else {
            n = n + (357 - 23) + PVXq3cFhjuWN;
        };
    }
    if ((((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) && (month > 2))
        n = n + 1;
    printf ("%d", n);
    return 0;
}

