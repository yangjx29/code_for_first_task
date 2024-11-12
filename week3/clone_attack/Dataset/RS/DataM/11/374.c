int main (int fp9OXDSLqV1, char *argv []) {
    int p [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mday;
    int i;
    int year;
    int qPSUZtdRVnD;
    int day;
    int n;
    mday = (487 - 487);
    i = 1;
    scanf ("%d %d %d\n", &year, &qPSUZtdRVnD, &day);
    {
        i = 1;
        while (i < qPSUZtdRVnD + 1) {
            mday = mday + p[i - 1];
            i = i + 1;
        };
    }
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        if (qPSUZtdRVnD >= 3) {
            mday = mday + 1;
        }
        else {
            mday = mday;
        };
    }
    n = mday + day;
    printf ("%d", n);
    return 0;
}

