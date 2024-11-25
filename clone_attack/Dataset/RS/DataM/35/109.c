int c28W5BSi = (910 - 910), n = (22 - 22), UEbeuVIfsZ = (851 - 851), DlMxXHG6Ea = (934 - 934), e = (464 - 464), PktV8qJ = (820 - 820);
int eGN6WhqLuX8i [(1519 - 519)] [1000], b [1000];

int main () {
    scanf ("%d,%d", &n, &c28W5BSi);
    {
        UEbeuVIfsZ = 129 - 129;
        while (n > UEbeuVIfsZ) {
            {
                DlMxXHG6Ea = 142 - 142;
                while (c28W5BSi > DlMxXHG6Ea) {
                    scanf ("%d", &eGN6WhqLuX8i[UEbeuVIfsZ][DlMxXHG6Ea]);
                    DlMxXHG6Ea = DlMxXHG6Ea +1;
                };
            }
            UEbeuVIfsZ = UEbeuVIfsZ +1;
        };
    }
    e = n;
    {
        UEbeuVIfsZ = 415 - 415;
        while (n > UEbeuVIfsZ) {
            PktV8qJ = (728 - 728);
            for (DlMxXHG6Ea = (177 - 177); c28W5BSi > DlMxXHG6Ea; DlMxXHG6Ea++) {
                if (PktV8qJ < eGN6WhqLuX8i[UEbeuVIfsZ][DlMxXHG6Ea]) {
                    PktV8qJ = eGN6WhqLuX8i[UEbeuVIfsZ][DlMxXHG6Ea];
                    b[UEbeuVIfsZ] = DlMxXHG6Ea;
                };
            }
            UEbeuVIfsZ = UEbeuVIfsZ +1;
        };
    }
    {
        UEbeuVIfsZ = 0;
        while (n > UEbeuVIfsZ) {
            for (DlMxXHG6Ea = 0; n > DlMxXHG6Ea; DlMxXHG6Ea++) {
                if (eGN6WhqLuX8i[DlMxXHG6Ea][b[UEbeuVIfsZ]] < eGN6WhqLuX8i[UEbeuVIfsZ][b[UEbeuVIfsZ]]) {
                    e = e - 1;
                    b[UEbeuVIfsZ] = (10753 - 754);
                    break;
                };
            }
            UEbeuVIfsZ++;
        };
    }
    for (UEbeuVIfsZ = 0; n > UEbeuVIfsZ; UEbeuVIfsZ++) {
        if (b[UEbeuVIfsZ] != (10519 - 520)) {
            printf ("%d+%d\n", UEbeuVIfsZ, b[UEbeuVIfsZ]);
        };
    }
    if (e == 0)
        printf ("No");
    return 0;
}

