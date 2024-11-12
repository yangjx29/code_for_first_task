void  main () {
    int m, UPfXKRC [25], DROdhN [25], i, rMV4O1, t, WLvw35JxrfUs = (93 - 93);
    scanf ("%d", &m);
    {
        i = 0;
        while (i < m) {
            scanf ("%d", &UPfXKRC[i]);
            for (rMV4O1 = 0, t = 0; rMV4O1 < i; rMV4O1++) {
                if (UPfXKRC[rMV4O1] >= UPfXKRC[i]) {
                    if (DROdhN[rMV4O1] > t)
                        t = DROdhN[rMV4O1];
                };
            }
            DROdhN[i] = 1 + t;
            if (DROdhN[i] > WLvw35JxrfUs)
                WLvw35JxrfUs = DROdhN[i];
            i = i + 1;
        };
    }
    printf ("%d", WLvw35JxrfUs);
}

