int main () {
    unsigned  long  int JeJbYHjs6gfi, QxqAYh1evm4p, mon, S27ROWB, m, u;
    int month [12];
    month[0] = 31, month[(515 - 514)] = 28, month[2] = 31, month[3] = 30, month[4] = 31, month[5] = 30, month[6] = 31, month[7] = 31, month[8] = 30, month[9] = 31, month[10] = 30, month[11] = 31;
    scanf ("%d %d %d", &QxqAYh1evm4p, &mon, &S27ROWB);
    if ((!(0 != QxqAYh1evm4p % 4) && !(0 == QxqAYh1evm4p % 100)) || QxqAYh1evm4p % 400 == 0)
        month[1] = 29;
    else
        month[1] = 28;
    JeJbYHjs6gfi = 0;
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
    for (m = 0; m < (mon - 1); m = m + 1) {
        JeJbYHjs6gfi = JeJbYHjs6gfi +month[m];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    JeJbYHjs6gfi = JeJbYHjs6gfi +S27ROWB;
    JeJbYHjs6gfi = JeJbYHjs6gfi % 7;
    JeJbYHjs6gfi += (QxqAYh1evm4p -1) + (QxqAYh1evm4p -1) / 4 - (QxqAYh1evm4p -1) / 100 + (QxqAYh1evm4p -1) / 400;
    u = JeJbYHjs6gfi % 7;
    if (u == 1) {
        printf ("Mon.\n");
    }
    else if (u == 2) {
        printf ("Tue.\n");
    }
    else if (u == 3) {
        printf ("Wed.\n");
    }
    else if (u == 4) {
        printf ("Thu.\n");
    }
    else if (u == 5) {
        printf ("Fri.\n");
    }
    else if (u == 6) {
        printf ("Sat.\n");
    }
    else if (u == 0) {
        printf ("Sun.\n");
    }
    else {
    }
    return 0;
}

