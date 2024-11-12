void  main () {
    char Bldt5yK [100] = {""};
    char WiyjIc6oCv [100] = {""};
    char sr [100] = {""};
    char fBLdgfDtm [100] = {""};
    char wod [100] = {""};
    int j;
    int VLCqRa;
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
    int DEC8hxH;
    int n;
    int hDMX2C;
    j = (764 - 764);
    gets (WiyjIc6oCv);
    gets (fBLdgfDtm);
    gets (wod);
    puts (WiyjIc6oCv);
    n = strlen (WiyjIc6oCv);
    for (VLCqRa = 0; VLCqRa <= n; VLCqRa = VLCqRa +1) {
        if ((*(WiyjIc6oCv +VLCqRa) != ' ') && (*(WiyjIc6oCv +VLCqRa) != '\0')) {
            *(Bldt5yK +j) = *(WiyjIc6oCv +VLCqRa);
            j = j + 1;
        }
        else {
            j = 0;
            hDMX2C = strlen (Bldt5yK);
            if (strcmp (Bldt5yK, fBLdgfDtm) == 0) {
                strcat (WiyjIc6oCv, wod);
                {
                    DEC8hxH = VLCqRa -hDMX2C;
                    while (DEC8hxH < VLCqRa) {
                        *(WiyjIc6oCv +DEC8hxH) = '\0';
                        DEC8hxH = DEC8hxH +1;
                    };
                }
                {
                    DEC8hxH = VLCqRa;
                    while (DEC8hxH < n) {
                        *(sr + DEC8hxH -VLCqRa) = *(WiyjIc6oCv +DEC8hxH);
                        *(WiyjIc6oCv +DEC8hxH) = '\0';
                        DEC8hxH = DEC8hxH +1;
                    };
                }
                strcat (WiyjIc6oCv, sr);
                n = strlen (WiyjIc6oCv);
                {
                    DEC8hxH = 0;
                    while (DEC8hxH < (n - VLCqRa)) {
                        *(sr + DEC8hxH) = '\0';
                        DEC8hxH = DEC8hxH +1;
                    };
                }
                {
                    DEC8hxH = 0;
                    while (DEC8hxH < hDMX2C) {
                        *(Bldt5yK +DEC8hxH) = '\0';
                        DEC8hxH = DEC8hxH +1;
                    };
                };
            }
            else
                for (DEC8hxH = 0; DEC8hxH < hDMX2C; DEC8hxH = DEC8hxH +1)
                    *(Bldt5yK +DEC8hxH) = '\0';
        };
    };
}

