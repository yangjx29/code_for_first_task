int main () {
    int BoR7F6yXYAgr, a, VT51tzQ, bgIEWsjPm9, GcsPgS35p;
    scanf ("%d", &BoR7F6yXYAgr);
    if (10 > BoR7F6yXYAgr)
        printf ("%d", BoR7F6yXYAgr);
    if (10 < BoR7F6yXYAgr &&100 > BoR7F6yXYAgr) {
        a = BoR7F6yXYAgr % 10;
        VT51tzQ = BoR7F6yXYAgr / 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        BoR7F6yXYAgr = 10 * a + VT51tzQ;
        printf ("%d", BoR7F6yXYAgr);
    }
    if (100 < BoR7F6yXYAgr &&BoR7F6yXYAgr < 1000) {
        a = BoR7F6yXYAgr % 10;
        VT51tzQ = (BoR7F6yXYAgr % 100 - a) / 10;
        bgIEWsjPm9 = BoR7F6yXYAgr / 100;
        BoR7F6yXYAgr = 100 * a + 10 * VT51tzQ +bgIEWsjPm9;
        printf ("%d", BoR7F6yXYAgr);
    }
    if (BoR7F6yXYAgr > 1000 && 10000 > BoR7F6yXYAgr) {
        a = BoR7F6yXYAgr % 10;
        VT51tzQ = (BoR7F6yXYAgr % 100 - a) / 10;
        bgIEWsjPm9 = (BoR7F6yXYAgr % 1000 - 10 * VT51tzQ -a) / 100;
        GcsPgS35p = BoR7F6yXYAgr / 1000;
        BoR7F6yXYAgr = 1000 * a + 100 * VT51tzQ +10 * bgIEWsjPm9 + GcsPgS35p;
        printf ("%d", BoR7F6yXYAgr);
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
    if (BoR7F6yXYAgr == 10)
        ;
    if (BoR7F6yXYAgr == 100)
        ;
    if (BoR7F6yXYAgr == 1000)
        printf ("0001");
    if (BoR7F6yXYAgr == 10000)
        ;
    return 0;
}

