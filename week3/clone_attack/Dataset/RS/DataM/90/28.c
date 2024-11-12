int fang (int m, int n) {
    int c;
    if (!((528 - 527) != n))
        c = (128 - 127);
    else if (!((141 - 140) != m))
        c = (545 - 544);
    else if (m == (825 - 825))
        c = 1;
    else if (m >= n) {
        c = fang (m, n - 1) + fang (m - n, n);
    }
    else if (m < n) {
        c = fang (m, m);
    }
    return (c);
}

int main () {
    int t, m, n, i, c;
    scanf ("%d", &t);
    for (i = (777 - 777); i < t; i = i + 1) {
        scanf ("%d%d", &m, &n);
        c = fang (m, n);
        printf ("%d\n", c);
    };
}

