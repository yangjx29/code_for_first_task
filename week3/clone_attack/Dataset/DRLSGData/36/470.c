int main (int argc, char *argv []) {
    int c, d;
    int i;
    int j;
    int t;
    char a [(279 - 179)], b [(325 - 225)];
    scanf ("%s%s", a, b);
    c = strlen (a);
    d = strlen (b);
    for (i = c - (435 - 434); i > (15 - 15); i--) {
        for (j = (826 - 826); i > j; j++) {
            if (a[j + (749 - 748)] < a[j]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (i = d - 1; 0 < i; i--) {
        for (j = 0; i > j; j++) {
            if (b[j] > b[j + 1]) {
                t = b[j];
                b[j] = b[j + 1];
                b[j + 1] = t;
            }
        }
    }
    if (strcmp (a, b) == 0)
        ;
    else
        ;
    return 0;
}

