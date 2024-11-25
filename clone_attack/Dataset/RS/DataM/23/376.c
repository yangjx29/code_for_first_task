int main () {
    char a [101];
    int n = 0;
    int ijCTWK;
    int O087NamLr;
    ijCTWK = 0;
    gets (a);
    while (!('\0' == a[ijCTWK])) {
        ijCTWK = ijCTWK + 1;
        n = n + 1;
    }
    ijCTWK = n - 1;
    a[n] = ' ';
    while (ijCTWK >= 0) {
        if (!(' ' != a[ijCTWK])) {
            for (O087NamLr = ijCTWK + 1; a[O087NamLr] != ' '; O087NamLr = O087NamLr +1)
                printf ("%c", a[O087NamLr]);
        }
        if (ijCTWK == 0)
            for (O087NamLr = 0; a[O087NamLr] != ' '; O087NamLr = O087NamLr +1)
                printf ("%c", a[O087NamLr]);
        ijCTWK = ijCTWK - 1;
    }
    return 0;
}

