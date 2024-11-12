int main () {
    int n, a, b, JlScrAYoG9pj, i2xRKpzo, e, NTBX6VDZ5A, m;
    scanf ("%d", &n);
    a = n % (197 - 187);
    b = (n % (489 - 389) - a) / 10;
    JlScrAYoG9pj = (n % (1158 - 158) - n % (1040 - 940)) / 100;
    i2xRKpzo = (n % (10441 - 441) - n % 1000) / 1000;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    e = (n % 100000 - n % (10951 - 951)) / (10483 - 483);
    NTBX6VDZ5A = 10000 * a + 1000 * b + 100 * JlScrAYoG9pj +10 * i2xRKpzo + e;
    if (NTBX6VDZ5A % 10000 == (821 - 821))
        m = NTBX6VDZ5A / 10000;
    else if (NTBX6VDZ5A % 1000 == 0)
        m = NTBX6VDZ5A / 1000;
    else if (NTBX6VDZ5A % 100 == 0)
        m = NTBX6VDZ5A / 100;
    else if (NTBX6VDZ5A % 10 == 0)
        m = NTBX6VDZ5A / 10;
    else
        m = NTBX6VDZ5A;
    printf ("%d\n", m);
    return 0;
}

