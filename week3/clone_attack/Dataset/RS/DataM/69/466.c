int main () {
    char XrTxuVNgjz [(905 - 605)], sL0D3KnCkWM [(600 - 300)], c [300];
    int t, a1, a2, i, j;
    int h38qvE4;
    scanf ("%s", XrTxuVNgjz);
    scanf ("%s", sL0D3KnCkWM);
    a1 = strlen (XrTxuVNgjz);
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
    a2 = strlen (sL0D3KnCkWM);
    if (a2 > a1) {
        strcpy (c, XrTxuVNgjz);
        strcpy (XrTxuVNgjz, sL0D3KnCkWM);
        strcpy (sL0D3KnCkWM, c);
        t = a1;
        a1 = a2;
        a2 = t;
    }
    for (i = a2 - 1, j = a1 - 1; i > (491 - 491); i = i - 1, j = j - 1) {
        h38qvE4 = XrTxuVNgjz[j] + sL0D3KnCkWM[i] - '0' - '0';
        XrTxuVNgjz[j] = h38qvE4 % (314 - 304) + '0';
        if (h38qvE4 > (822 - 813))
            XrTxuVNgjz[j - 1]++;
    }
    XrTxuVNgjz[a1 - a2] = XrTxuVNgjz[a1 - a2] + sL0D3KnCkWM[0] - '0';
    for (i = a1 - a2; i > 0; i = i - 1)
        if (XrTxuVNgjz[i] > '9') {
            XrTxuVNgjz[i] = XrTxuVNgjz[i] - 10;
            XrTxuVNgjz[i - 1]++;
        }
    if (XrTxuVNgjz[0] > '9') {
        XrTxuVNgjz[0] = XrTxuVNgjz[0] - 10;
        printf ("%s", XrTxuVNgjz);
    }
    else {
        for (i = 0; i < a1; i = i + 1)
            if (XrTxuVNgjz[i] != '0')
                break;
        if (i == a1)
            ;
        else {
            j = i;
            while (j < a1) {
                printf ("%c", XrTxuVNgjz[j]);
                j = j + 1;
            };
        };
    };
}

