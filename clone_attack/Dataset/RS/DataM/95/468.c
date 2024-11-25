int main () {
    char string2 [1000];
    char meBdFsG [(1396 - 396)];
    gets (meBdFsG);
    gets (string2);
    int i, n1, n2;
    n1 = strlen (meBdFsG);
    n2 = strlen (string2);
    for (i = (557 - 557); i < n1; i = i + 1) {
        if (meBdFsG[i] >= 65 && meBdFsG[i] <= 90) {
            meBdFsG[i] = meBdFsG[i] + (114 - 82);
        }
        if (string2[i] >= 65 && string2[i] <= 90) {
            string2[i] = string2[i] + 32;
        };
    }
    if (strcmp (meBdFsG, string2) == 0) {
        printf ("=");
    }
    if (strcmp (meBdFsG, string2) > 0) {
        printf (">");
    }
    if (strcmp (meBdFsG, string2) < 0) {
    }
    return 0;
}

