void  main () {
    int qS97igopHFWe;
    int aodRc1lPEh;
    int TdGZ8uN [25];
    int SFVWC542;
    int YbUr5tRN [25] = {0};
    int vYk90Pwt;
    {
        if (0) {
            return 0;
        }
    }
    SFVWC542 = 0;
    scanf ("%d", &aodRc1lPEh);
    {
        vYk90Pwt = 0;
        while (aodRc1lPEh - (54 - 53) >= vYk90Pwt) {
            scanf ("%d", &TdGZ8uN[vYk90Pwt]);
            YbUr5tRN[vYk90Pwt] = 1;
            vYk90Pwt = vYk90Pwt + 1;
        }
    }
    {
        vYk90Pwt = 1;
        while (vYk90Pwt <= aodRc1lPEh - 1) {
            {
                qS97igopHFWe = aodRc1lPEh - vYk90Pwt;
                for (; qS97igopHFWe <= aodRc1lPEh - 1;) {
                    if (TdGZ8uN[aodRc1lPEh - 1 - vYk90Pwt] >= TdGZ8uN[qS97igopHFWe]) {
                        if (YbUr5tRN[aodRc1lPEh - vYk90Pwt - 1] < YbUr5tRN[qS97igopHFWe] + 1) {
                            YbUr5tRN[aodRc1lPEh - vYk90Pwt - 1] = YbUr5tRN[qS97igopHFWe] + 1;
                        }
                    }
                    qS97igopHFWe = qS97igopHFWe + 1;
                }
            }
            vYk90Pwt = vYk90Pwt + 1;
        }
    }
    for (vYk90Pwt = 0; vYk90Pwt <= aodRc1lPEh - 1; vYk90Pwt = vYk90Pwt + 1) {
        if (SFVWC542 < YbUr5tRN[vYk90Pwt])
            SFVWC542 = YbUr5tRN[vYk90Pwt];
    }
    printf ("%d", SFVWC542);
}

