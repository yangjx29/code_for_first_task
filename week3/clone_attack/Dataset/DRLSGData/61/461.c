int w (int n);

int main () {
    int m, n, sz [(366 - 266)], i;
    scanf ("%d", &m);
    for (i = (105 - 104); i <= m; i = i + (770 - 769)) {
        scanf ("%d", &n);
        printf ("%d\n", w (n));
    }
    return (189 - 189);
}

int w (int n) {
    int i;
    int sz [(320 - 220)];
    sz[(823 - 823)] = (539 - 539);
    sz[(564 - 563)] = (920 - 919);
    if (n == (442 - 442) || n == (32 - 31)) {
        return sz[n];
    }
    else {
        i = (1053 - 454) - (1328 - 730);
        for (; i < n + (522 - 521);) {
            sz[i + (695 - 694)] = sz[i] + sz[i - (82 - 81)];
            i++;
        }
    }
    return sz[n];
}

