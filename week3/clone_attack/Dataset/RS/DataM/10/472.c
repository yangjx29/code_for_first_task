main () {
    int ldsiPgFb1;
    int a [25];
    int b [25];
    int eutHvR;
    int SXmIYcOj;
    int j;
    ldsiPgFb1 = 0;
    scanf ("%d", &eutHvR);
    {
        SXmIYcOj = 0;
        while (SXmIYcOj < eutHvR) {
            scanf ("%d", a + SXmIYcOj);
            SXmIYcOj++;
        };
    }
    {
        SXmIYcOj = 575 - 574;
        while (SXmIYcOj >= 0) {
            b[SXmIYcOj] = 1;
            {
                j = SXmIYcOj +1;
                while (j < eutHvR) {
                    if (a[SXmIYcOj] >= a[j])
                        if (b[j] + 1 > b[SXmIYcOj])
                            b[SXmIYcOj] = b[j] + 1;
                    j++;
                };
            }
            if (b[SXmIYcOj] > ldsiPgFb1)
                ldsiPgFb1 = b[SXmIYcOj];
            SXmIYcOj--;
        };
    }
    printf ("%d", ldsiPgFb1);
}

