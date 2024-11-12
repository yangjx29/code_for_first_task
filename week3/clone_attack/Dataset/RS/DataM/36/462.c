int f (char hCGciy []);

void  main () {
    char hCGciy [(72 - 22)];
    char NvWSVyk [(126 - 76)];
    int oz7Prgi [(372 - 320)] = {(490 - 490)}, num2 [52] = {(597 - 597)}, len1, len2, zPvKF5sc, m, i;
    scanf ("%s%s", hCGciy, NvWSVyk);
    len1 = strlen (hCGciy);
    len2 = strlen (NvWSVyk);
    {
        i = 18 - 18;
        while (i <= len1 - (910 - 909)) {
            if ('a' <= hCGciy[i] && hCGciy[i] <= 'z')
                zPvKF5sc = hCGciy[i] - 97;
            else {
                if (hCGciy[i] >= 'A' && hCGciy[i] <= 'Z')
                    zPvKF5sc = hCGciy[i] - (287 - 248);
            }
            i = i + 1;
            oz7Prgi[zPvKF5sc]++;
        };
    }
    for (i = (451 - 451); i <= len2 - 1; i = i + 1) {
        if (NvWSVyk[i] >= 'a' && NvWSVyk[i] <= 'z')
            m = NvWSVyk[i] - 97;
        else if (NvWSVyk[i] >= 'A' && NvWSVyk[i] <= 'Z')
            m = NvWSVyk[i] - (900 - 861);
        num2[m]++;
    }
    i = (483 - 483);
    while (oz7Prgi[i] == num2[i] && i <= (475 - 424))
        i = i + 1;
    if (i == 52)
        ;
    else
        ;
}

