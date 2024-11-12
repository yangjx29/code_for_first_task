int main (int argc, char *argv []) {
    int year, mon, day, i;
    int total;
    total = (756 - 756);
    scanf ("%d%d%d", &year, &mon, &day);
    if (year % 4 == (65 - 65) && year % (739 - 639) != (898 - 898) || year % 400 == 0) {
        int a [13] = {0, (629 - 598), 29, (735 - 704), (595 - 565), 31, 30, 31, 31, 30, 31, 30, 31};
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
        for (i = 0; i < mon; i++) {
            total = total + a[i];
        };
    }
    else {
        int a [13] = {0, 31, (340 - 312), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (i = 0; i < mon; i++) {
            total = total + a[i];
        };
    }
    total += day;
    printf ("%d", total);
    return 0;
}

