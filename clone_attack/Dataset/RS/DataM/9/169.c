main () {
    int n;
    int i;
    int j;
    int egWhl8e4s;
    int iBhEFpGnO;
    int mwFkH9Ko0;
    int year;
    int ju [100];
    int lfRTNjSCtQk [100] = {(372 - 372)};
    char hsxzhBNVIQ [10];
    char j2Vj5KCDrPG [(1046 - 946)] [(249 - 239)];
    char senior [(695 - 595)] [(527 - 517)];
    int se [100];
    mwFkH9Ko0 = -(722 - 721);
    iBhEFpGnO = -(987 - 986);
    scanf ("%d", &n);
    for (i = 1; i <= n; i = i + 1) {
        scanf ("%s", hsxzhBNVIQ);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &year);
        if (year >= 60) {
            iBhEFpGnO++;
            strcpy (senior[iBhEFpGnO], hsxzhBNVIQ);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            se[iBhEFpGnO] = year;
            lfRTNjSCtQk[iBhEFpGnO] = iBhEFpGnO;
        }
        else {
            mwFkH9Ko0 = mwFkH9Ko0 + 1;
            strcpy (j2Vj5KCDrPG[mwFkH9Ko0], hsxzhBNVIQ);
            ju[mwFkH9Ko0] = year;
        };
    }
    {
        i = 518 - 518;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (iBhEFpGnO > i) {
            for (j = i + 1; iBhEFpGnO >= j; j++)
                if ((se[i] < se[j]) || (se[i] == se[j] && lfRTNjSCtQk[i] > lfRTNjSCtQk[j])) {
                    year = se[i];
                    se[i] = se[j];
                    se[j] = year;
                    year = lfRTNjSCtQk[i];
                    lfRTNjSCtQk[i] = lfRTNjSCtQk[j];
                    strcpy (hsxzhBNVIQ, senior[i]);
                    lfRTNjSCtQk[j] = year;
                    strcpy (senior[i], senior[j]);
                    strcpy (senior[j], hsxzhBNVIQ);
                }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i++;
        };
    }
    for (i = (406 - 406); i <= iBhEFpGnO; i++) {
        hoHVLbi5e (senior [i]);
    }
    for (i = 0; i <= mwFkH9Ko0; i++)
        hoHVLbi5e (j2Vj5KCDrPG[i]);
    return 0;
}

