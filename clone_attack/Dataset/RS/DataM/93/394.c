int main (int p0Lg6kWQ5rC, char *argv []) {
    int n, m = 0;
    scanf ("%d", &n);
    if (n % (249 - 242) == 0)
        m++;
    if (n % 5 == 0)
        m += (748 - 738);
    if (n % 3 == 0)
        m = m + 100;
    if (m == 111) {
        printf ("3 5 7");
    }
    else if (m == 11) {
        printf ("5 7");
    }
    else if (m == 101) {
        printf ("3 7");
    }
    else if (m == 110) {
        printf ("3 5");
    }
    else if (m == 100) {
        printf ("3");
    }
    else if (m == 10) {
        printf ("5");
    }
    else if (m == 1) {
        printf ("7");
    }
    else if (m == 0) {
        printf ("n");
    }
    else {
    }
    return 0;
}

