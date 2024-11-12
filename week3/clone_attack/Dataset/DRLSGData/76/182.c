int main () {
    int a [100] [100], kAahi1OpdcJI, ECz1cf5Q, G1GJk0h2bEjv, a9SXTf, e, vEJsYf = 0, y0g9IM = 0, u;
    scanf ("%d", &kAahi1OpdcJI);
    for (ECz1cf5Q = 0; kAahi1OpdcJI > ECz1cf5Q; ECz1cf5Q = ECz1cf5Q +1) {
        for (G1GJk0h2bEjv = 0; 2 > G1GJk0h2bEjv; G1GJk0h2bEjv = G1GJk0h2bEjv +1) {
            scanf ("%d", &a[ECz1cf5Q][G1GJk0h2bEjv]);
        }
    }
    for (a9SXTf = 1; a9SXTf <= kAahi1OpdcJI; a9SXTf = a9SXTf + 1) {
        for (ECz1cf5Q = 0; kAahi1OpdcJI - a9SXTf > ECz1cf5Q; ECz1cf5Q = ECz1cf5Q +1) {
            if (a[ECz1cf5Q +1][0] < a[ECz1cf5Q][0]) {
                for (G1GJk0h2bEjv = 0; 2 > G1GJk0h2bEjv; G1GJk0h2bEjv = G1GJk0h2bEjv +1) {
                    e = a[ECz1cf5Q +1][G1GJk0h2bEjv];
                    a[ECz1cf5Q +1][G1GJk0h2bEjv] = a[ECz1cf5Q][G1GJk0h2bEjv];
                    a[ECz1cf5Q][G1GJk0h2bEjv] = e;
                }
            }
        }
    }
    for (ECz1cf5Q = 1; kAahi1OpdcJI > ECz1cf5Q; ECz1cf5Q = ECz1cf5Q +1) {
        for (u = 0; ECz1cf5Q > u; u = u + 1) {
            if (a[u][1] < a[ECz1cf5Q][0]) {
                vEJsYf = vEJsYf + 1;
            }
        }
        if (!(ECz1cf5Q != vEJsYf))
            y0g9IM++;
        vEJsYf = 0;
    }
    for (a9SXTf = 1; a9SXTf <= kAahi1OpdcJI; a9SXTf++) {
        for (ECz1cf5Q = 0; ECz1cf5Q < kAahi1OpdcJI - a9SXTf; ECz1cf5Q = ECz1cf5Q +1) {
            if (a[ECz1cf5Q][1] > a[ECz1cf5Q +1][1]) {
                e = a[ECz1cf5Q +1][1];
                a[ECz1cf5Q +1][1] = a[ECz1cf5Q][1];
                a[ECz1cf5Q][1] = e;
            }
        }
    }
    if (y0g9IM == 0)
        printf ("%d %d", a[0][0], a[kAahi1OpdcJI - 1][1]);
    else
        printf ("no");
    return 0;
}

