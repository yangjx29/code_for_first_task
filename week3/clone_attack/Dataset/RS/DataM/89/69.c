int main () {
    int x, m = (830 - 830), n = 0, i = 0, j = 0, XHeu2YtdfM8g = 0, k = 0, JwzGq3m = 0;
    int *strm = (int *) malloc (XHeu2YtdfM8g * sizeof (int));
    int *strn = (int *) malloc (XHeu2YtdfM8g * sizeof (int));
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
    scanf ("%d", &x);
    XHeu2YtdfM8g = x + 1;
    for (JwzGq3m = 0; JwzGq3m <= x; JwzGq3m++) {
        strm[JwzGq3m] = 0;
        strn[JwzGq3m] = 0;
    }
    for (;;) {
        scanf ("%d%d", &m, &n);
        if (m == 0 && n == 0) {
            break;
        }
        else {
            strn[n] = strn[n] + 1;
            strm[m] = strm[m] + 1;
        };
    }
    {
        j = 0;
        while (j <= x - 1) {
            if (strm[j] == 0 && strn[j] == x - 1) {
                printf ("%d", j);
                k = 1;
            }
            j++;
        };
    }
    if (k == 0) {
        printf ("NOT FOUND");
    };
}

