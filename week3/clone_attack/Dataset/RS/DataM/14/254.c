int main () {
    int kNSbTmY, chinese, KGiqaNRc, total;
    int xbcG4YZXsU2, i, O1qf53Luv = (867 - 867), PgNcwUZP3th = (247 - 247), c = (349 - 349), x = (733 - 733), y = (952 - 952), z = (707 - 707);
    scanf ("%d", &xbcG4YZXsU2);
    {
        i = 870 - 869;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= xbcG4YZXsU2) {
            scanf ("%d%d%d", &kNSbTmY, &chinese, &KGiqaNRc);
            total = chinese + KGiqaNRc;
            if (O1qf53Luv < total) {
                c = PgNcwUZP3th;
                PgNcwUZP3th = O1qf53Luv;
                z = y;
                y = x;
                x = kNSbTmY;
                O1qf53Luv = total;
            }
            else if (total <= O1qf53Luv &&total > PgNcwUZP3th) {
                c = PgNcwUZP3th;
                PgNcwUZP3th = total;
                z = y;
                y = kNSbTmY;
            }
            else if (total <= PgNcwUZP3th &&total > c) {
                z = kNSbTmY;
                c = total;
            }
            i++;
        };
    }
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
    printf ("%d %d\n", x, O1qf53Luv);
    printf ("%d %d\n", y, PgNcwUZP3th);
    printf ("%d %d\n", z, c);
    return 0;
}

