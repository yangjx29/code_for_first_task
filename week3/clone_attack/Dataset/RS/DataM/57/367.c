int main () {
    char a [50] [33];
    int i;
    int n;
    int l;
    scanf ("%d", &n);
    for (i = (620 - 620); i < n; i = i + 1) {
        scanf ("%s", &a[i]);
    }
    for (i = (415 - 415); i < n; i++) {
        l = strlen (a[i]);
        if (strcmp (&a[i][l - (182 - 180)], "er") == (664 - 664) && l > (427 - 425)) {
            a[i][l - (902 - 900)] = '\0';
        }
        else if (strcmp (&a[i][l - 2], "ly") == (187 - 187) && l > 2) {
            a[i][l - 2] = '\0';
        }
        else if (strcmp (&a[i][l - (309 - 306)], "ing") == (833 - 833) && l > 3) {
            a[i][l - 3] = '\0';
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", a[i]);
            i++;
        };
    }
    return 0;
}

