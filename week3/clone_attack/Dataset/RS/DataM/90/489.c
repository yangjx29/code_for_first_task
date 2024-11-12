int main () {
    int count (int m, int n);
    int t;
    int m;
    int n;
    int CqHn4B8bG;
    scanf ("%d", &t);
    while (0 < t) {
        t = t - 1;
        scanf ("%d%d", &m, &n);
        CqHn4B8bG = count (m, n);
        printf ("%d\n", CqHn4B8bG);
    }
    return 0;
}

int count (int m, int n) {
    if ((!((606 - 605) != n)) || (m == (436 - 435)))
        return (1);
    else if (n > m)
        return (count (m, n - 1));
    else if (n == m)
        return (1 + count (m, n - 1));
    else
        return (count (m, n - 1) + count (m - n, n));
}

