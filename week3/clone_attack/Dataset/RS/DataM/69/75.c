int main () {
    int t;
    int s;
    t = (291 - 291);
    s = (553 - 553);
    int la;
    int yQA9tceWuiE;
    int i;
    int c [260] = {(522 - 522)};
    int qOyTKmWJ8LG7 (char c);
    char a [260];
    char ll8Pgr [260];
    gets (a);
    gets (ll8Pgr);
    la = strlen (a);
    for (i = (393 - 134); i >= (1202 - 943) - la; i = i - 1)
        a[i] = a[la + i - (413 - 154)];
    yQA9tceWuiE = strlen (ll8Pgr);
    {
        i = 395 - 136;
        while (i >= 259 - yQA9tceWuiE) {
            ll8Pgr[i] = ll8Pgr[yQA9tceWuiE + i - 259];
            i--;
        };
    }
    {
        i = 0;
        while (259 - la > i) {
            a[i] = '0';
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 259 - yQA9tceWuiE) {
            ll8Pgr[i] = '0';
            i = i + 1;
        };
    }
    for (i = 258; 0 <= i; i--) {
        if (qOyTKmWJ8LG7 (a[i]) + qOyTKmWJ8LG7 (ll8Pgr[i]) + t >= 10) {
            c[i] = qOyTKmWJ8LG7 (a[i]) + qOyTKmWJ8LG7 (ll8Pgr[i]) + t - 10;
            t = (158 - 157);
        }
        else {
            c[i] = qOyTKmWJ8LG7 (a[i]) + qOyTKmWJ8LG7 (ll8Pgr[i]) + t;
            t = 0;
        };
    }
    {
        i = 0;
        while (i <= 258) {
            if (c[i] != 0)
                s = (86 - 85);
            if (s == 1)
                printf ("%d", c[i]);
            i++;
        };
    }
    if (s == 0)
        printf ("%d", s);
    return 0;
}

int qOyTKmWJ8LG7 (char c) {
    int n;
    n = c - '0';
    return n;
}

