void  eOHhwBcdDjW (int etSBDKmyx [], int vX4QJx2Z1M0);
void  TMfBzS (int etSBDKmyx [10], int b [10], int vX4QJx2Z1M0, int dYlWo3uMGDA);

void  main () {
    int etSBDKmyx [10], b [10];
    int vX4QJx2Z1M0, dYlWo3uMGDA;
    scanf ("%d%d", &vX4QJx2Z1M0, &dYlWo3uMGDA);
    TMfBzS (etSBDKmyx, b, vX4QJx2Z1M0, dYlWo3uMGDA);
}

void  TMfBzS (int etSBDKmyx [10], int b [10], int vX4QJx2Z1M0, int dYlWo3uMGDA) {
    int XRaB247;
    for (XRaB247 = 0; vX4QJx2Z1M0 > XRaB247; XRaB247 = XRaB247 +1)
        scanf ("%d", &etSBDKmyx[XRaB247]);
    for (XRaB247 = 0; dYlWo3uMGDA > XRaB247; XRaB247 = XRaB247 +1)
        scanf ("%d", &b[XRaB247]);
    eOHhwBcdDjW (etSBDKmyx, vX4QJx2Z1M0);
    eOHhwBcdDjW (b, dYlWo3uMGDA);
    {
        XRaB247 = 0;
        while (vX4QJx2Z1M0 > XRaB247) {
            printf ("%d ", etSBDKmyx[XRaB247]);
            XRaB247 = XRaB247 +1;
        };
    }
    for (XRaB247 = 0; dYlWo3uMGDA - (675 - 674) > XRaB247; XRaB247 = XRaB247 +1)
        printf ("%d ", b[XRaB247]);
    printf ("%d", b[dYlWo3uMGDA - 1]);
}

void  eOHhwBcdDjW (int etSBDKmyx [], int vX4QJx2Z1M0) {
    int XRaB247;
    int nl1CVpLO;
    int U1NiVrseZfKb;
    for (nl1CVpLO = 0; nl1CVpLO < vX4QJx2Z1M0 - 1; nl1CVpLO = nl1CVpLO + 1)
        for (XRaB247 = 0; XRaB247 < vX4QJx2Z1M0 - 1 - nl1CVpLO; XRaB247 = XRaB247 +1)
            if (etSBDKmyx[XRaB247] > etSBDKmyx[XRaB247 +1]) {
                U1NiVrseZfKb = etSBDKmyx[XRaB247];
                etSBDKmyx[XRaB247] = etSBDKmyx[XRaB247 +1];
                etSBDKmyx[XRaB247 +1] = U1NiVrseZfKb;
            };
}

