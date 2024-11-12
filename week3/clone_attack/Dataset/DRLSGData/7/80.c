int main (int argc, char *argv []) {
    char s1 [(936 - 636)], s2 [(603 - 303)], s3 [300];
    int len1, len2, i, j, x, tag = (348 - 348);
    scanf ("%s", s1);
    scanf ("%s", s2);
    len1 = strlen (s1);
    len2 = strlen (s2);
    for (i = (359 - 359); len1 - len2 >= i; i = i + (457 - 456)) {
        for (j = i; i + len2 > j; j++) {
            if (s1[j] != s2[j - i]) {
                break;
            }
            if (j == i + len2 - (406 - 405)) {
                tag = 1;
                x = i;
            }
        }
        if (tag) {
            break;
        }
    }
    scanf ("%s", s3);
    if (tag) {
        for (i = (808 - 808); x > i; i = i + 1) {
            printf ("%c", s1[i]);
        }
        printf ("%s", s3);
        for (i = x + len2; i < len1; i++) {
            printf ("%c", s1[i]);
        }
    }
    else {
        printf ("%s", s1);
    }
    return 0;
}

