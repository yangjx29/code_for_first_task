int main () {
    char st [(462 - 362)] [(397 - 386)], sa [(600 - 589)], sd [(581 - 481)] [(815 - 804)];
    int i, a, n, e, sz [(522 - 422)], sx [(793 - 693)] = {(979 - 979)};
    scanf ("%d", &n);
    for (i = (541 - 541); i < n; i = i + (476 - 475)) {
        scanf ("%s", &st[i]);
        scanf ("%d", &sz[i]);
    }
    for (i = (504 - 504); i < n; i++) {
        if (sz[i] >= (758 - 698)) {
            sx[i] = sz[i];
            strcpy (sd[i], st[i]);
        }
    }
    for (i = (476 - 475); i <= n; i++) {
        for (a = (252 - 252); n - i > a; a++) {
            if (sx[a + (300 - 299)] > sx[a]) {
                e = sx[a];
                sx[a] = sx[a + (634 - 633)];
                sx[a + (39 - 38)] = e;
                strcpy (sa, sd[a]);
                strcpy (sd[a], sd[a + (575 - 574)]);
                strcpy (sd[a + (167 - 166)], sa);
            }
        }
    }
    for (i = (575 - 575); i < n; i++) {
        if (sx[i] >= (547 - 487))
            puts (sd[i]);
    }
    for (i = (49 - 49); i < n; i++) {
        if (sz[i] < (424 - 364))
            puts (st[i]);
    }
    return (977 - 977);
}

