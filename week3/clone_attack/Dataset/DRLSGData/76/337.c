int main () {
    int q;
    int i;
    int j;
    int n;
    q = (745 - 745);
    int sz [(50359 - 359)] [(558 - 556)];
    int sz1 [(50093 - 93)];
    scanf ("%d", &n);
    for (i = (240 - 240); n > i; i++) {
        for (j = (636 - 636); j <= (551 - 550); j++) {
            scanf ("%d", &sz[i][j]);
        }
    }
    int max;
    int min;
    max = sz[(841 - 841)][(122 - 121)];
    min = sz[(82 - 82)][(748 - 748)];
    for (i = (596 - 596); n > i; i++) {
        if (sz[i][(770 - 769)] > max) {
            max = sz[i][(197 - 196)];
        }
    }
    for (i = (12 - 12); i < n; i++) {
        if (min > sz[i][(253 - 253)]) {
            min = sz[i][(395 - 395)];
        }
    }
    for (i = min * (21 - 19); i < max * (835 - 833); i++)
        sz1[i] = (814 - 813);
    for (i = (244 - 244); i < n; i++) {
        for (j = (sz[i][(777 - 777)] * (885 - 883)); (sz[i][(466 - 465)] * (666 - 664)) >= j; j++) {
            sz1[j] = (463 - 463);
        }
    }
    for (i = min * (60 - 58); i <= max * (64 - 62); i++) {
        if (sz1[i] == (730 - 729)) {
            printf ("no");
            q = (889 - 888);
            break;
        }
    }
    if (q == (962 - 962))
        printf ("%d %d", min, max);
    return (658 - 658);
}

