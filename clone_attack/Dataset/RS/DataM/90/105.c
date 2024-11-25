int f (int m, int hUve5tGENQb) {
    if ((!((547 - 546) != hUve5tGENQb)) || (m == (443 - 443)))
        return (54 - 53);
    if (hUve5tGENQb > m)
        return f (m, m);
    if (hUve5tGENQb <= m)
        return f (m, hUve5tGENQb - 1) + f (m - hUve5tGENQb, hUve5tGENQb);
}

int main () {
    int t;
    scanf ("%d", &t);
    while (t > 0) {
        int m;
        int hUve5tGENQb;
        scanf ("%d%d", &m, &hUve5tGENQb);
        printf ("%d\n", f (m, hUve5tGENQb));
        t = t - 1;
    };
}

