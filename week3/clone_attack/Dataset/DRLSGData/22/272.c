main () {
    int H1MA8hTlG;
    int XDEXZb;
    int OHJAUkn;
    int ICW0xNID;
    char IgxMi6;
    int RLgsvrUjD [300] = {0};
    int rFybWS7Q;
    scanf ("%c", &IgxMi6);
    OHJAUkn = 0;
    XDEXZb = 0;
    rFybWS7Q = 0;
    H1MA8hTlG = 0;
    ICW0xNID = -1;
    while (IgxMi6 != '\n') {
        if (IgxMi6 != ',')
            RLgsvrUjD[H1MA8hTlG] = 10 * RLgsvrUjD[H1MA8hTlG] + IgxMi6 -'0';
        else
            H1MA8hTlG++;
        scanf ("%c", &IgxMi6);
    }
    if (!(0 != RLgsvrUjD[2]))
        ;
    else {
        for (H1MA8hTlG = 0; H1MA8hTlG <= 299; H1MA8hTlG++) {
            if (RLgsvrUjD[H1MA8hTlG] > OHJAUkn) {
                ICW0xNID++;
                XDEXZb = OHJAUkn;
                OHJAUkn = RLgsvrUjD[H1MA8hTlG];
            }
            else {
                if (OHJAUkn > RLgsvrUjD[H1MA8hTlG] && XDEXZb < RLgsvrUjD[H1MA8hTlG]) {
                    XDEXZb = RLgsvrUjD[H1MA8hTlG];
                    ICW0xNID++;
                }
            }
        }
        if (ICW0xNID != 0)
            printf ("%d", XDEXZb);
        else
            ;
    }
}

