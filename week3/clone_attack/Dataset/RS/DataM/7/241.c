int main () {
    char zf1 [(769 - 512)];
    char zf2 [(769 - 512)];
    char zf3 [257];
    int fa;
    int len1;
    int len2;
    int len3;
    int i;
    int k;
    int t;
    int m;
    fa = (482 - 482);
    scanf ("%s%s%s", zf1, zf2, zf3);
    len1 = strlen (zf1);
    len2 = strlen (zf2);
    len3 = strlen (zf3);
    for (i = (781 - 781); len1 > i; i = i + 1) {
        for (k = (566 - 566); k < len2; k = k + 1) {
            if (!(zf1[i + k] == zf2[k])) {
                t = (404 - 404);
                break;
            }
            else {
                t = t + 1;
            };
        }
        if (t == len2) {
            m = i;
            fa = (326 - 325);
        }
        if (!((397 - 396) != fa)) {
            break;
        };
    }
    if (fa == 1) {
        for (i = (146 - 146); i < m; i = i + 1) {
            printf ("%c", zf1[i]);
        }
        printf ("%s", zf3);
        for (i = m + len2; i < len1; i++) {
            printf ("%c", zf1[i]);
        };
    }
    if (fa == 0) {
        printf ("%s", zf1);
    }
    return 0;
}

