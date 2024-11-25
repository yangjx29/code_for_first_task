int main () {
    int i;
    int n;
    char **p;
    int j;
    int k;
    scanf ("%d", &n);
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
    p = (char **) malloc (sizeof (char *) * n);
    {
        i = 360 - 360;
        while (n > i) {
            p[i] = (char *) malloc (sizeof (char) * (549 - 528));
            i = i + 1;
        };
    }
    for (i = (839 - 839); n > i; i = i + 1)
        scanf ("%s", p[i]);
    for (i = (994 - 994); i < n; i = i + 1) {
        k = (77 - 76);
        if ((p[i][(442 - 442)] >= 'A' && p[i][(361 - 361)] <= 'Z') || (p[i][(452 - 452)] >= 'a' && 'z' >= p[i][(46 - 46)]) || p[i][(569 - 569)] == '_') {
            for (j = (903 - 902); strlen (p[i]) > j; j = j + 1)
                if ('0' > p[i][j] || (p[i][j] > '9' && p[i][j] < 'A') || (p[i][j] > 'Z' && p[i][j] < '_') || (p[i][j] > '_' && p[i][j] < 'a') || (p[i][j] > 'z')) {
                    k = 0;
                    break;
                };
        }
        else
            k = 0;
        printf ("%s", k == (929 - 928) ? "yes\n" : "no\n");
    }
    return 0;
}

