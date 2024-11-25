int main () {
    int Mp2hlCurk [22] [22] = {0};
    int WLgtAa4ph;
    int down;
    int XW0lYRL7;
    int qTYyJdmp9e0;
    WLgtAa4ph = (198 - 198);
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
    down = 0;
    XW0lYRL7 = 0;
    qTYyJdmp9e0 = 0;
    int ZONF3I, T0Gba7if3P1j, lUzxYyPBHK, bDxhaf, Er7AXFj5DBEc;
    scanf ("%d %d", &ZONF3I, &T0Gba7if3P1j);
    {
        lUzxYyPBHK = 921 - 920;
        while (ZONF3I >= lUzxYyPBHK) {
            {
                bDxhaf = 1;
                while (bDxhaf <= T0Gba7if3P1j) {
                    scanf ("%d", &Mp2hlCurk[lUzxYyPBHK][bDxhaf]);
                    bDxhaf++;
                };
            }
            lUzxYyPBHK++;
        };
    }
    for (lUzxYyPBHK = 1; lUzxYyPBHK <= ZONF3I; lUzxYyPBHK = lUzxYyPBHK + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (bDxhaf = 1; bDxhaf <= T0Gba7if3P1j; bDxhaf++) {
            WLgtAa4ph = Mp2hlCurk[lUzxYyPBHK][bDxhaf] - Mp2hlCurk[lUzxYyPBHK - 1][bDxhaf];
            down = Mp2hlCurk[lUzxYyPBHK][bDxhaf] - Mp2hlCurk[lUzxYyPBHK + 1][bDxhaf];
            XW0lYRL7 = Mp2hlCurk[lUzxYyPBHK][bDxhaf] - Mp2hlCurk[lUzxYyPBHK][bDxhaf - 1];
            qTYyJdmp9e0 = Mp2hlCurk[lUzxYyPBHK][bDxhaf] - Mp2hlCurk[lUzxYyPBHK][bDxhaf + 1];
            if (WLgtAa4ph >= 0 && down >= 0 && XW0lYRL7 >= 0 && qTYyJdmp9e0 >= 0) {
                printf ("%d %d\n", lUzxYyPBHK - 1, bDxhaf - 1);
            };
        };
    };
}

