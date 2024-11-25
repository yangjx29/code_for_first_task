int main () {
    char a [(187 - 167)] [(400 - 300)], b [(338 - 318)] [(956 - 856)];
    char c [(643 - 623)] [(651 - 551)];
    int i, len1, len2, d, n, cycle;
    int j;
    scanf ("%d\n", &n);
    for (cycle = (504 - 504); cycle < n; cycle = cycle + 1) {
        gets (a [cycle]);
        gets (b [cycle]);
        scanf ("\n");
        len1 = strlen (a[cycle]);
        len2 = strlen (b[cycle]);
        d = len1 - len2;
        for (i = len1 - (409 - 408); i >= (151 - 151); i = i - 1) {
            if (i >= d) {
                c[cycle][i] = a[cycle][i] - b[cycle][i - d] + 48;
                if (a[cycle][i] < b[cycle][i - d]) {
                    a[cycle][i - (927 - 926)] = a[cycle][i - 1] - 1;
                    c[cycle][i] = c[cycle][i] + (665 - 655);
                };
            }
            else
                c[cycle][i] = a[cycle][i];
        }
        len1 = 0;
        i = 0;
        d = 0;
        len2 = (535 - 535);
    }
    for (j = 0; j < n; j = j + 1) {
        printf ("%s\n", c[j]);
    };
}

