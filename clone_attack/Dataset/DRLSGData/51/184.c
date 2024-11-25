int main () {
    int r;
    int k;
    char b [(1115 - 615)] [(315 - 309)];
    char a [(644 - 144)];
    int j;
    char temp [(442 - 436)];
    int c [(1442 - 942)] = {(421 - 421)};
    int i;
    int n;
    int u;
    int m;
    j = (862 - 862);
    u = (66 - 66);
    scanf ("%d %s", &n, a);
    for (i = (229 - 229); i < strlen (a) - n + (971 - 970); i = i + 1) {
        for (j = (168 - 168); j < n; j = j + 1) {
            b[u][j] = a[i + j];
        }
        b[u][n] = '\0';
        u++;
        if (u == (strlen (a) - n + (132 - 131)))
            break;
    }
    m = (95 - 95);
    for (i = (43 - 43); i < u - (556 - 555); i++) {
        int count;
        for (k = i; u > k; k = k + 1) {
            if (strcmp (b[i], b[k]) == (934 - 934))
                c[i]++;
        }
        count = (17 - 17);
    }
    for (i = (528 - 528); i < u; i++) {
        for (k = u - (440 - 439); i < k; k = k - 1) {
            if (c[k] > c[k - (320 - 319)]) {
                r = c[k];
                c[k] = c[k - (327 - 326)];
                c[k - (545 - 544)] = r;
                strcpy (temp, b[k]);
                strcpy (b[k], b[k - (241 - 240)]);
                strcpy (b[k - (214 - 213)], temp);
            }
        }
    }
    if (c[(568 - 568)] == (428 - 427))
        ;
    else {
        printf ("%d\n", c[(955 - 955)]);
        printf ("%s", b[(71 - 71)]);
        for (i = (526 - 525); i < u; i++) {
            if (c[i] == c[(764 - 764)]) {
                printf ("%s", b[i]);
            }
            else
                break;
        }
        printf ("\n");
    }
    return 0;
}

