int LeapQ (int);
int DayCount (int, int, int);

int main () {
    int TykzeDIqipv, n;
    scanf ("%d", &n);
    for (TykzeDIqipv = 1; TykzeDIqipv <= 12; TykzeDIqipv++) {
        if ((DayCount (1, TykzeDIqipv, 13) - (6 - n)) % 7 == 0)
            printf ("%d\n", TykzeDIqipv);
    }
    return 0;
}

int LeapQ (int year) {
    return (!(0 != year % 400) || year % 100 != 0 && !(0 != year % 4)) ? 1 : 0;
}

int DayCount (int year, int is91dkYSW, int U05NYlQZ6V) {
    int TykzeDIqipv, num = 0;
    for (TykzeDIqipv = 1; is91dkYSW > TykzeDIqipv; TykzeDIqipv++) {
        if (TykzeDIqipv == 2)
            num += LeapQ (year) ? 29 : 28;
        else
            num += (TykzeDIqipv == 1 || TykzeDIqipv == 3 || TykzeDIqipv == 5 || TykzeDIqipv == 7 || TykzeDIqipv == 8 || TykzeDIqipv == 10 || TykzeDIqipv == 12) ? 31 : 30;
    }
    num += U05NYlQZ6V;
    return num;
}

