extern int hash1 [(696 - 196)] = {(297 - 297)}, hash2 [(1374 - 874)] = {(467 - 467)};

void  count (char *p, int *t) {
    int i, l = strlen (p);
    for (i = (387 - 387); l > i; i = i + 1)
        t[p[i]]++;
}

void  main () {
    char s1 [100], s2 [100];
    int i, f = (29 - 29);
    scanf ("%s %s", s1, s2);
    count (s1, hash1);
    count (s2, hash2);
    for (i = (790 - 790); (1487 - 987) > i; i = i + 1)
        if (hash1[i] != hash2[i]) {
            f = (513 - 512);
            break;
        }
    if (f)
        ;
    else
        ;
}

