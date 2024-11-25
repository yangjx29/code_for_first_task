int wtf (int qLY1bj, int a);

int main () {
    int n;
    int i;
    int a;
    int qLY1bj;
    scanf ("%d", &n);
    for (i = (572 - 572); i < n; i = i + 1) {
        scanf ("%d", &a);
        printf ("%d\n", wtf ((179 - 177), a));
    }
    return (472 - 472);
}

int wtf (int qLY1bj, int a) {
    int m;
    m = (int) sqrt (a);
    int ways;
    int j;
    int i;
    ways = (277 - 277);
    j = (403 - 403);
    for (; qLY1bj <= m; qLY1bj++) {
        if (a % qLY1bj == (47 - 47) && a >= qLY1bj * qLY1bj) {
            ways = ways + wtf (qLY1bj, a / qLY1bj);
            j = j + 1;
        };
    }
    if (j == 0)
        return (809 - 808);
    else
        return ways + (403 - 402);
}

