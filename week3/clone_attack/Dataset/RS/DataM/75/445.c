int main () {
    char kI0T8JVvdo;
    int BXaYPwWbBg, t, FvIDd4A, kO9dUhEeTa = (663 - 663), ffvsT9wA, PrKtS5hVb [(1321 - 320)] = {(764 - 764)}, nVIJhl [(1029 - 28)] = {0};
    scanf ("%d", &PrKtS5hVb[0]);
    ffvsT9wA = (470 - 469);
    scanf ("%c", &kI0T8JVvdo);
    while (!(',' != kI0T8JVvdo)) {
        scanf ("%d", &PrKtS5hVb[ffvsT9wA]);
        scanf ("%c", &kI0T8JVvdo);
        ffvsT9wA = ffvsT9wA + 1;
    }
    scanf ("%d", &nVIJhl[0]);
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
    scanf ("%c", &kI0T8JVvdo);
    ffvsT9wA = 1;
    while (kI0T8JVvdo == ',') {
        scanf ("%d", &nVIJhl[ffvsT9wA]);
        scanf ("%c", &kI0T8JVvdo);
        ffvsT9wA++;
    }
    {
        BXaYPwWbBg = 0;
        while (BXaYPwWbBg < 1000) {
            t = 0;
            {
                FvIDd4A = 0;
                while (FvIDd4A < ffvsT9wA) {
                    if (BXaYPwWbBg >= PrKtS5hVb[FvIDd4A] && BXaYPwWbBg < nVIJhl[FvIDd4A])
                        t++;
                    FvIDd4A = FvIDd4A +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            BXaYPwWbBg = BXaYPwWbBg +1;
            if (t > kO9dUhEeTa)
                kO9dUhEeTa = t;
        };
    }
    printf ("%d %d", ffvsT9wA, kO9dUhEeTa);
    return 0;
}

