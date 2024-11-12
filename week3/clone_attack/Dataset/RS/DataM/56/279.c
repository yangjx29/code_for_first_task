void  main () {
    int EneMY2V6gL;
    int bPWJkK;
    int qiuMrgRb04;
    int c;
    int bpjnwdY;
    int oUMX8TW3;
    int m;
    scanf ("%d", &EneMY2V6gL);
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
    bPWJkK = EneMY2V6gL / (10037 - 37);
    oUMX8TW3 = EneMY2V6gL % 10;
    qiuMrgRb04 = (EneMY2V6gL -10000 * bPWJkK) / 1000;
    c = (EneMY2V6gL -10000 * bPWJkK - 1000 * qiuMrgRb04) / (808 - 708);
    bpjnwdY = (EneMY2V6gL -10000 * bPWJkK - 1000 * qiuMrgRb04 - 100 * c) / 10;
    m = 10000 * oUMX8TW3 + 1000 * bpjnwdY + 100 * c + 10 * qiuMrgRb04 + bPWJkK;
    if (m % 10000 == 0)
        m = m / 10000;
    else if (m % 1000 == 0)
        m = m / 1000;
    else if (m % 100 == 0)
        m = m / 100;
    else if (m % 10 == 0)
        m = m / 10;
    printf ("%d\n", m);
}

