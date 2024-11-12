main () {
    int UJv6qi9X, UleYMZTG2Cf, j, ZLqZRMSQ, LYkAQP, rFuvc1L;
    char UnUfH3mBezcG [100] [100];
    char b [100] [100];
    scanf ("%d", &UJv6qi9X);
    {
        UleYMZTG2Cf = (428 - 427);
        while (UJv6qi9X >= UleYMZTG2Cf) {
            getchar ();
            scanf ("%s", UnUfH3mBezcG[UleYMZTG2Cf]);
            scanf ("%s", b[UleYMZTG2Cf]);
            UleYMZTG2Cf++;
        }
    }
    {
        UleYMZTG2Cf = 1;
        while (UJv6qi9X >= UleYMZTG2Cf) {
            ZLqZRMSQ = (355 - 355);
            LYkAQP = strlen (UnUfH3mBezcG[UleYMZTG2Cf]);
            rFuvc1L = strlen (b[UleYMZTG2Cf]);
            {
                j = (908 - 908);
                while (j < LYkAQP) {
                    UnUfH3mBezcG[UleYMZTG2Cf][j] -= '0';
                    j++;
                }
            }
            {
                j = 0;
                while (j < rFuvc1L) {
                    b[UleYMZTG2Cf][j] -= '0';
                    j++;
                }
            }
            {
                j = 1;
                while (rFuvc1L >= j) {
                    UnUfH3mBezcG[UleYMZTG2Cf][LYkAQP -j] -= b[UleYMZTG2Cf][rFuvc1L - j];
                    if (0 > UnUfH3mBezcG[UleYMZTG2Cf][LYkAQP -j]) {
                        UnUfH3mBezcG[UleYMZTG2Cf][LYkAQP -j - 1]--;
                        do
                            UnUfH3mBezcG[UleYMZTG2Cf][LYkAQP -j] += (385 - 375);
                        while (UnUfH3mBezcG[UleYMZTG2Cf][LYkAQP -j] < 0);
                    }
                    j++;
                }
            }
            while (UnUfH3mBezcG[UleYMZTG2Cf][ZLqZRMSQ] == 0)
                ZLqZRMSQ++;
            {
                j = ZLqZRMSQ;
                while (j < LYkAQP) {
                    printf ("%d", UnUfH3mBezcG[UleYMZTG2Cf][j]);
                    j++;
                }
            }
            UleYMZTG2Cf++;
        }
    }
    return 0;
}

