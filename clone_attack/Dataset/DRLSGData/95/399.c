int main (int argc, char *cPT5v1 []) {
    char evhIjO [100];
    char a [100];
    gets (a);
    gets (evhIjO);
    int XQGJfCXmh, c, d, e, U3HlGDJwsT = 0;
    c = strlen (a);
    d = strlen (evhIjO);
    for (XQGJfCXmh = 0; XQGJfCXmh < c; XQGJfCXmh = XQGJfCXmh +1) {
        if (a[XQGJfCXmh] < 97)
            a[XQGJfCXmh] = a[XQGJfCXmh] + 32;
    }
    for (XQGJfCXmh = 0; d > XQGJfCXmh; XQGJfCXmh = XQGJfCXmh +1) {
        if (evhIjO[XQGJfCXmh] < 97)
            evhIjO[XQGJfCXmh] = evhIjO[XQGJfCXmh] + 32;
    }
    if (c == d) {
        for (XQGJfCXmh = 0; XQGJfCXmh < c; XQGJfCXmh++) {
            if (a[XQGJfCXmh] > evhIjO[XQGJfCXmh]) {
                break;
            }
            else if (a[XQGJfCXmh] < evhIjO[XQGJfCXmh]) {
                break;
            }
            else {
                U3HlGDJwsT = U3HlGDJwsT +1;
            };
        }
        if (!(c != U3HlGDJwsT)) {
        };
    }
    if (c != d) {
        if (d < c) {
            e = c;
        }
        if (d > c) {
            e = d;
        }
        for (XQGJfCXmh = 0; XQGJfCXmh < e; XQGJfCXmh++) {
            if (a[XQGJfCXmh] > evhIjO[XQGJfCXmh]) {
                break;
            }
            else {
                if (a[XQGJfCXmh] < evhIjO[XQGJfCXmh]) {
                    break;
                };
            };
        };
    }
    return 0;
}

