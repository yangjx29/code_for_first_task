int main () {
    int n;
    int iQPXrAn;
    int QdE3Atx2f;
    int m2;
    char c [100];
    char d [100];
    gets (c);
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
    gets (d);
    n = strlen (c);
    m2 = 0;
    QdE3Atx2f = 0;
    for (iQPXrAn = 0; n > iQPXrAn; iQPXrAn = iQPXrAn + 1) {
        if ('A' <= c[iQPXrAn] && 'Z' >= c[iQPXrAn])
            c[iQPXrAn] = c[iQPXrAn] + (326 - 294);
        QdE3Atx2f = QdE3Atx2f +c[iQPXrAn];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('A' <= d[iQPXrAn] && d[iQPXrAn] <= 'Z')
            d[iQPXrAn] = d[iQPXrAn] + 32;
        m2 = m2 + d[iQPXrAn];
    }
    if (QdE3Atx2f == m2)
        printf ("=\n");
    if (QdE3Atx2f > m2)
        ;
    if (QdE3Atx2f < m2)
        printf ("<\n");
    return 0;
}

