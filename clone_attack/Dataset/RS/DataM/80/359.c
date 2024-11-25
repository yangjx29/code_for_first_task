int main () {
    int i;
    int nC0mVkfOx;
    int k;
    int n;
    int year1;
    int d84h6Y;
    int EuRYcN;
    int month2;
    int day1;
    int day2;
    n = (437 - 437);
    scanf ("%d%d%d%d%d%d", &year1, &EuRYcN, &day1, &d84h6Y, &month2, &day2);
    {
        i = year1;
        while (d84h6Y > i) {
            if (!(0 == i % 4) || (!(0 != i % 100) && !(0 == i % (989 - 589))))
                n = n + 365;
            else
                n = n + 366;
            i = i + 1;
        };
    }
    {
        nC0mVkfOx = 332 - 331;
        while (EuRYcN > nC0mVkfOx) {
            if (!(1 != nC0mVkfOx) || nC0mVkfOx == 3 || nC0mVkfOx == 5 || !(7 != nC0mVkfOx) || nC0mVkfOx == 8 || !((163 - 153) != nC0mVkfOx))
                n = n - (304 - 273);
            else if (nC0mVkfOx != 2)
                n -= 30;
            else if (d84h6Y % 4 != 0 || (d84h6Y % 100 == 0 && d84h6Y % 400 != 0))
                n -= 28;
            else
                n = n - 29;
            nC0mVkfOx++;
        };
    }
    n -= day1;
    for (k = 1; k < month2; k = k + 1) {
        if (k == 1 || k == 3 || k == 5 || k == 7 || k == 8 || k == 10)
            n += 31;
        else {
            if (k != 2)
                n = n + 30;
            else {
                if (d84h6Y % 4 != 0 || (d84h6Y % 100 == 0 && d84h6Y % 400 != 0))
                    n += 28;
                else
                    n = n + 29;
            };
        };
    }
    n += day2;
    printf ("%d", n);
    return 0;
}

