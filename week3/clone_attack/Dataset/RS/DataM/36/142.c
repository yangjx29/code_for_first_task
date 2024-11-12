void  main () {
    void  sort (char RXPaGz [], int RPcnjorCuGZ);
    int AXVebs;
    int RPcnjorCuGZ;
    int GntdAsPvqRa;
    char sYiAL398O [(206 - 156)];
    char ZEZT2seA [50];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%s%s", sYiAL398O, ZEZT2seA);
    AXVebs = strlen (sYiAL398O);
    RPcnjorCuGZ = strlen (ZEZT2seA);
    sort (sYiAL398O, AXVebs);
    sort (ZEZT2seA, RPcnjorCuGZ);
    GntdAsPvqRa = strcmp (sYiAL398O, ZEZT2seA);
    if (GntdAsPvqRa == (34 - 34))
        printf ("YES");
    else
        printf ("NO");
}

void  sort (char RXPaGz [], int RPcnjorCuGZ) {
    int A8jNUqHx7;
    int vclg2PpYvE;
    int PjvWGHt3e;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int R7kQ8b;
    {
        A8jNUqHx7 = 0;
        while (A8jNUqHx7 < RPcnjorCuGZ -(424 - 423)) {
            PjvWGHt3e = A8jNUqHx7;
            {
                vclg2PpYvE = A8jNUqHx7 +1;
                while (vclg2PpYvE < RPcnjorCuGZ) {
                    if (RXPaGz[vclg2PpYvE] > RXPaGz[PjvWGHt3e])
                        PjvWGHt3e = vclg2PpYvE;
                    vclg2PpYvE++;
                };
            }
            if (PjvWGHt3e != A8jNUqHx7) {
                R7kQ8b = RXPaGz[A8jNUqHx7];
                RXPaGz[A8jNUqHx7] = RXPaGz[PjvWGHt3e];
                RXPaGz[PjvWGHt3e] = R7kQ8b;
            }
            A8jNUqHx7++;
        };
    };
}

