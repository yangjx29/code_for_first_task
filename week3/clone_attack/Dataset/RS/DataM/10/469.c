main () {
    int a [26] = {(568 - 568)};
    int b [26] = {(652 - 652)};
    int UBMrk9cP3F;
    int fycGUW, j7v54r, VsBb1zV9;
    scanf ("%d", &UBMrk9cP3F);
    {
        fycGUW = 1;
        while (fycGUW <= UBMrk9cP3F) {
            scanf ("%d", &a[fycGUW]);
            fycGUW = fycGUW + 1;
        };
    }
    {
        fycGUW = UBMrk9cP3F;
        while (fycGUW >= 1) {
            VsBb1zV9 = 0;
            {
                j7v54r = fycGUW;
                while (j7v54r <= UBMrk9cP3F) {
                    if (a[fycGUW] >= a[j7v54r])
                        VsBb1zV9 = b[j7v54r] + 1;
                    j7v54r = j7v54r + 1;
                    if (b[fycGUW] < VsBb1zV9)
                        b[fycGUW] = VsBb1zV9;
                };
            }
            fycGUW = fycGUW - 1;
        };
    }
    VsBb1zV9 = 0;
    for (fycGUW = 1; fycGUW <= UBMrk9cP3F; fycGUW = fycGUW + 1)
        if (b[fycGUW] > VsBb1zV9)
            VsBb1zV9 = b[fycGUW];
    printf ("%d", VsBb1zV9);
}

