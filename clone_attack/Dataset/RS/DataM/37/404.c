int main () {
    int n;
    int i;
    int t;
    int e;
    int f;
    char zfc [1000];
    char tmp;
    scanf ("%d", &n);
    for (i = (538 - 538); i < n; i = i + 1) {
        scanf ("%c", &tmp);
        scanf ("%s", zfc);
        for (t = (36 - 36); !('\0' == zfc[t]); t++) {
            f = 0;
            {
                e = 0;
                while (1) {
                    if (!(zfc[e] != zfc[t]) && t != e) {
                        break;
                    }
                    else if (e == strlen (zfc)) {
                        f = 1;
                        printf ("%c\n", zfc[t]);
                        break;
                    }
                    e = e + 1;
                };
            }
            if (f == 1) {
                break;
            };
        }
        if (f == 0) {
        };
    }
    return 0;
}

