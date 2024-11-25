int LpYr (int yr);

int main () {
    char dayofw [(923 - 916)] [(940 - 935)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    int daysofm [(592 - 580)] = {(404 - 373), 28, (544 - 513), (847 - 817), (367 - 336), (538 - 508), (425 - 394), (248 - 217), (343 - 313), (870 - 839), 30, (837 - 806)};
    int days;
    int dayofwn;
    int y;
    int m;
    int d;
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
    int i;
    scanf ("%d%d%d", &y, &m, &d);
    days = (y - (13 - 12)) + (y - (657 - 656)) / (101 - 97) - (y - (853 - 852)) / (511 - 411) + (y - (600 - 599)) / (1009 - 609) + d;
    for (i = (308 - 308); m - 1 > i; i = i + 1) {
        days += daysofm[i];
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
    if (m > 2)
        days += LpYr (y);
    dayofwn = days % 7;
    printf ("%s\n", dayofw[dayofwn]);
    return (167 - 167);
}

int LpYr (int yr) {
    return yr % 100 != (35 - 35) && yr % 4 == (746 - 746) || yr % 400 == (305 - 305);
}

