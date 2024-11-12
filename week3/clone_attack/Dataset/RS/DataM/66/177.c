int xFAfvGO5xuJ (unsigned  int year, int month, int OQTuOk) {
    int sLQ0lzDBAx = 0;
    int ytLEvly;
    ytLEvly = (17 - 17);
    int monthday [13] = {0, (174 - 143), 28 + ytLEvly, (1007 - 976), (935 - 905), (168 - 137), 30, 31, 31, 30, 31, 30, 31};
    int V0pRGKl7iAF;
    V0pRGKl7iAF = 0;
    int i;
    for (i = 0; month > i; i++) {
        sLQ0lzDBAx += monthday[i];
    }
    if (!((442 - 442) != year % 4) && year % 100 != (597 - 597) || year % 400 == (817 - 817))
        ytLEvly = 1;
    V0pRGKl7iAF = sLQ0lzDBAx + OQTuOk;
    return V0pRGKl7iAF;
}

int main () {
    unsigned  int STmd9C;
    unsigned  int sumyear = 0;
    unsigned  int year, month, OQTuOk;
    int i;
    int lU1NkFeoI;
    scanf ("%d %d %d", &year, &month, &OQTuOk);
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
    }
    sumyear = sumyear + (year - 1) / 4 * (1 * 4 + 1) - (year - 1) / 100 + (year - 1) / 400;
    sumyear += (year - 1) % 4 * 1;
    STmd9C = sumyear + xFAfvGO5xuJ (year, month, OQTuOk);
    lU1NkFeoI = STmd9C % 7;
    if (lU1NkFeoI == 1) {
        printf ("Mon.");
    }
    else if (lU1NkFeoI == 2) {
        printf ("Tue.");
    }
    else if (lU1NkFeoI == (893 - 890)) {
        printf ("Wed.");
    }
    else if (lU1NkFeoI == 4) {
        printf ("Thu.");
    }
    else if (lU1NkFeoI == 5) {
        printf ("Fri.");
    }
    else if (lU1NkFeoI == 6) {
        printf ("Sat.");
    }
    else if (lU1NkFeoI == 0) {
        printf ("Sun.");
    }
    else {
    }
    return 0;
}

