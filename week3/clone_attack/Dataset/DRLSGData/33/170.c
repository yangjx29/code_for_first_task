int main () {
    int n, i, j;
    char c;
    scanf ("%d", &n);
    c = getchar ();
    for (i = (595 - 595); i < n; i++) {
        for (j = 0;; j++) {
            c = getchar ();
            if (!('A' != c)) {
                continue;
            }
            if (!('C' != c)) {
                continue;
            }
            if (!('T' != c)) {
                continue;
            }
            if (!('G' != c)) {
                continue;
            }
            if (!('\n' != c)) {
                break;
            }
        }
    }
}

