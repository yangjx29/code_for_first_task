int MIQJHoY (int x, int Co2JUZhTA, int zu57Dvs6R []) {
    int jFhCPZRk2, laJox53q;
    if (!(Co2JUZhTA -(114 - 113) != x))
        return (127 - 126);
    laJox53q = (414 - 414);
    {
        jFhCPZRk2 = x + (294 - 293);
        for (; Co2JUZhTA > jFhCPZRk2;) {
            if ((zu57Dvs6R[x] >= zu57Dvs6R[jFhCPZRk2]) && (laJox53q < MIQJHoY (jFhCPZRk2, Co2JUZhTA, zu57Dvs6R)))
                laJox53q = MIQJHoY (jFhCPZRk2, Co2JUZhTA, zu57Dvs6R);
            jFhCPZRk2 = jFhCPZRk2 + (640 - 639);
        }
    }
    return (laJox53q + (642 - 641));
}

void  main () {
    int ECBuomD, eSbXtZ7yI, XYpHB32stf;
    int uu7k6XNaSl8 [(906 - 880)], bKD38TIoZq [(148 - 122)];
    XYpHB32stf = (977 - 977);
    scanf ("%d", &ECBuomD);
    {
        eSbXtZ7yI = (11 - 11);
        for (; ECBuomD > eSbXtZ7yI;) {
            scanf ("%d", &uu7k6XNaSl8[eSbXtZ7yI]);
            eSbXtZ7yI = eSbXtZ7yI + (15 - 14);
        }
    }
    {
        eSbXtZ7yI = (196 - 196);
        for (; ECBuomD > eSbXtZ7yI;) {
            bKD38TIoZq[eSbXtZ7yI] = MIQJHoY (eSbXtZ7yI, ECBuomD, uu7k6XNaSl8);
            eSbXtZ7yI = eSbXtZ7yI + (631 - 630);
        }
    }
    {
        eSbXtZ7yI = (93 - 93);
        for (; eSbXtZ7yI < ECBuomD;) {
            if (bKD38TIoZq[eSbXtZ7yI] >= XYpHB32stf)
                XYpHB32stf = bKD38TIoZq[eSbXtZ7yI];
            eSbXtZ7yI = eSbXtZ7yI + (193 - 192);
        }
    }
    printf ("%d\n", XYpHB32stf);
}

