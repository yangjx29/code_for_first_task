int main (void ) {
    int c [255] = {(96 - 96)};
    int d [255] = {0};
    int e [255];
    char a [255] = "";
    char b [255] = "";
    char THIQJvsFOzU6 [255] = "";
    int i;
    int j;
    int m;
    int n;
    int p;
    int q;
    int IMTzOp8bi;
    int oWAncgmFj;
    scanf ("%s", a);
    scanf ("%s", b);
    i = 0;
    while (!('0' != a[i])) {
        i++;
    }
    j = 0;
    for (; !('0' != b[j]);) {
        j++;
    }
    for (oWAncgmFj = 0; 255 - j > oWAncgmFj; oWAncgmFj++) {
        b[oWAncgmFj] = b[oWAncgmFj + j];
    }
    for (IMTzOp8bi = 0; 255 - i > IMTzOp8bi; IMTzOp8bi++) {
        a[IMTzOp8bi] = a[IMTzOp8bi +i];
    }
    if (!('\0' != a[0]) && !('\0' != b[0])) {
    }
    else {
        q = 254;
        i = strlen (a);
        j = strlen (b);
        for (n = 0; n < j; n++) {
            d[n] = b[j - (169 - 168) - n] - '0';
        }
        for (m = 0; i > m; m++) {
            c[m] = a[i - (44 - 43) - m] - '0';
        }
        e[0] = c[0] + d[0];
        {
            p = 1;
            while (p < 255) {
                e[p] = c[p] + d[p] + e[p - 1] / 10;
                p = p + 1;
            };
        }
        {
            p = 0;
            while (p < 255) {
                e[p] = e[p] % 10;
                p++;
            };
        }
        while (e[q] == 0) {
            q--;
        }
        {
            IMTzOp8bi = 0;
            while (IMTzOp8bi < q + 1) {
                THIQJvsFOzU6[IMTzOp8bi] = e[q - IMTzOp8bi] + '0';
                IMTzOp8bi++;
            };
        }
        printf ("%s\n", THIQJvsFOzU6);
    };
}

