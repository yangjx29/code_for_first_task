main () {
    int HPme4h3ybQ;
    int vzyaRNbvh;
    int i;
    int e;
    int j;
    int k;
    char hR9JSBKtWCwO [250];
    char b [250];
    char PHjXyci79f [250];
    scanf ("%s %s", hR9JSBKtWCwO, b);
    HPme4h3ybQ = strlen (hR9JSBKtWCwO);
    vzyaRNbvh = strlen (b);
    k = 0;
    if (vzyaRNbvh > HPme4h3ybQ) {
        {
            i = 0;
            while (vzyaRNbvh > i) {
                PHjXyci79f[i] = hR9JSBKtWCwO[i];
                hR9JSBKtWCwO[i] = b[i];
                b[i] = PHjXyci79f[i];
                i++;
            };
        }
        e = HPme4h3ybQ;
        HPme4h3ybQ = vzyaRNbvh;
        vzyaRNbvh = e;
    }
    if (vzyaRNbvh < HPme4h3ybQ) {
        for (i = HPme4h3ybQ -1; HPme4h3ybQ -vzyaRNbvh <= i; i = i - 1)
            b[i] = b[i + vzyaRNbvh - HPme4h3ybQ];
        for (i = 0; HPme4h3ybQ -vzyaRNbvh > i; i = i + 1)
            b[i] = '0';
    }
    for (i = HPme4h3ybQ -1; 0 < i; i = i - 1) {
        PHjXyci79f[i] = hR9JSBKtWCwO[i] + b[i] - '0';
        if ('9' < PHjXyci79f[i]) {
            PHjXyci79f[i] = PHjXyci79f[i] - 10;
            hR9JSBKtWCwO[i - 1] = hR9JSBKtWCwO[i - 1] + 1;
        };
    }
    PHjXyci79f[0] = hR9JSBKtWCwO[0] + b[0] - '0';
    if (PHjXyci79f[0] > '9') {
        PHjXyci79f[0] = PHjXyci79f[0] - 10;
        for (i = 0; HPme4h3ybQ > i; i = i + 1)
            printf ("%c", PHjXyci79f[i]);
    }
    else {
        for (i = 0; i < HPme4h3ybQ; i++) {
            if (PHjXyci79f[i] != '0') {
                k = 1;
                for (j = i; j < HPme4h3ybQ; j++)
                    printf ("%c", PHjXyci79f[j]);
            }
            if (k == 1)
                break;
        }
        if (k == 0)
            ;
    };
}

