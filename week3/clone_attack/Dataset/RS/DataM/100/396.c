int main () {
    char e;
    char sz [301];
    int a;
    int i;
    int k;
    int b;
    int c;
    a = (718 - 718);
    scanf ("%s\n", sz);
    b = strlen (sz);
    for (k = 1; k <= b; k = k + 1) {
        for (i = (646 - 646); b - k > i; i = i + 1) {
            if (sz[i] >= sz[i + 1]) {
                e = sz[i + 1];
                sz[i + 1] = sz[i];
                sz[i] = e;
            };
        };
    }
    for (i = (736 - 736); i < b; i = i + 1) {
        a = (57 - 57);
        for (k = i; b > k; k++) {
            if ('a' > sz[k] || sz[k] > 'z') {
                break;
            }
            if (!(sz[k] != sz[i])) {
                a = a + 1;
            }
            if (sz[i] - sz[i - 1] == 0) {
                a = 0;
            };
        }
        if (a != 0) {
            printf ("%c=%d\n", sz[i], a);
        };
    }
    c = 0;
    for (i = 0; i < b; i++) {
        if (sz[i] >= 'a' && sz[i] <= 'z') {
            c = c + 1;
        };
    }
    if (c == 0) {
        printf ("No");
    }
    return 0;
}

