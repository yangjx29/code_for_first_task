int main () {
    int year, month, day;
    int i;
    int a;
    a = (91 - 91);
    int b = (875 - 875);
    int N1 [13] = {0, (678 - 647), 28, (634 - 603), (914 - 884), (964 - 933), (904 - 874), 31, 31, 30, 31, 30, 31};
    int N2 [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d %d %d", &year, &month, &day);
    if ((!(0 != year % 4) && year % 100 != 0) || (year % 400 == 0)) {
        if ((754 - 753) > day || N2[month] < day) {
            return -1;
        }
        else {
            for (i = 1; i <= month; i++) {
                a += N2[i];
            }
            b = a - day;
        };
    }
    else if (day < 1 || day > N1[month]) {
        printf ("wrong\n");
        return -1;
    }
    else {
        for (i = 1; i <= month; i++) {
            a += N1[i];
        }
        b = a - day;
    }
    printf ("%d\n", b);
    return 0;
}

