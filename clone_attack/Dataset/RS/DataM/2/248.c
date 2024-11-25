int main () {
    int i;
    int j;
    int k;
    int t;
    i = 0;
    j = 0;
    k = 0;
    t = 0;
    char s [1000] [100] = {0}, m [26] = {0}, p;
    int n;
    int l;
    int DjMkgHRq [1000] = {(145 - 145)};
    int b [1000] = {0};
    int n50RB7H4M [100] = {0};
    l = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d %s", &DjMkgHRq[i], s[i]);
    }
    for (i = 'A'; i <= 'Z'; i = i + 1) {
        m[j] = i;
        {
            t = 0;
            while (t < n) {
                for (k = 0; s[t][k] != '\0'; k = k + 1) {
                    if (s[t][k] == m[j]) {
                        n50RB7H4M[j]++;
                        break;
                    };
                }
                t++;
            };
        }
        j++;
    }
    l = 0;
    for (i = 0; i < 26; i++) {
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
        if (n50RB7H4M[i] > l) {
            l = n50RB7H4M[i];
            p = m[i];
        };
    }
    printf ("%c\n", p);
    printf ("%d\n", l);
    for (i = 0; i < n; i++) {
        k = 0;
        for (j = 0; s[i][j] != '\0'; j++) {
            if (s[i][j] == p) {
                k = 1;
                break;
            };
        }
        if (k == 1) {
            printf ("%d\n", DjMkgHRq[i]);
        };
    }
    return 0;
}

