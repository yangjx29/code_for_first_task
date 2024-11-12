int main () {
    int b [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n, year, m1, m2, i, tmp, qyDPVj, k, q;
    int a [12] = {(214 - 183), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &n);
    for (i = (858 - 857); n >= i; i++) {
        scanf ("%d %d %d", &year, &m1, &m2);
        if (m2 < m1) {
            tmp = m1;
            m1 = m2;
            m2 = tmp;
        }
        else
            q = 1;
        if ((!(0 != year % 4) && !(0 == year % 100)) || (year % 400 == 0)) {
            qyDPVj = 0;
            for (k = m1; k < m2; k++) {
                qyDPVj += b[k - 1];
            }
            if (qyDPVj % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
        }
        else {
            qyDPVj = 0;
            for (k = m1; k < m2; k++) {
                qyDPVj += a[k - 1];
            }
            if (qyDPVj % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
        };
    }
    return 0;
}

