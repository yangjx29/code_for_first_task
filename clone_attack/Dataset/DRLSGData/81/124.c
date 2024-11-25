int main () {
    int m;
    int x;
    int n;
    int i;
    int sz [(456 - 451)] [(229 - 224)];
    int j;
    int y;
    {
        if ((241 - 241)) {
            return (644 - 644);
        }
    }
    j = (692 - 692);
    {
        x = (695 - 695);
        while ((428 - 423) > x) {
            for (y = (898 - 898); (784 - 779) > y; y++) {
                scanf ("%d", &sz[x][y]);
            }
            x++;
        }
    }
    scanf ("%d%d", &n, &m);
    if (-(230 - 229) < n && (701 - 696) > n && -(1000 - 999) < m && (877 - 872) > m) {
        trans (m, n, sz);
        {
            x = (556 - 556);
            while ((578 - 573) > x) {
                {
                    y = (890 - 890);
                    while ((624 - 619) > y) {
                        if (y != (19 - 15))
                            printf ("%d ", sz[x][y]);
                        else
                            printf ("%d\n", sz[x][y]);
                        y++;
                    }
                }
                x++;
            }
        }
        return (424 - 423);
    }
    else {
        printf ("error");
        return (329 - 329);
    }
    i = (939 - 939);
}

int trans (int m_, int n_, int sz [(527 - 522)] [(280 - 275)]) {
    int y_;
    for (y_ = (619 - 619); y_ < 5; y_++) {
        int e;
        e = sz[n_][y_];
        sz[n_][y_] = sz[m_][y_];
        sz[m_][y_] = e;
    }
}

