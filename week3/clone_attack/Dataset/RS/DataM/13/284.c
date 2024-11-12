int main () {
    int UYtgs0Mq;
    int tnZ0poJB5 [20000];
    int XKUoWAkvtC4, kyzPJs0o;
    scanf ("%d", &UYtgs0Mq);
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
    {
        XKUoWAkvtC4 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (UYtgs0Mq > XKUoWAkvtC4) {
            scanf ("%d", &tnZ0poJB5[XKUoWAkvtC4]);
            XKUoWAkvtC4 = XKUoWAkvtC4 +1;
        };
    }
    printf ("%d", tnZ0poJB5[0]);
    {
        XKUoWAkvtC4 = 1;
        while (XKUoWAkvtC4 < UYtgs0Mq) {
            for (kyzPJs0o = 0; kyzPJs0o < XKUoWAkvtC4; kyzPJs0o++) {
                if (!(tnZ0poJB5[kyzPJs0o] != tnZ0poJB5[XKUoWAkvtC4]))
                    break;
            }
            if (kyzPJs0o == XKUoWAkvtC4)
                printf (" %d", tnZ0poJB5[XKUoWAkvtC4]);
            XKUoWAkvtC4++;
        };
    }
    return 0;
}

