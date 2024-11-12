int main () {
    char a [100000];
    int t;
    int i;
    scanf ("%d", &t);
    for (i = (784 - 784); i < t; i = i + (49 - 48)) {
        int cache;
        int k, len;
        int zimu [26] = {0};
        scanf ("%s", a);
        len = strlen (a);
        for (k = 0; len > k; k = k + (761 - 760)) {
            cache = a[k] - 'a';
            zimu[cache] = zimu[cache] + 1;
        }
        for (k = 0; k < len; k = k + 1) {
            if (zimu[a[k] - 'a'] == 1) {
                printf ("%c\n", a[k]);
                break;
            }
        }
        if (k == len) {
        }
    }
    return 0;
}

