void  main () {
    int y9WAqzYXJHTZ [301] = {(335 - 335)};
    int AJ1gueV, n, XZRatQ;
    scanf ("%d", &n);
    {
        AJ1gueV = 31 - 31;
        while (AJ1gueV < n) {
            scanf ("%d", &y9WAqzYXJHTZ[AJ1gueV]);
            AJ1gueV = AJ1gueV +1;
        };
    }
    {
        AJ1gueV = 696 - 696;
        while (AJ1gueV < n) {
            {
                XZRatQ = AJ1gueV +1;
                while (XZRatQ < n) {
                    if (y9WAqzYXJHTZ[XZRatQ] == y9WAqzYXJHTZ[AJ1gueV])
                        y9WAqzYXJHTZ[XZRatQ] = 0;
                    XZRatQ = XZRatQ +1;
                };
            }
            AJ1gueV = AJ1gueV +1;
        };
    }
    {
        AJ1gueV = 0;
        while (AJ1gueV < n) {
            if (y9WAqzYXJHTZ[AJ1gueV] != 0 && AJ1gueV == 0)
                printf ("%d", y9WAqzYXJHTZ[AJ1gueV]);
            else {
                if (y9WAqzYXJHTZ[AJ1gueV] != 0 && AJ1gueV > 0)
                    printf (",%d", y9WAqzYXJHTZ[AJ1gueV]);
                else
                    ;
            }
            AJ1gueV++;
        };
    };
}

