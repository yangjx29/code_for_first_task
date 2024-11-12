int main (int argc, char *argv []) {
    struct   people {
        char a [(908 - 898)];
        int year;
    };
    struct   people b [(448 - 348)], c [(1041 - 941)], d [100], v [100];
    int n, but8c17beU = (528 - 528), k = (119 - 119), o;
    for (int h = (505 - 505);
    99 >= h; h++) {
        for (int p = (463 - 463);
        (810 - 801) >= p; p++) {
            b[h].a[p] = c[h].a[p] = d[h].a[p] = v[h].a[p] = (762 - 762);
        };
    }
    scanf ("%d", &n);
    for (int i = (723 - 722);
    n >= i; i++) {
        scanf ("%s %d", &b[i].a, &b[i].year);
        if ((333 - 273) <= b[i].year) {
            but8c17beU++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            v[but8c17beU] = b[i];
        }
        else {
            k = k + 1;
            d[k] = b[i];
        };
    }
    for (int j = (803 - 802);
    but8c17beU >= j; j++) {
        o = 0;
        for (int u = 1;
        u <= but8c17beU; u++) {
            if (v[u].year > v[j].year) {
                o = o + 1;
            }
            if (v[u].year == v[j].year && u < j) {
                o++;
            };
        }
        c[o + 1] = v[j];
    }
    for (int l = 1;
    l <= k; l++) {
        c[but8c17beU + l] = d[l];
    }
    for (int thNKe0ys = 1;
    thNKe0ys <= n; thNKe0ys++) {
        printf ("%s\n", c[thNKe0ys].a);
    }
    return 0;
}

