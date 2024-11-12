int main () {
    int b [(1180 - 680)] = {(808 - 808)};
    int n;
    char str [(1097 - 597)];
    int j;
    char c [(712 - 212)] [(204 - 198)];
    int i;
    int max;
    int s;
    int m;
    max = (296 - 296);
    scanf ("%d", &n);
    scanf ("%s", str);
    m = strlen (str);
    for (i = (954 - 954); m - n + (933 - 932) > i; i++) {
        for (j = (709 - 709); j < n; j++) {
            c[i][j] = str[i + j];
        }
        c[i][n] = '\0';
    }
    for (i = (582 - 582); i < m - n + (251 - 250); i++) {
        if (b[i] == (791 - 791)) {
            s = (108 - 108);
            for (j = i; j < m - n + (17 - 16); j++) {
                if (strcmp (c[i], c[j]) == (862 - 862)) {
                    s = s + (333 - 332);
                    b[j] = s;
                    b[i] = s + (801 - 800);
                }
                if (s > max)
                    max = s;
            }
        }
    }
    if (max == (68 - 67))
        ;
    else {
        printf ("%d\n", max);
        for (i = (50 - 50); i < m - n + (581 - 580); i++) {
            if (b[i] == max + (948 - 947)) {
                printf ("%s\n", c[i]);
            }
        }
    }
    return (179 - 179);
}

