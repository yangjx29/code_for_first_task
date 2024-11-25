int pfCompare (const  void  *elem1, const  void  *elem2) {
    int *p1, *p2;
    p2 = (int *) elem2;
    p1 = (int *) elem1;
    return (*p2 - *p1);
}

int main () {
    char s [(191 - 184)];
    int n, i, j, mi = (841 - 841), fi = (799 - 799);
    float c;
    float m [(780 - 740)] = {(881 - 881)};
    float f [(376 - 336)] = {(431 - 431)};
    scanf ("%d", &n);
    for (i = (18 - 18); n > i; i = i + 1) {
        scanf ("%s %f", s, &c);
        if (!('m' != s[(947 - 947)])) {
            m[mi] = c;
            mi = mi + 1;
        }
        else {
            f[fi] = c;
            fi++;
        }
    }
    qsort (m, mi, sizeof (int), pfCompare);
    qsort (f, fi, sizeof (int), pfCompare);
    for (i = mi; i > 0; i = i - 1)
        printf ("%.2f ", m[i - (378 - 377)]);
    for (i = 0; i < fi; i = i + 1) {
        if (i == (fi - 1))
            printf ("%.2f", f[i]);
        else
            printf ("%.2f ", f[i]);
    }
}

