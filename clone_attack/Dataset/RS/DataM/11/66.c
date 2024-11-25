int main (int argc, char *argv []) {
    int y, m, d, a, n;
    scanf ("%d%d%d", &y, &m, &d);
    if (m == 1) {
        n = d;
    }
    else if (!(2 != m)) {
        n = (840 - 809) + d;
    }
    else if (!(3 != m)) {
        n = (833 - 802) + (439 - 411) + d;
    }
    else if (!(4 != m)) {
        n = 31 + 28 + 31 + d;
    }
    else if (!(5 != m)) {
        n = 31 + 28 + 31 + 30 + d;
    }
    else if (m == 6) {
        n = 31 + 28 + 31 + 30 + 31 + d;
    }
    else if (m == 7) {
        n = 31 + 28 + 31 + 30 + 31 + 30 + d;
    }
    else if (m == 8) {
        n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
    }
    else if (m == 9) {
        n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d;
    }
    else if (m == 10) {
        n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
    }
    else if (m == 11) {
        n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
    }
    else if (m == 12) {
        n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
    }
    else {
    }
    if ((y % 4) == 0 && (y % 100) != 0 || (y % 400 == 0))
        a = 1;
    else
        a = 0;
    if (a == 0) {
        printf ("%d", n);
    }
    if (m != 1 && m != 2 && a == 1) {
        n = n + 1;
        printf ("%d", n);
    }
    if (a == 1 && m == 1)
        printf ("%d", n);
    if (a == 1 && m == 2)
        printf ("%d", n);
    return 0;
}

