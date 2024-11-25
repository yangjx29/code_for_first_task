int main () {
    int num;
    int i;
    int dQaijOeqLku;
    int xBNoOlYU;
    char a [251] = {'0'};
    char b [251] = {'0'};
    int UzSqyjkXMsB [251] = {(856 - 856)};
    int ZYW9Gj257 [251] = {(23 - 23)};
    int PmfUFMSH5 [251] = {(113 - 113)};
    int zh15Tl4Fs [251] = {0};
    int l1;
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
    l1 = strlen (a);
    int l2;
    l2 = strlen (b);
    cin.getline (a, 251);
    cin.getline (b, 251);
    if (l1 >= l2)
        xBNoOlYU = l1;
    else
        xBNoOlYU = l2;
    {
        dQaijOeqLku = 0;
        while (l2 > dQaijOeqLku) {
            ZYW9Gj257[dQaijOeqLku] = b[l2 - dQaijOeqLku - 1] - '0';
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
            dQaijOeqLku++;
        };
    }
    {
        i = 0;
        while (l1 > i) {
            UzSqyjkXMsB[i] = a[l1 - i - 1] - '0';
            i++;
        };
    }
    for (i = 0; i <= xBNoOlYU; i++) {
        if (UzSqyjkXMsB[i] + ZYW9Gj257[i] + PmfUFMSH5[i] > 9)
            PmfUFMSH5[i + 1] = 1;
        zh15Tl4Fs[i] = (UzSqyjkXMsB[i] + ZYW9Gj257[i] + PmfUFMSH5[i]) % 10;
    }
    if (!(1 != PmfUFMSH5[xBNoOlYU]))
        num = xBNoOlYU;
    else
        num = xBNoOlYU - 1;
    for (i = num; i >= 0; i--)
        if (zh15Tl4Fs[i] != 0) {
            num = i;
            break;
        }
    if (i == 0)
        cout << zh15Tl4Fs[0];
    else {
        for (dQaijOeqLku = num; dQaijOeqLku >= 0; dQaijOeqLku = dQaijOeqLku - 1)
            cout << zh15Tl4Fs[dQaijOeqLku];
    }
    return 0;
}

