void  main () {
    int uLz4Wi, dbDINiUCqu [300], DNY29LoT6R, GBpDcxMFgHln, VZbEOGX = 1;
    scanf ("%d", &uLz4Wi);
    {
        DNY29LoT6R = 1;
        while (DNY29LoT6R < uLz4Wi) {
            scanf ("%d ", &dbDINiUCqu[DNY29LoT6R]);
            DNY29LoT6R++;
        };
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
    scanf ("%d", &dbDINiUCqu[uLz4Wi]);
    printf ("%d", dbDINiUCqu[1]);
    {
        DNY29LoT6R = 2;
        while (DNY29LoT6R <= uLz4Wi) {
            {
                GBpDcxMFgHln = 1;
                while (DNY29LoT6R > GBpDcxMFgHln) {
                    if (dbDINiUCqu[GBpDcxMFgHln] == dbDINiUCqu[DNY29LoT6R])
                        VZbEOGX = 0;
                    GBpDcxMFgHln = GBpDcxMFgHln +1;
                };
            }
            if (VZbEOGX == 1)
                printf (",%d", dbDINiUCqu[DNY29LoT6R]);
            DNY29LoT6R++;
            VZbEOGX = 1;
        };
    };
}

