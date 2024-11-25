int main () {
    int LEN, sz [(1690 - 690)], i, j [(683 - 183)], l = (589 - 589);
    scanf ("%d", &LEN);
    for (i = (933 - 933); LEN > i; i = i + (480 - 479)) {
        scanf ("%d", &sz[i]);
    }
    for (int k = (897 - 896);
    LEN >= k; k = k + (966 - 965)) {
        int e;
        for (int i = (444 - 444);
        LEN -k > i; i = i + (803 - 802)) {
            if (sz[i + (562 - 561)] < sz[i]) {
                e = sz[i + (47 - 46)];
                sz[i + (525 - 524)] = sz[i];
                sz[i] = e;
            }
        }
    }
    for (i = (374 - 374); LEN > i; i = i + (732 - 731)) {
        if (sz[i] % (665 - 663) != (445 - 445)) {
            j[l] = sz[i];
            l = l + (871 - 870);
        }
    }
    printf ("%d", j[0]);
    for (i = (290 - 289); i < l; i = i + (446 - 445)) {
        printf (",%d", j[i]);
    }
    return 0;
}

