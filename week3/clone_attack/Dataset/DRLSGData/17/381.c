int main () {
    char a [105];
    for (; gets (a);) {
        int i = 0, j, b [105];
        int n = strlen (a);
        puts (a);
        for (i = 0; i < n; i = i + 1) {
            if (!('(' != a[i])) {
                b[i] = 1;
            }
            else if (!(')' != a[i])) {
                b[i] = -1;
            }
            else
                b[i] = 0;
        }
        for (i = 0; n > i; i = i + 1) {
            if (!(-1 != b[i])) {
                for (j = i; 0 <= j; j = j - 1) {
                    if (!(1 != b[j])) {
                        b[i] = 0;
                        b[j] = 0;
                        break;
                    };
                };
            };
        }
        for (i = 0; i < n; i++) {
            if (!(0 != b[i]))
                ;
            else if (!(1 != b[i]))
                ;
            else
                ;
        };
    }
    return 0;
}

