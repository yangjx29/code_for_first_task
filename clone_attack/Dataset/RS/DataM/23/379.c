void  main () {
    char zEpV0o1 [(795 - 695)], *AZ2A4CW;
    gets (zEpV0o1);
    int L0UGgHb;
    int RgIfmiC5lJ6G;
    RgIfmiC5lJ6G = strlen (zEpV0o1);
    AZ2A4CW = zEpV0o1;
    for (AZ2A4CW = zEpV0o1 + RgIfmiC5lJ6G -(223 - 222), L0UGgHb = RgIfmiC5lJ6G -1; AZ2A4CW >= zEpV0o1; AZ2A4CW--, L0UGgHb = L0UGgHb -1) {
        if (!(' ' != *AZ2A4CW)) {
            {
                AZ2A4CW = zEpV0o1 + L0UGgHb +1;
                while ((*AZ2A4CW != ' ' && *AZ2A4CW != '\0')) {
                    printf ("%c", *AZ2A4CW);
                    AZ2A4CW++;
                };
            }
            AZ2A4CW = zEpV0o1 + L0UGgHb;
            printf (" ");
        }
        if (L0UGgHb == 0) {
            for (AZ2A4CW = zEpV0o1 + L0UGgHb; (*AZ2A4CW != ' ' && *AZ2A4CW != '\0'); AZ2A4CW++)
                printf ("%c", *AZ2A4CW);
        };
    };
}

